//
//  SCServiceManager_Internal.h
//  KnowledgeCore
//
//  Created by Michael Nachbaur on 11/17/15.
//  Copyright © 2015 Salesforce.com. All rights reserved.
//

#import <CoreData/CoreData.h>
@import ServiceCore.ServiceCommon;
@import SalesforceCore.SalesforceAuthentication;

#import "SCSArticleServer.h"

NS_ASSUME_NONNULL_BEGIN

extern BOOL SCSKnowledgeManagerShouldReset(NSString * _Nullable previousVersion, NSString *currentVersion);

@class SCSArticleCache;
@interface SCSKnowledgeManager ()

@property (nullable, nonatomic, weak, readonly) SCServiceCloud *serviceCloud;
@property (nullable, nonatomic, weak) SCSArticleServer *articleServer;
@property (nullable, nonatomic, strong) SCSServiceConfiguration *serviceConfiguration;
@property (nullable, nonatomic, strong, readonly) SCSArticleCache *articleCache;
@property (nullable, atomic, strong) NSManagedObjectContext *managedObjectContext;
@property (nullable, nonatomic, copy) NSDictionary<NSString *,id> *userInfo;

+ (instancetype)internalManager;

- (instancetype)initWithServiceCloud:(nullable SCServiceCloud*)serviceCloud;
- (instancetype)initWithAuthenticationSettings:(SCSAuthenticationSettings*)settings serviceCloud:(nullable SCServiceCloud*)serviceCloud;
- (instancetype)initWithAuthenticationSettings:(SCSAuthenticationSettings*)settings serviceConfiguration:(SCSServiceConfiguration *)configuration serviceCloud:(nullable SCServiceCloud*)serviceCloud NS_DESIGNATED_INITIALIZER;

- (NSArray<NSManagedObjectID*>*)categoryObjectIDsAtCategory:(SCSCategory*)category queryMethod:(SCQueryMethod)queryMethod;

- (void)registerArticle:(SCSArticle*)article withArticleId:(NSString*)articleId;
- (nullable SCSArticle*)registeredArticleWithArticleId:(NSString*)articleId;

@end

NS_ASSUME_NONNULL_END
