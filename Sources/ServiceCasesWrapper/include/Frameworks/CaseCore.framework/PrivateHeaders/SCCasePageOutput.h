//
//  SCCasePageOutput.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/15/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;

@class SCCaseAction;
@interface SCCasePageOutput : SFCOutput

///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

@property (nonatomic, assign, readonly) NSUInteger total;
@property (nonatomic, strong, readonly) NSArray *cases;
@property (nonatomic, strong, readonly) NSString *currentPageUrl;
@property (nonatomic, strong, readonly) NSString *nextPageUrl;
@property (nonatomic, assign, readonly) NSUInteger pageNumber;

///---------------------------------------------------------------------------------------
/// @name Methods
///---------------------------------------------------------------------------------------

- (SCCaseAction *)actionToGetCurrentPageWithResponseBlock:(SFCActionResponseBlock)responseBlock;
- (SCCaseAction *)actionToGetNextPageWithResponseBlock:(SFCActionResponseBlock)responseBlock;

@end
