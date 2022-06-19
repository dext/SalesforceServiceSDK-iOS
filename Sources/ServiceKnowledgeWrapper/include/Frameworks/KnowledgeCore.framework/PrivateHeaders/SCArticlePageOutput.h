//
//  SCArticlePageOutput.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/15/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;
@import SalesforceCore.SalesforceOffline;

#import "SCInternalDefines.h"

SC_EXTERN NSString * SCArticleQueryCategoryStringFromCategories(NSDictionary<NSString*,NSString*> *categories);
SC_EXTERN NSString * SCArticleQueryIndex(NSString *searchTerm,
                                         SCArticleSortByField sortByField,
                                         SCArticleSortOrder sortOrder,
                                         SCQueryMethod queryMethod,
                                         NSDictionary<NSString*,NSString*> *categories);

@class SCArticleAction;
@interface SCArticlePageOutput : SFCOutput<SFCCacheControllable>

///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

@property (nonatomic, strong, readonly) NSArray *articles;
@property (nonatomic, strong, readonly) NSString *currentPageUrl;
@property (nonatomic, strong, readonly) NSString *nextPageUrl;
@property (nonatomic, assign, readonly) NSUInteger pageNumber;

///---------------------------------------------------------------------------------------
/// @name Methods
///---------------------------------------------------------------------------------------

- (SCArticleAction *)actionToGetCurrentPageWithLanguage:(NSString*)language andResponseBlock:(SFCActionResponseBlock)responseBlock;
- (SCArticleAction *)actionToGetNextPageWithLanguage:(NSString*)language andResponseBlock:(SFCActionResponseBlock)responseBlock;

@end

@class SCArticlePageItemOutput;

/**
 Category that extends SCArticlePageOutput with computed values to expose the query information used that resulted in this output.
 
 This is used by the caching model objects to associate the search results with their corresponding article query object.
 */
@interface SCArticlePageOutput (PageInfo) <SFCIndexedEntity>

/**
 Accessor method returning the same articles as the `articles` property, but wrapped in
 SCArticlePageItemOutput instances so the cache handler can resolve the ordered relationship.
 */
@property (nonatomic, strong, readonly) NSArray<SCArticlePageItemOutput*> *results;

/**
 Computed identifier to uniquely identify the query that resulted in this article page.
 */
@property (nonatomic, strong, readonly) NSString *queryIndex;

/**
 The search term used to return this article output, or an empty string if none was found.
 */
- (NSString*)searchTerm;

/**
 The page size used for this article search.
 */
- (NSUInteger)pageSize;

/**
 The field being sorted by.
 */
- (SCArticleSortByField)sortByField;

/**
 The sort order.
 */
- (SCArticleSortOrder)sortOrder;

/**
 The query method used.
 */
- (SCQueryMethod)queryMethod;

/**
 Categories searched within (group/category mapping)
 */
- (NSDictionary<NSString*,NSString*>*)categories;

@end
