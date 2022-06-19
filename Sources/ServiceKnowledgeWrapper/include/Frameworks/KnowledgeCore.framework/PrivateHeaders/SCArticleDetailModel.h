//
//  SCArticleDetailModel.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/20/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

#import "SCArticleSummaryModel.h"

NS_ASSUME_NONNULL_BEGIN

@class SCArticleFieldModel, SCDataCategoryModel, SCArticleQueryResultModel;

@interface SCArticleDetailModel : SCArticleSummaryModel

@property (nullable, nonatomic, retain) NSString * articleType;
@property (nullable, nonatomic, retain) NSNumber * versionNumber;
@property (nullable, nonatomic, retain) NSDate * createdDate;
@property (nullable, nonatomic, retain) NSDate * lastModifiedDate;
@property (nullable, nonatomic, retain) NSString * createdByUserId;
@property (nullable, nonatomic, retain) NSString * lastModifiedByUserId;
@property (nullable, nonatomic, retain) NSSet *layoutItems;
@property (nullable, nonatomic, retain) NSDate *cachedDate;
@property (nullable, nonatomic, retain) NSSet<SCArticleQueryResultModel *> *queryResults;

@end

@interface SCArticleDetailModel (CoreDataGeneratedAccessors)

- (void)addFieldsObject:(SCArticleFieldModel *)value;
- (void)removeFieldsObject:(SCArticleFieldModel *)value;
- (void)addFields:(NSSet *)values;
- (void)removeFields:(NSSet *)values;

- (void)addQueryResultsObject:(NSManagedObject *)value;
- (void)removeQueryResultsObject:(NSManagedObject *)value;
- (void)addQueryResults:(NSSet<NSManagedObject *> *)values;
- (void)removeQueryResults:(NSSet<NSManagedObject *> *)values;

@end

NS_ASSUME_NONNULL_END
