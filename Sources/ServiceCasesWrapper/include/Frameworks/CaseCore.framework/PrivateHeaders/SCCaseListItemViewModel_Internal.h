//
//  SCCaseListItemViewModel_Internal.h
//  CaseCore
//
//  Created by Amisha Goyal on 1/5/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

@import ServiceCore.ServiceCommon;
@import ServiceCore.ServiceCommon.Private;

#import "SCCaseListItemViewModel.h"

@interface SCCaseListItemViewModel ()
@property (nonatomic, copy, readwrite) NSString *caseId;
@property (nonatomic, copy, readwrite) NSString *subject;
@property (nonatomic, copy, readwrite) NSString *caseNumber;
@property (nonatomic, copy, readwrite) NSString *status;
@property (nonatomic, readwrite) NSDate *createdDate;
@property (nonatomic, readwrite) NSDate *lastModifiedDate;
@property (nonatomic, copy, readwrite) NSString *createdById;
@property (nonatomic, copy, readwrite) NSString *lastModifiedById;
@property (nonatomic, readwrite) NSDate *lastViewedDate;
@property (nonatomic, readwrite) NSDate *lastFeedItemModifiedDate;
@property (nonatomic, readwrite) NSString *lastFeedItemCreatedById;
@property (nonatomic, readwrite) NSDate *lastFeedItemModifiedDateOrCaseCreatedDate;
@property (nonatomic, readwrite, getter = isCaseListItemViewed) BOOL caseListItemViewed;

@end
