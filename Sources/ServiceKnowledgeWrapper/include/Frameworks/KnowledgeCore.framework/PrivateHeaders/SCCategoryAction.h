//
//  SCCategoryAction.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/13/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import ServiceCore.ServiceCommon;
@import ServiceCore.ServiceCommon.Private;

#import "SCInternalDefines.h"

@interface SCCategoryAction : SCSSelfServiceAction

@property (nonatomic, copy) NSString *language;

+ (instancetype)actionToGetDataCategoryGroupsWithLanguage:(NSString*)language withResponseBlock:(SFCActionResponseBlock)responseBlock;

@end
