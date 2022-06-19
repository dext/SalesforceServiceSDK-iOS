//
//  SCCaseInterface_Internal.h
//  CaseCore
//
//  Created by Michael Nachbaur on 11/19/15.
//  Copyright © 2015 Salesforce.com. All rights reserved.
//

@import ServiceCore.ServiceCommon;
@import ServiceCore.ServiceCommon.Private;
@import CoreData;

NS_ASSUME_NONNULL_BEGIN

SCS_EXTERN NSString * const SCCaseInterfaceManagerKey;

@interface SCCaseInterface () <SCManagedSingleton> {
    @protected
    BOOL _interfaceVisible;
    CGPoint _lastKnownMinimizedViewCenterPoint;
}

@property (nonatomic, weak, nullable) SCAppearanceConfiguration *appearanceConfiguration;
@property (nonatomic, weak, nullable) SCSServiceConfiguration *serviceConfiguration;
@property (nonatomic, weak, nullable) SCInterfaceRouter *interfaceRouter;
@property (nonatomic, weak, nullable, readonly) SCSAuthenticationSettings *authenticationSettings;
@property (nonatomic, copy, nullable) NSString *caseListId;

- (void)fetchCaseListsForAuthenticationSettings:(SCSAuthenticationSettings *)settings completion:(nullable void(^)(NSString * _Nullable caseListId, NSError * _Nullable error))completion;
- (void)logBatteryLevel;
- (void)cleanUpLoggingSession;
- (void)initializeLoggingSession;
- (NSInteger)unreadCaseCount;

//Tracks and returns the count of unread cases in the completion block.
- (void)updateCaseListUnreadCountWithCompletion:(nullable void(^)(NSInteger count, NSError * _Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
