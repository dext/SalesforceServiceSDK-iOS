//
//  SCCaseDataManager.h
//  CaseCore
//
//  Created by Amisha Goyal on 12/4/15.
//  Copyright © 2015 Salesforce.com. All rights reserved.
//

@import ServiceCore.ServiceCommon;

@class SCCaseInterface;
@protocol SCCaseContentManagerDelegate;

NS_ASSUME_NONNULL_BEGIN

@class SFCCredential;
@interface SCCaseContentManager : NSObject 

@property (nonatomic, strong, readonly) SCSAuthenticationSettings *authenticationSettings;
@property (nullable, nonatomic, weak) NSObject<SCCaseContentManagerDelegate> *delegate;
@property (nonatomic, readonly, getter=isFetchingCaseListData) BOOL fetchingCaseListData;

- (instancetype)initWithAuthenticationSettings:(SCSAuthenticationSettings*)settings andCaseInterface:(SCCaseInterface*)caseInterface;
- (instancetype)initWithCaseInterface:(SCCaseInterface*)caseInterface;

- (void)fetchCaseLayoutData;
- (void)getCaseListData:(void(^)(BOOL success, NSError * _Nullable error))completion;
- (BOOL)deleteCaseLayoutDataForCredential:(SFCCredential*)credential;

@end

NS_ASSUME_NONNULL_END
