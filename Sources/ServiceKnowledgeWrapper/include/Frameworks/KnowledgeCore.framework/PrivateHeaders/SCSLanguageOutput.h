//
//  SCLanguageOutput.h
//  KnowledgeCore
//
//  Created by Aaron Eisses on 3/20/17.
//  Copyright © 2017 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;

@interface SCSLanguageOutput : SFCOutput <SFCIndexedEntity>

///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, readonly) BOOL active;

@end
