//
//  SCArticleDataCategoryOutput.h
//  KnowledgeCore
//
//  Created by Jyoti Khubchandani on 5/4/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;

@interface SCArticleDataCategoryOutput : SFCOutput <SFCIndexedEntity>

///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

@property (nonatomic, strong, readonly) NSString *categoryName;
@property (nonatomic, strong, readonly) NSString *categoryLabel;
@property (nonatomic, strong, readonly) NSString *url;

@end
