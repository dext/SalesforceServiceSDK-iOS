//
//  SCCaseListItemViewModel.h
//  CaseCore
//
//  Created by Amisha Goyal on 1/5/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface SCCaseListItemViewModel : NSObject

@property (nonatomic, copy, readonly) NSString *caseId;
@property (nonatomic, copy, readonly) NSString *subject;
@property (nonatomic, copy, readonly) NSString *caseNumber;
@property (nonatomic, copy, readonly) NSString *status;
@property (nonatomic, copy, readonly) NSString *createdById;
@property (nonatomic, copy, readonly) NSString *lastModifiedById;
@property (nonatomic, readonly) NSDate *createdDate;
@property (nonatomic, readonly) NSDate *lastViewedDate;
@property (nonatomic, readonly) NSDate *lastFeedItemModifiedDate;
@property (nonatomic, readonly) NSString *lastFeedItemCreatedById;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSDate *lastFeedItemModifiedDateOrCaseCreatedDate;

@property (nonatomic, readonly, getter = isCaseListItemViewed) BOOL caseListItemViewed;

@end
