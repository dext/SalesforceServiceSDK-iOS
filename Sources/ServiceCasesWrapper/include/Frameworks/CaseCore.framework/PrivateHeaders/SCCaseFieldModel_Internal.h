//
//  SCCaseFieldModel_Internal.h
//  CaseCore
//
//  Created by Amisha Goyal on 12/11/15.
//  Copyright © 2015 Salesforce.com. All rights reserved.
//

#import "SCCaseFieldModel.h"

@class SCQuickActionCompositeFieldOutput;
@class SCQuickActionFieldOutput;

@interface SCCaseFieldModel ()
- (instancetype)initWithCompositeField:(SCQuickActionCompositeFieldOutput*)field;
- (void)updateFieldWithOutputField:(SCQuickActionFieldOutput*)field;
- (void)updatePicklistValues:(NSMutableArray*)values forPicklistLabels:(NSMutableArray*)labels;
- (void)updateSavedValue:(NSString*)savedValue;
@end