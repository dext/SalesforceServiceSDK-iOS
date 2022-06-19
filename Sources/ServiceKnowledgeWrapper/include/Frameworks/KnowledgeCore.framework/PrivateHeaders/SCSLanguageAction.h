//
//  SCCategoryAction.h
//  ServiceSDK
//
//  Created by Aaron Eisses on 03/13/17.
//  Copyright (c) 2017 Salesforce.com. All rights reserved.
//

@import ServiceCore.ServiceCommon;
@import ServiceCore.ServiceCommon.Private;

#import "SCInternalDefines.h"
#import "SCSSupportedLanguageOutput.h"

@interface SCSLanguageAction : SCSSelfServiceAction

+ (instancetype)actionToGetSupportLanguagesWithResponseBlock:(SFCActionResponseBlock)responseBlock;

@end
