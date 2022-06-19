//
//  SCCaseFieldModel.h
//  CaseCore
//
//  Created by Amisha Goyal on 12/4/15.
//  Copyright © 2015 Salesforce.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCCaseInternalDefines.h"

@interface SCCaseFieldModel : NSObject

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly) NSString *label;
@property (nonatomic, copy, readonly) NSArray *picklistOptionLabel;
@property (nonatomic, copy, readonly) NSArray *picklistOptionValues;
@property (nonatomic, copy, readonly) NSString *defaultValue;
@property (nonatomic, copy, readonly) NSString *savedValue;
@property (nonatomic, readonly, getter = isRequired) BOOL required;
@property (nonatomic, readonly, getter = isReadOnly) BOOL readOnly;
@property (nonatomic, readonly) SCCaseFieldType type;
@property (nonatomic, readonly) NSInteger length;
@property (nonatomic, getter = isCaseDeflectionEnabled) BOOL caseDeflectionEnabled;

@end
