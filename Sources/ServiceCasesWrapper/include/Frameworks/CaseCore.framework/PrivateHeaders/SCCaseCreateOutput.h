//
//  SCCaseCreateOutput.h
//  ServiceSDK
//
//  Created by Jyoti Khubchandani on 8/27/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;

@interface SCCaseCreateOutput : SFCOutput

///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

@property (nonatomic, assign, readonly, getter=didSucceed) BOOL success;
@property (nonatomic, assign, readonly, getter=didCreate) BOOL created;
@property (nonatomic, strong, readonly) NSString *caseId;
@property (nonatomic, strong, readonly) NSString *successMessage;

/*returns is array of string describing the error occurred during case creation*/
@property (nonatomic, strong, readonly) NSArray<NSString*> *errors;

@end
