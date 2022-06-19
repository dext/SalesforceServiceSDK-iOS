//
//  SCQuickActionCompositeField.h
//  ServiceSDK
//
//  Created by Jyoti Khubchandani on 9/8/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceOffline;

@class SCQuickActionFieldModel, SCQuickActionModel;

@interface SCQuickActionCompositeFieldModel : SFCBaseManagedObject <SFCConcreteEntity>

@property (nonatomic, retain) NSString * label;
@property (nonatomic) BOOL readOnly;
@property (nonatomic) BOOL required;
@property (nonatomic, retain) NSSet *fields;
@property (nonatomic, retain) SCQuickActionModel *quickAction;
@property (nonatomic, retain) NSNumber * order;

@end

@interface SCQuickActionCompositeFieldModel (CoreDataGeneratedAccessors)

- (void)addFieldsObject:(SCQuickActionFieldModel *)value;
- (void)removeFieldsObject:(SCQuickActionFieldModel *)value;
- (void)addFields:(NSSet *)values;
- (void)removeFields:(NSSet *)values;

@end

