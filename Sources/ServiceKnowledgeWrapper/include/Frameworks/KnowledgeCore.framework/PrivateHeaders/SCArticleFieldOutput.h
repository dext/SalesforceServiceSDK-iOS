//
//  SCArticleFieldOutput.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/15/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;
#import "SCInternalDefines.h"

@interface SCArticleFieldOutput : SFCOutput

///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

@property (nonatomic, assign, readonly) SCArticleFieldType type;
@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSString *label;
@property (nonatomic, strong, readonly) NSString *value;

@end
