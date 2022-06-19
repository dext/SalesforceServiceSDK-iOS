//
//  SCQuickActionField.h
//  ServiceSDK
//
//  Created by Jyoti Khubchandani on 9/8/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceOffline;

@class SCQuickActionCompositeFieldModel, SCQuickActionPicklistOptionModel;

@interface SCQuickActionFieldModel : SFCBaseManagedObject <SFCConcreteEntity>

@property (nonatomic, retain) NSString * label;
@property (nonatomic, retain) NSNumber * length;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * type;
@property (nonatomic, retain) NSString * value;
@property (nonatomic, retain) NSSet *picklistOptions;
@property (nonatomic, retain) SCQuickActionCompositeFieldModel *quickActionCompositeField;
@property (nonatomic, retain) NSNumber * order;

@end

@interface SCQuickActionFieldModel (CoreDataGeneratedAccessors)

- (void)addPicklistsObject:(SCQuickActionPicklistOptionModel *)value;
- (void)removePicklistsObject:(SCQuickActionPicklistOptionModel *)value;
- (void)addPicklists:(NSSet *)values;
- (void)removePicklists:(NSSet *)values;

@end
