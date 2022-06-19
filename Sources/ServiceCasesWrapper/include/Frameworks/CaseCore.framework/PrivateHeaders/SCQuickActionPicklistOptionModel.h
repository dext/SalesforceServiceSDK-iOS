//
//  SCQuickActionPicklistOption.h
//  ServiceSDK
//
//  Created by Jyoti Khubchandani on 9/8/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceOffline;

@class SCQuickActionFieldModel;

@interface SCQuickActionPicklistOptionModel : SFCBaseManagedObject <SFCConcreteEntity>

@property (nonatomic, retain) NSString * label;
@property (nonatomic, retain) NSString * value;
@property (nonatomic, retain) NSNumber * order;
@property (nonatomic, retain) SCQuickActionFieldModel *quickActionField;

@end
