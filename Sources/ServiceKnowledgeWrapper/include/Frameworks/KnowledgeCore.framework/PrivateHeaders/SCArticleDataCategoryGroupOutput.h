//
//  SCArticleDataCategoryOutput.h
//  KnowledgeCore
//
//  Created by Jyoti Khubchandani on 5/4/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;

@class SCArticleDataCategoryOutput;
@interface SCArticleDataCategoryGroupOutput : SFCOutput <SFCIndexedEntity>

///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

@property (nonatomic, strong, readonly) NSString *groupName;
@property (nonatomic, strong, readonly) NSString *groupLabel;
@property (nonatomic, strong, readonly) NSArray<SCArticleDataCategoryOutput*> *selectedCategories;

@end
