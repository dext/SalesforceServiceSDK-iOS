//
//  SCSCategory_Internal.h
//  KnowledgeCore
//
//  Created by Michael Nachbaur on 3/28/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@class SCSKnowledgeManager, SCDataCategoryGroupModel, SCDataCategoryModel;
@interface SCSCategory ()

@property (nullable, nonatomic, strong, readonly) NSManagedObjectID *objectID;
@property (nullable, nonatomic, weak) SCDataCategoryGroupModel *categoryGroupModel;
@property (nullable, nonatomic, weak) SCDataCategoryModel *categoryModel;

- (instancetype)initWithManager:(SCSKnowledgeManager*)manager categoryGroupModel:(SCDataCategoryGroupModel*)categoryGroup categoryModel:(SCDataCategoryModel*)category categoryGroup:(SCSCategoryGroup*)categoryGroup parentCategory:(nullable SCSCategory*)parentCategory;
- (void)removeChildCategory:(SCSCategory*)category;
- (void)categoryWithKnowledgeManager:(SCSKnowledgeManager *)manager completion:(nullable void(^)(SCSCategory *category, NSError * __nullable error))completion;

- (void)resetContent;

@end

NS_ASSUME_NONNULL_END
