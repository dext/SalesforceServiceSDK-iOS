//
//  SCArticleAction.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/13/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import ServiceCore.ServiceCommon;
@import ServiceCore.ServiceCommon.Private;

#import "SCInternalDefines.h"

@class SCSCategory;

@interface SCArticleAction : SCSSelfServiceAction

@property (nonatomic, copy) NSString *language;

/**
 Creates an action for retrieving a list of articles that match the provided search / list criteria.
 
 @param search        Input object describing the search request, or `nil` if you want an unfiltered list of all articles.
 @param language      Language to return results in.
 @param responseBlock Completion block when response is received.
 
 @return Action suitable for performing this request.
 */
+ (instancetype)actionToGetArticlesWithSearch:(NSString*)search language:(NSString*)language withResponseBlock:(SFCActionResponseBlock)responseBlock;

/**
 Creates an action for retrieving a list of articles that match the provided search / list criteria.
 
 @param search        Input object describing the search request, or `nil` if you want an unfiltered list of all articles.
 @param categories    List of categories to limit the search in
 @param queryMethod   queryMethod to use if categories is specified
 @param language      Language to return results in.
 @param channel       Channel type to search in, or `SCChannelTypeUnknown` to accept the default.
 @param sortByField   Sort field type to sort by, or `SCSortTypeUnknown` to accept the default.
 @param sortOrder     Sort order type, or `SCSortOrderUnknown` to accept the default.
 @param pageSize      Number of results to return per page.
 @param pageNumber    Page number to return.
 @param responseBlock Completion block when response is received.
 
 @return Action suitable for performing this request.
 */
+ (instancetype)actionToGetArticlesWithSearch:(NSString*)search categories:(NSArray<SCSCategory *>*)categories queryMethod:(SCQueryMethod)queryMethod language:(NSString*)language channel:(SCChannelType)channel sortByField:(SCArticleSortByField)sortByField sortOrder:(SCArticleSortOrder)sortOrder pageSize:(NSUInteger)pageSize pageNumber:(NSUInteger)pageNumber withResponseBlock:(SFCActionResponseBlock)responseBlock;

/**
 Creates an action for retrieving a list of articles that match the provided search / list criteria.
 
 This method is limited to only listing articles within a single data category.  If you wish to filter based on more than one category, please use the method actionToGetArticlesWithDataCategories:queryMethod:language:sortByField:sortOrder:pageSize:pageNumber:withResponseBlock:
 
 @param groupName     Data category group, or `nil` if no category should be used. If used, you must also specify categoryName.
 @param categoryName  Data category, or `nil` if no category should be used.  Must also specify groupName.
 @param queryMethod   Query method to use.
 @param language      Language to return results in.
 @param sortByField   Field to sort by.
 @param sortOrder     Order to sort by.
 @param pageSize      Number of results to include in the response.
 @param pageNumber    Page number.
 @param responseBlock Completion block when response is received.
 
 @return Action suitable for performing this request.
 */
+ (instancetype)actionToGetArticlesWithDataCategoryGroup:(NSString*)groupName categoryName:(NSString*)categoryName queryMethod:(SCQueryMethod)queryMethod language:(NSString*)language sortByField:(SCArticleSortByField)sortByField sortOrder:(SCArticleSortOrder)sortOrder pageSize:(NSUInteger)pageSize pageNumber:(NSUInteger)pageNumber withResponseBlock:(SFCActionResponseBlock)responseBlock;

/**
 Creates an action for retrieving a list of articles that match the provided list criteria.
 
 @param categories    List of data categories for which articles need to be retrieved
 @param queryMethod   Query method to use. This query method applies to all the categories
 @param language      Language to return results in.
 @param sortByField   Field to sort by.
 @param sortOrder     Order to sort by.
 @param pageSize      Number of results to include in the response.
 @param pageNumber    Page number.
 @param responseBlock Completion block when response is received.
 
 @return Action suitable for performing this request.
 */
+ (instancetype)actionToGetArticlesWithDataCategories:(NSArray<SCSCategory*> *)categories queryMethod:(SCQueryMethod)queryMethod language:(NSString*)language sortByField:(SCArticleSortByField)sortByField sortOrder:(SCArticleSortOrder)sortOrder pageSize:(NSUInteger)pageSize pageNumber:(NSUInteger)pageNumber withResponseBlock:(SFCActionResponseBlock)responseBlock;

/**
 Creates an action to get the details for the indicated article.
 
 @param articleIdOrUrlName  Article ID or URLName.
 @param language            Language to return results in.
 @param responseBlock       Completion block when response is received.
 
 @return Action suitable for performing this request.
 */
+ (instancetype)actionToGetArticleWithId:(NSString*)articleIdOrUrlName language:(NSString*)language withResponseBlock:(SFCActionResponseBlock)responseBlock;

@end
