//
//  SCCaseListViewModel.h
//  CaseCore
//
//  Created by Amisha Goyal on 12/4/15.
//  Copyright © 2015 Salesforce.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SCCaseListViewModel : NSObject

@property (nonatomic, copy, readonly) NSArray *records;
@property (nonatomic, copy, readonly) NSString *developerName;
@property (nonatomic, copy, readonly) NSString *caseListId;
@property (nonatomic, copy, readonly) NSString *caseListName;
@property (nonatomic, copy, readonly) NSString *label;
@property (nonatomic, readonly) NSDate *lastRefreshTime;
@property (nonatomic, copy, readonly) NSString *soqlQuery;


@end
