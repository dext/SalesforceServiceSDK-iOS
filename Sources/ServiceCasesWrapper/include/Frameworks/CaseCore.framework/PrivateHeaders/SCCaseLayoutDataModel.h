//
//  SCCaseLayoutDataModel.h
//  CaseCore
//
//  Created by Amisha Goyal on 12/4/15.
//  Copyright © 2015 Salesforce.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SCCaseLayoutDataModel : NSObject

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly) NSString *label;
@property (nonatomic, copy, readonly) NSArray *fields;

@end
