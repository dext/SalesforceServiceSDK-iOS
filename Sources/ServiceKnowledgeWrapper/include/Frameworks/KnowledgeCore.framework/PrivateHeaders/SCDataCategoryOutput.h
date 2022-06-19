//
//  SCDataCategorySummaryOutput.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/15/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;

@interface SCDataCategoryOutput : SFCOutput <SFCIndexedEntity>

///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSString *label;
@property (nonatomic, strong, readonly) NSString *url;
@property (nonatomic, strong, readonly) NSArray<SCDataCategoryOutput*> *childCategories;

@end
