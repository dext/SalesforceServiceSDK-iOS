//
//  SCCaseChatterElementsAction.h
//  CoreSalesforce
//
//  Created automatically by Michael Nachbaur on 01/22/15.
//  Copyright (c) 2012-2015 Salesforce.com. All rights reserved.
//


#import <Foundation/Foundation.h>

#import "SCCaseChatterAction.h"

@class SCCaseChatterFeedElementPageOutput;
@class SCCaseChatterFeedItemOutput;
@class SCCaseChatterFeedElementOutput;
@class SCCaseChatterFeedElementCapabilitiesOutput;
@class SCCaseChatterFeedElementCapabilityOutput;

@interface SCCaseChatterElementsAction : SCCaseChatterAction

/** Creates a elements action to delete feed element.

 @param feedElementId feed element.
 @param responseBlock Response completion block.
 @return Autoreleased action to delete feed element.
 */
+ (SCCaseChatterElementsAction*)actionToDeleteFeedElement:(NSString*)feedElementId withResponseBlock:(SFCActionResponseBlock)responseBlock;

/** Creates a elements action to get feed element.

 @see SCCaseChatterFeedElementOutput
 @param feedElementId feed element.
 @param responseBlock Response completion block.
 @return Autoreleased action to get feed element.
 */
+ (SCCaseChatterElementsAction*)actionToGetFeedElement:(NSString*)feedElementId withResponseBlock:(SFCActionResponseBlock)responseBlock;

/** Creates a elements action to get feed element.

 @see SCCaseChatterFeedElementOutput
 @param feedElementId feed element.
 @param elementsPerBundle elements per bundle.
 @param recentCommentCount recent comment count.
 @param responseBlock Response completion block.
 @return Autoreleased action to get feed element.
 */
+ (SCCaseChatterElementsAction*)actionToGetFeedElement:(NSString*)feedElementId elementsPerBundle:(NSInteger)elementsPerBundle recentCommentCount:(NSInteger)recentCommentCount withResponseBlock:(SFCActionResponseBlock)responseBlock;

///** Creates a elements action to get feed element capabilities.
//
// @see SCCaseChatterFeedElementCapabilitiesOutput
// @param feedElementId feed element.
// @param responseBlock Response completion block.
// @return Autoreleased action to get feed element capabilities.
// */
//+ (SCCaseChatterElementsAction*)actionToGetFeedElementCapabilitiesWithFeedElement:(NSString*)feedElementId withResponseBlock:(SFCActionResponseBlock)responseBlock;
//
///** Creates a elements action to get feed element capabilities.
//
// @see SCCaseChatterFeedElementCapabilitiesOutput
// @param feedElementId feed element.
// @param elementsPerBundle elements per bundle.
// @param recentCommentCount recent comment count.
// @param responseBlock Response completion block.
// @return Autoreleased action to get feed element capabilities.
// */
//+ (SCCaseChatterElementsAction*)actionToGetFeedElementCapabilitiesWithFeedElement:(NSString*)feedElementId elementsPerBundle:(NSInteger)elementsPerBundle recentCommentCount:(NSInteger)recentCommentCount withResponseBlock:(SFCActionResponseBlock)responseBlock;
//
///** Creates a elements action to get feed element capability.
//
// @see SCCaseChatterFeedElementCapabilityOutput
// @param feedElementId feed element.
// @param capabilityType capability type.
// @param responseBlock Response completion block.
// @return Autoreleased action to get feed element capability.
// */
//+ (SCCaseChatterElementsAction*)actionToGetFeedElementCapabilityForFeedElement:(NSString*)feedElementId capabilityType:(SCCaseChatterFeedElementCapabilityType)capabilityType withResponseBlock:(SFCActionResponseBlock)responseBlock;
//
///** Creates a elements action to get feed element capability.
//
// @see SCCaseChatterFeedElementCapabilityOutput
// @param feedElementId feed element.
// @param capabilityType capability type.
// @param elementsPerBundle elements per bundle.
// @param recentCommentCount recent comment count.
// @param responseBlock Response completion block.
// @return Autoreleased action to get feed element capability.
// */
//+ (SCCaseChatterElementsAction*)actionToGetFeedElementCapabilityForFeedElement:(NSString*)feedElementId capabilityType:(SCCaseChatterFeedElementCapabilityType)capabilityType elementsPerBundle:(NSInteger)elementsPerBundle recentCommentCount:(NSInteger)recentCommentCount withResponseBlock:(SFCActionResponseBlock)responseBlock;

/** Creates a elements action to get feed elements in bundle.

 @see SCCaseChatterFeedElementPageOutput
 @param feedElementId feed element.
 @param responseBlock Response completion block.
 @return Autoreleased action to get feed elements in bundle.
 */
+ (SCCaseChatterElementsAction*)actionToGetFeedElementsInBundleForFeedElement:(NSString*)feedElementId withResponseBlock:(SFCActionResponseBlock)responseBlock;

/** Creates a elements action to get feed elements in bundle.

 @see SCCaseChatterFeedElementPageOutput
 @param feedElementId feed element.
 @param elementsPerBundle elements per bundle.
 @param pageParam page param.
 @param pageSize page size.
 @param recentCommentCount recent comment count.
 @param sortParam sort param.
 @param responseBlock Response completion block.
 @return Autoreleased action to get feed elements in bundle.
 */
+ (SCCaseChatterElementsAction*)actionToGetFeedElementsInBundleForFeedElement:(NSString*)feedElementId elementsPerBundle:(NSInteger)elementsPerBundle page:(NSString*)pageParam pageSize:(NSInteger)pageSize recentCommentCount:(NSInteger)recentCommentCount sort:(SCCaseChatterFeedSortOrder)sortParam withResponseBlock:(SFCActionResponseBlock)responseBlock;

/** Creates a elements action to post feed element.

 @see SCCaseChatterFeedItemOutput
 @param feedElementType feed element type.
 @param subjectId subject.
 @param responseBlock Response completion block.
 @return Autoreleased action to post feed element.
 */
+ (SCCaseChatterElementsAction*)actionToPostFeedElementForFeedElementType:(SCCaseChatterFeedElementType)feedElementType subject:(NSString*)subjectId withResponseBlock:(SFCActionResponseBlock)responseBlock;

/** Creates a elements action to post feed element.

 @see SCCaseChatterFeedItemOutput
 @param feedElementType feed element type.
 @param originalFeedElementId original feed element.
 @param subjectId subject.
 @param text text.
 @param visibility visibility.
 @param responseBlock Response completion block.
 @return Autoreleased action to post feed element.
 */
+ (SCCaseChatterElementsAction*)actionToPostFeedElementForFeedElementType:(SCCaseChatterFeedElementType)feedElementType originalFeedElement:(NSString*)originalFeedElementId subject:(NSString*)subjectId text:(NSString*)text visibility:(SCCaseChatterFeedItemVisibility)visibility withResponseBlock:(SFCActionResponseBlock)responseBlock;

/** Creates a elements action to search feed elements.

 @see SCCaseChatterFeedElementPageOutput
 @param q query.
 @param responseBlock Response completion block.
 @return Autoreleased action to search feed elements.
 */
+ (SCCaseChatterElementsAction*)actionToSearchFeedElementsWithQuery:(NSString*)q withResponseBlock:(SFCActionResponseBlock)responseBlock;

/** Creates a elements action to search feed elements.

 @see SCCaseChatterFeedElementPageOutput
 @param q query.
 @param pageParam page param.
 @param pageSize page size.
 @param responseBlock Response completion block.
 @return Autoreleased action to search feed elements.
 */
+ (SCCaseChatterElementsAction*)actionToSearchFeedElementsWithQuery:(NSString*)q page:(NSString*)pageParam pageSize:(NSInteger)pageSize withResponseBlock:(SFCActionResponseBlock)responseBlock;

/** Creates a elements action to search feed elements.

 @see SCCaseChatterFeedElementPageOutput
 @param q query.
 @param pageParam page param.
 @param pageSize page size.
 @param sortParam sort param.
 @param responseBlock Response completion block.
 @return Autoreleased action to search feed elements.
 */
+ (SCCaseChatterElementsAction*)actionToSearchFeedElementsWithQuery:(NSString*)q page:(NSString*)pageParam pageSize:(NSInteger)pageSize sort:(SCCaseChatterFeedSortOrder)sortParam withResponseBlock:(SFCActionResponseBlock)responseBlock;

/** Creates a elements action to search feed elements.

 @see SCCaseChatterFeedElementPageOutput
 @param elementsPerBundle elements per bundle.
 @param q query.
 @param pageParam page param.
 @param pageSize page size.
 @param recentCommentCount recent comment count.
 @param sortParam sort param.
 @param responseBlock Response completion block.
 @return Autoreleased action to search feed elements.
 */
+ (SCCaseChatterElementsAction*)actionToSearchFeedElementsWithElementsPerBundle:(NSInteger)elementsPerBundle query:(NSString*)q page:(NSString*)pageParam pageSize:(NSInteger)pageSize recentCommentCount:(NSInteger)recentCommentCount sort:(SCCaseChatterFeedSortOrder)sortParam withResponseBlock:(SFCActionResponseBlock)responseBlock;


/** Creates a feeds action to get feed elements from feed.
 
@see SCCaseChatterFeedElementPageOutput
@param feedType feed type.
@param subjectId subject.
@param responseBlock Response completion block.
@return Autoreleased action to get feed elements from feed.
*/
+ (SCCaseChatterElementsAction*)actionToGetFeedElementsFromFeedForFeedType:(SCCaseChatterFeedType)feedType subject:(NSString*)subjectId withResponseBlock:(SFCActionResponseBlock)responseBlock;

@end
