//
//  SCDataCategoryModel.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/20/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import Foundation;
@import CoreData;

@import SalesforceCore.SalesforceOffline;

@class SCArticleDetailModel, SCDataCategoryGroupModel, SCArticleQueryModel;

@interface SCDataCategoryModel : SFCBaseManagedObject <SFCConcreteEntity>

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * label;
@property (nonatomic, retain) NSString * url;
@property (nonatomic, retain) SCDataCategoryGroupModel *groupForTopCategory;
@property (nonatomic, retain) NSSet<SCArticleDetailModel*> *articles;
@property (nonatomic, retain) SCDataCategoryGroupModel *dataCategoryGroup;
@property (nonatomic, retain) NSNumber * isTopCategory;
@property (nonatomic, retain) NSNumber * sortOrder;
@property (nonatomic, retain) SCDataCategoryModel *parentDataCategory;
@property (nonatomic, retain) NSSet<SCDataCategoryModel*> *children;
@property (nonatomic, retain) NSSet<SCArticleQueryModel*> *articleQueries;
@property (nonatomic, retain) NSString * imageName;

@end

@interface SCDataCategoryModel (CoreDataGeneratedAccessors)

- (void)addArticlesObject:(SCArticleDetailModel *)value;
- (void)removeArticlesObject:(SCArticleDetailModel *)value;
- (void)addArticles:(NSSet *)values;
- (void)removeArticles:(NSSet *)values;

- (void)addChildrenObject:(SCDataCategoryModel *)value;
- (void)removeChildrenObject:(SCDataCategoryModel *)value;
- (void)addChildren:(NSSet *)values;
- (void)removeChildren:(NSSet *)values;

- (void)addArticleQueriesObject:(SCArticleQueryModel *)value;
- (void)removeArticleQueriesObject:(SCArticleQueryModel *)value;
- (void)addArticleQueries:(NSSet *)values;
- (void)removeArticleQueries:(NSSet *)values;

@end
