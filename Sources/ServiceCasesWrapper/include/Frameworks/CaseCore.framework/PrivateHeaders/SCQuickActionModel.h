//
//  SCQuickAction.h
//  ServiceSDK
//
//  Created by Jyoti Khubchandani on 9/8/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceOffline;

@class SCQuickActionCompositeFieldModel;

@interface SCQuickActionModel : SFCBaseManagedObject <SFCConcreteEntity>

@property (nonatomic, retain) NSString * label;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * targetParentField;
@property (nonatomic, retain) NSString * targetSobjectType;
@property (nonatomic, retain) NSString * targetRecordTypeId;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) NSSet *layoutItems;
@property (nonatomic, retain) NSDate *lastRefreshTime;

@end

@interface SCQuickActionModel (CoreDataGeneratedAccessors)

- (void)addCompositeFieldsObject:(SCQuickActionCompositeFieldModel *)value;
- (void)removeCompositeFieldsObject:(SCQuickActionCompositeFieldModel *)value;
- (void)addCompositeFields:(NSSet *)values;
- (void)removeCompositeFields:(NSSet *)values;

@end


