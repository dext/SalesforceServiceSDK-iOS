//
//  SCSArticle_Internal.h
//  KnowledgeCore
//
//  Created by Michael Nachbaur on 4/2/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@class SCSArticleDownloader;
@class SCSKnowledgeManager, SCArticleDetailModel, SCSArticleCacheItem;
@interface SCSArticle ()

@property (nullable, nonatomic, strong) NSString *language;
@property (nullable, nonatomic, strong, readonly) NSManagedObjectID *objectID;
@property (nullable, nonatomic, strong) SCSArticleDownloader *downloader;

/** Date that the article detail was last cached in core data. */
@property (nullable, nonatomic, strong) NSDate *cachedDate;

/** Date that the article was last cached in file system (SCArticleCache) */
@property (nullable, nonatomic, strong) NSDate *fileCachedDate;

@property (nullable, nonatomic, weak, readonly) SCSArticleCacheItem *cacheItem;
@property (nonatomic, weak) SCArticleDetailModel *articleModel;

- (instancetype)initWithManager:(SCSKnowledgeManager*)manager articleModel:(SCArticleDetailModel*)articleModel;
- (instancetype)initWithManager:(SCSKnowledgeManager*)manager articleId:(NSString*)articleId objectID:(NSManagedObjectID*)objectID;

- (void)downloadAssociatedContent:(NSString*)contentId completion:(nullable void(^)(NSError * __nullable error))completionBlock;
- (nullable NSData*)dataForArticleContent;
- (BOOL)isAssociatedContentDownloaded:(NSString*)contentId;
- (nullable NSData*)dataForAssociatedContent:(NSString*)contentId;
- (void)articleWithKnowledgeManager:(SCSKnowledgeManager *)manager completion:(nullable void(^)(SCSArticle *article, NSError * __nullable error))completion;

- (void)resetContent;

@end

NS_ASSUME_NONNULL_END
