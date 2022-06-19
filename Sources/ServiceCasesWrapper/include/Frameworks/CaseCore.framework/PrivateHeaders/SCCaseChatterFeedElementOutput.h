//
//  SFCChatterFeedElementOutput.h
//  CoreSalesforce
//
//  Created automatically by Michael Nachbaur on 01/22/15.
//  Copyright (c) 2012-2015 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;

#import "SCCaseChatterDefines.h"
#import "SCCaseChatterFeedBodyOutput.h"

@class SCCaseChatterFeedElementCapabilitiesOutput;
@class SCCaseChatterFeedItemPreambleMessageBodyOutput;

@interface SCCaseChatterFeedElementOutput : SFCOutput <SFCIndexedEntity>

@property (nonatomic, strong, readonly) SCCaseChatterFeedBodyOutput *body;
//@property (nonatomic, strong, readonly) SCCaseChatterFeedElementCapabilitiesOutput *capabilities;
@property (nonatomic, strong, readonly) NSDate *createdDate;
@property (nonatomic, assign, readonly) SCCaseChatterFeedElementType feedElementType;
@property (nonatomic, strong, readonly) SCCaseChatterFeedItemPreambleMessageBodyOutput *header;
@property (nonatomic, copy, readonly) NSString *feedElementId;
@property (nonatomic, strong, readonly) NSDate *modifiedDate;
@property (nonatomic, strong, readonly) NSDate *relativeCreatedDate;
@property (nonatomic, copy, readonly) NSString *url;

@end
