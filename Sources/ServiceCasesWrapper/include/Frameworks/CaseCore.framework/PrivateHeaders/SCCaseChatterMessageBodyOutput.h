//
//  SFCChatterMessageBodyOutput.h
//  CoreSalesforce
//
//  Created automatically by Michael Nachbaur on 01/22/15.
//  Copyright (c) 2012-2015 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;

#import "SCCaseChatterDefines.h"
@class SCCaseChatterMessageSegmentOutput;

@interface SCCaseChatterMessageBodyOutput : SFCOutput

//@property (nonatomic, strong, readonly) NSArray<SCCaseChatterMessageSegmentOutput*> *messageSegments;
@property (nonatomic, copy, readonly) NSString *text;

@end
