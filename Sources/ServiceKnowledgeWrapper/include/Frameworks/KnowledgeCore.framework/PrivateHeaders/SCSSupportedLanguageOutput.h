//
//  SCSupportedLanguageOutput.h
//  KnowledgeCore
//
//  Created by Aaron Eisses on 3/20/17.
//  Copyright © 2017 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;

@class SCSLanguageOutput;
@interface SCSSupportedLanguageOutput : SFCOutput <SFCIndexedEntity>

///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

@property (nonatomic, strong, readonly) NSString *defaultLanguage;
@property (nonatomic, readonly) BOOL knowledgeEnabled;
@property (nonatomic, strong, readonly) NSArray<SCSLanguageOutput *> *languages;

@end
