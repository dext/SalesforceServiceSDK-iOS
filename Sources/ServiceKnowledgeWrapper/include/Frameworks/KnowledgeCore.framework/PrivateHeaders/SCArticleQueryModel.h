//
//  SCArticleQueryModel.h
//  KnowledgeCore
//
//  Created by Michael Nachbaur on 2018-04-12.
//  Copyright © 2018 Salesforce.com. All rights reserved.
//
//

@import Foundation;
@import CoreData;
@import SalesforceCore.SalesforceOffline;

#import "SCArticleDetailModel.h"
#import "SCArticleQueryResultModel.h"
#import "SCInternalDefines.h"

@class SCDataCategoryModel, SCSArticleQuery, SCArticleQueryResultModel, SCSKnowledgeManager;

NS_ASSUME_NONNULL_BEGIN

@interface SCArticleQueryModel : SFCBaseManagedObject <SFCConcreteEntity>

@property (nonatomic, assign) SCQueryMethod queryMethod;
@property (nonatomic, assign) SCArticleSortByField sortByField;
@property (nonatomic, assign) SCArticleSortOrder sortOrder;
@property (nullable, nonatomic, copy) NSString *queryIndex;
@property (nullable, nonatomic, copy) NSString *searchTerm;
@property (nullable, nonatomic, copy) NSDictionary<NSString*,NSString*> *categories;
@property (nullable, nonatomic, retain) NSSet<SCArticleQueryResultModel *> *results;

+ (nullable instancetype)articleQueryModelInContext:(NSManagedObjectContext *)context
                                        queryMethod:(SCQueryMethod)queryMethod
                                          sortField:(SCArticleSortByField)sortField
                                          sortOrder:(SCArticleSortOrder)sortOrder
                                         categories:(NSDictionary<NSString*,NSString*>*)categories
                                         searchTerm:(nullable NSString*)searchTerm;

- (BOOL)addCachedArticlesInContext:(NSManagedObjectContext *)context
                  knowledgeManager:(nullable SCSKnowledgeManager*)manager
                             error:(NSError * _Nullable * _Nullable)error;

@end

@interface SCArticleQueryModel (CoreDataGeneratedAccessors)

- (void)addResultsObject:(SCArticleQueryResultModel *)value;
- (void)removeResultsObject:(SCArticleQueryResultModel *)value;
- (void)addResults:(NSSet<SCArticleQueryResultModel *> *)values;
- (void)removeResults:(NSSet<SCArticleQueryResultModel *> *)values;

@end

NS_ASSUME_NONNULL_END
