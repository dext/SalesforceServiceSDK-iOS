//
//  SCCaseAction.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/13/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import ServiceCore.ServiceCommon;
@import ServiceCore.ServiceCommon.Private;

@interface SCCaseAction : SCSSelfServiceAction

+ (instancetype)actionToDescribeQuickAction:(NSString*)quickActionName withResponseBlock:(SFCActionResponseBlock)responseBlock;
+ (instancetype)actionToCreateCaseWithQuickActionName:(NSString*)quickActionName fieldValues:(NSDictionary*)fieldValues withResponseBlock:(SFCActionResponseBlock)responseBlock;
+ (instancetype)actionToGetCaseWithId:(NSString*)caseId withResponseBlock:(SFCActionResponseBlock)responseBlock;
+ (instancetype)actionToGetCaseListsWithResponseBlock:(SFCActionResponseBlock)responseBlock;
+ (instancetype)actionToDescribeListWithId:(NSString*)listId withResponseBlock:(SFCActionResponseBlock)responseBlock;
+ (instancetype)actionToGetCasesForListWithId:(NSString*)listId soqlQuery:(NSString *)soqlQuery withResponseBlock:(SFCActionResponseBlock)responseBlock;


@end
