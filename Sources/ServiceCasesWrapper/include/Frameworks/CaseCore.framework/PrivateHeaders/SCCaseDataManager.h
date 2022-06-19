//
//  SCCaseDataManager.h
//  ServiceSDK
//
//  Created by Jyoti Khubchandani on 9/4/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SCSAuthenticationSettings;
@interface SCCaseDataManager : NSObject

@property (nonatomic, strong, readonly) SCSAuthenticationSettings *authenticationSettings;

- (instancetype)initWithAuthenticationSettings:(SCSAuthenticationSettings *)authenticationSettings;
- (instancetype)init NS_UNAVAILABLE;

- (BOOL)saveCaseData:(NSDictionary *)caseData;
- (NSDictionary*)retrieveCaseData;
- (BOOL)deleteCaseData;

@end
