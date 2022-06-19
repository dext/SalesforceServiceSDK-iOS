//
//  SCCaseContentManagerDelegate.h
//  CaseCore
//
//  Created by Amisha Goyal on 12/16/15.
//  Copyright © 2015 Salesforce.com. All rights reserved.
//

@class SCCaseLayoutDataModel;
@class SCCaseContentManager;

@protocol SCCaseContentManagerDelegate <NSObject>
@optional
- (void)caseContentManager:(SCCaseContentManager*)manager didLoadCaseLayoutDataModel:(SCCaseLayoutDataModel*)model;
- (void)caseContentManager:(SCCaseContentManager*)manager willLoadCaseLayoutDataModel:(SCCaseLayoutDataModel*)model;
- (void)caseContentManager:(SCCaseContentManager*)manager didRefreshCaseLayoutDataModel:(SCCaseLayoutDataModel*)model;
- (void)caseContentManager:(SCCaseContentManager*)manager willRefreshCaseLayoutDataModel:(SCCaseLayoutDataModel*)model;
- (void)caseContentManager:(SCCaseContentManager*)manager didReceiveError:(NSError*)error;
- (void)caseContentManagerDidLoadCaseList:(SCCaseContentManager*)manager fromCache:(BOOL)fromCache;
- (void)caseContentManager:(SCCaseContentManager*)manager didLoadCaseDetailWithCaseId:(NSString*)caseId;


@end
