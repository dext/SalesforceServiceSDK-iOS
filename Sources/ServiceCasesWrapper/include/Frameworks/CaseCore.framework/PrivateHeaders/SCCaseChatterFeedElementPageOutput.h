//
//  SCCaseChatterFeedElementPageOutput.h
//  CoreSalesforce
//
//  Created automatically by Michael Nachbaur on 01/22/15.
//  Copyright (c) 2012-2015 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;

#import "SCCaseChatterDefines.h"

@class SCCaseChatterFeedElementOutput;
@class SCCaseChatterAction;

/** The `SCCaseChatterFeedElementPageOutput` class defines the properties and types needed to encode
 Chatter Connect responses for this type.
 */
@interface SCCaseChatterFeedElementPageOutput : SFCOutput 

///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

/** Returns the current page url for this object.
 */
@property (nonatomic, copy, readonly) NSString *currentPageUrl;

/** Returns an array of the elements for this object.

 @see SCCaseChatterFeedElementOutput
 */
@property (nonatomic, strong, readonly) NSArray<SCCaseChatterFeedElementOutput*> *elements;

/** Returns the is modified token for this object.
 */
@property (nonatomic, copy, readonly) NSString *modifiedToken;

/** Returns the is modified url for this object.
 */
@property (nonatomic, copy, readonly) NSString *modifiedUrl;

/** Returns the next page token for this object.
 */
@property (nonatomic, copy, readonly) NSString *nextPageToken;

/** Returns the next page url for this object.
 */
@property (nonatomic, copy, readonly) NSString *nextPageUrl;

/** Returns the updates token for this object.
 */
@property (nonatomic, copy, readonly) NSString *updatesToken;

/** Returns the updates url for this object.
 */
@property (nonatomic, copy, readonly) NSString *updatesUrl;


///---------------------------------------------------------------------------------------
/// @name Methods
///---------------------------------------------------------------------------------------

/** Returns a new action to fetch the current page of results for this object.
 */
- (SCCaseChatterAction *)actionToGetCurrentPageWithResponseBlock:(SFCActionResponseBlock)responseBlock;

/** Returns a new action to fetch the next page of results for this object.
 */
- (SCCaseChatterAction *)actionToGetNextPageWithResponseBlock:(SFCActionResponseBlock)responseBlock;


@end
