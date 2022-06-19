//
//  SCDataCategoryGroupListOutput.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/15/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;
@import SalesforceCore.SalesforceOffline;

@class SCDataCategoryGroupOutput;
@interface SCDataCategoryGroupListOutput : SFCOutput<SFCCacheControllable>

///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

@property (nonatomic, strong, readonly) NSArray<SCDataCategoryGroupOutput*> *categoryGroups;

@end
