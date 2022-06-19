//
//  SCSCaseLogger.h
//  CaseCore
//
//  Created by Amisha Goyal on 10/20/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@import SalesforceCore.SalesforceOffline;
@import ServiceCore.ServiceCommon;
@import ServiceCore.ServiceCommon.Private;

typedef NS_ENUM(NSUInteger, SCSCasesCurrentState) {
    SCSCasesCurrentStateLaunched = 1,
    SCSCasesCurrentStateLoadedOnline,
    SCSCasesCurrentStateLoadedCache,
    SCSCasesCurrentStateDismissed,
    SCSCasesCurrentStateStarted,
    SCSCasesCurrentStateCompleted,
};

typedef NS_ENUM(NSUInteger, SCSCaseLoggerResult) {
    SCSCaseLoggerResultsUnknown = 0,
    SCSCaseLoggerResultSuccess,
    SCSCaseLoggerResultFailure,
};

typedef NS_ENUM(NSUInteger, SCSCaseLoggerMessageSender) {
    SCSCaseLoggerMessageSenderCustomer = 1,
    SCSCaseLoggerMessageSenderAgent,
};

@class SCCaseInterface;
NS_ASSUME_NONNULL_BEGIN

@interface SCSCaseLogger : SCSLogger
/**
 * Singleton used to register your target to receive specific streams.
 */

@property (nonatomic, assign) NSInteger caseLoggerCounter;

- (instancetype)initWithCaseInterface:(nonnull SCCaseInterface *)caseInterface withCompletion:(nullable void(^)(BOOL ready))completion;
- (void)addAnotherSession;
- (void)cleanUpLoggingSession;

+ (void)casePublisher:(SCSCasesCurrentState)state;
+ (void)caseList:(NSString *)name withCount:(NSInteger)count andState:(SCSCasesCurrentState)state;
+ (void)caseDetail:(NSString *)caseId state:(SCSCasesCurrentState)state;
+ (void)caseData:(NSInteger)wordCount;
+ (void)caseSubmission:(SCSCasesCurrentState)state withResult:(SCSCaseLoggerResult)result andWordCount:(NSInteger)wordCount;
+ (void)caseDetailMessage:(NSString *)caseId by:(SCSCaseLoggerMessageSender)sender result:(SCSCaseLoggerResult)result;
+ (void)pushNotification:(NSString *)caseId;

+ (void)logDeviceInformation;
+ (void)batteryLevel:(float)level;
+ (void)orientation:(NSString *)orientation;
+ (void)appIsBackgrounded:(BOOL)isBackgrounded;
+ (void)connectivityStatus:(SFCReachabilityStatus)status;
+ (void)error:(NSString *)error severity:(NSInteger)severity;
+ (void)debug:(NSString *)debug;

@end
NS_ASSUME_NONNULL_END

