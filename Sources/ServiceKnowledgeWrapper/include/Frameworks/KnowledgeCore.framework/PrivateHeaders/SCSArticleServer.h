//
//  SCSArticleServer.h
//  KnowledgeCore
//
//  Created by Michael Nachbaur on 2/17/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SCAppearanceConfiguration, SCSKnowledgeManager, SCSArticle, SCSArticleServer;

@protocol SCSArticleServerDelegate <NSObject>

- (BOOL)articleServer:(SCSArticleServer*)server isViewingArticle:(SCSArticle*)article;
- (void)articleServer:(SCSArticleServer*)server loadedURL:(NSURL*)url forArticle:(nullable SCSArticle*)article error:(NSError * _Nullable)error;

@optional

- (nullable NSString*)articleServer:(SCSArticleServer*)server additionalCSSForArticle:(SCSArticle*)article;
- (nullable NSString*)articleServer:(SCSArticleServer*)server additionalJavascriptForArticle:(SCSArticle*)article;

@end

@interface SCSArticleServer : NSObject

@property (nonatomic, readonly, getter=isRunning) BOOL running;
@property (nonatomic, readonly) NSUInteger port;
@property (nullable, nonatomic, strong, readonly) NSURL *serverUrl;
@property (null_resettable, nonatomic, weak, readonly) SCSKnowledgeManager *knowledgeManager;
@property (nullable, nonatomic, strong) SCAppearanceConfiguration *appearanceConfiguration;
@property (nullable, nonatomic, strong, readonly) NSString *articleCSS;
@property (nullable, nonatomic, copy) NSString *language;

- (instancetype)initWithKnowledgeManager:(SCSKnowledgeManager*)knowledgeManager;
- (instancetype)initWithKnowledgeManager:(SCSKnowledgeManager*)knowledgeManager port:(NSUInteger)port NS_DESIGNATED_INITIALIZER;

- (NSURL*)localUrlForArticleId:(NSString*)articleId;
- (NSString*)cssForArticleObject:(SCSArticle*)article;
- (NSString*)javascriptForArticleObject:(SCSArticle*)article;

- (void)addDelegate:(NSObject<SCSArticleServerDelegate>*)delegate;
- (void)removeDelegate:(NSObject<SCSArticleServerDelegate>*)delegate;

@end

NS_ASSUME_NONNULL_END
