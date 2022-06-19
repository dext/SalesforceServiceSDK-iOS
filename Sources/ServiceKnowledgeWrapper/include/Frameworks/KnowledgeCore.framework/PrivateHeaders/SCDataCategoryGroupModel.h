//
//  SCDataCategoryGroupModel.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/20/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import Foundation;
@import CoreData;

@import SalesforceCore.SalesforceOffline;

NS_ASSUME_NONNULL_BEGIN

@class SCDataCategoryModel;
@interface SCDataCategoryGroupModel : SFCBaseManagedObject <SFCConcreteEntity>

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *label;
@property (nullable, nonatomic, retain) NSString *objectUsage;
@property (nullable, nonatomic, retain) NSSet *allDataCategories;
@property (nullable, nonatomic, retain) NSSet *topCategories;

@end

@interface SCDataCategoryGroupModel (CoreDataGeneratedAccessors)

- (void)addTopCategoriesObject:(SCDataCategoryModel *)value;
- (void)removeTopCategoriesObject:(SCDataCategoryModel *)value;
- (void)addTopCategories:(NSSet *)values;
- (void)removeTopCategories:(NSSet *)values;

- (void)addAllDataCategoriesObject:(SCDataCategoryModel *)value;
- (void)removeAllDataCategoriesObject:(SCDataCategoryModel *)value;
- (void)addAllDataCategories:(NSSet *)values;
- (void)removeAllDataCategories:(NSSet *)values;

@end

NS_ASSUME_NONNULL_END
