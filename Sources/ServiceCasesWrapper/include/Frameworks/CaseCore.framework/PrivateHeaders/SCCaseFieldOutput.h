//
//  SCCaseFieldOutput.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/15/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;

#import "SCCaseInternalDefines.h"

@interface SCCaseFieldOutput : SFCOutput

///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

@property (nonatomic, assign, readonly) SCCaseFieldType type;
@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSString *title;
@property (nonatomic, strong, readonly) NSString *value;
@property (nonatomic, assign, readonly, getter=isRequired) BOOL required;

@end
