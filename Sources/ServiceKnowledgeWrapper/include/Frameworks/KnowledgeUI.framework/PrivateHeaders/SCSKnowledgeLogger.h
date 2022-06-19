//
//  SCSKnowledgeLogger.h
//  KnowledgeUI
//
//  Created by Amisha Goyal on 10/12/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@import SalesforceCore.SalesforceNetwork.SFCReachability;
@import SalesforceCore.SalesforceOffline;
@import ServiceCore.ServiceCommon;
@import ServiceCore.ServiceCommon.Private;

@class SCSServiceConfiguration;
@class SCSCategory;
@class SCKnowledgeInterface;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, SCSKnowledgeCurrentState) {
    SCSKnowledgeCurrentStateLaunched = 1,
    SCSKnowledgeCurrentStateLoaded,
    SCSKnowledgeCurrentStateDismissed,
    SCSKnowledgeCurrentStateMinimized,
    SCSKnowledgeCurrentStateMaximized,
};

@interface SCSKnowledgeLogger : SCSLogger
/**
 * Singleton used to register your target to receive specific streams.
 */

- (instancetype)initWithKnowledgeInterface:(nonnull SCKnowledgeInterface *)interface withCompletion:(nullable void(^)(BOOL ready))completion;
- (void)addAnotherSession;
- (void)forceCleanupLoggingSession;
- (void)cleanUpLoggingSession;

+ (void)knowledgeHome:(SCSKnowledgeCurrentState)state;
+ (void)dataCategory:(NSString *)dataCategory forState:(SCSKnowledgeCurrentState)state;
+ (void)article:(NSString *)articleId name:(NSString *)articleName state:(SCSKnowledgeCurrentState)state;
+ (void)category:(NSString *)name parentCategory:(nullable NSString *)parentCategoryName state:(SCSKnowledgeCurrentState)state;
+ (void)articleList:(SCSCategory *)category currentView:(NSString *)view state:(SCSKnowledgeCurrentState)state;
+ (void)articleList:(NSString *)controller showMoreClickedForCategory:(SCSCategory *)category state:(SCSKnowledgeCurrentState)state;
+ (void)search;
+ (void)viewStateForArticle:(NSString *)articleId name:(NSString *)articleName state:(SCSKnowledgeCurrentState)state;

+ (void)logDeviceInformation;
+ (void)batteryLevel:(float)level;
+ (void)orientation:(NSString *)orientation;
+ (void)appIsBackgrounded:(BOOL)isBackgrounded;
+ (void)connectivityStatus:(SFCReachabilityStatus)status;
+ (void)error:(NSString *)error severity:(NSInteger)severity;
+ (void)debug:(NSString *)debug;

@end
NS_ASSUME_NONNULL_END
