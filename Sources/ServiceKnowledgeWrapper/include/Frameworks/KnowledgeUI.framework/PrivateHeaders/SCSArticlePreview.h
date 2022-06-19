//
//  SCSArticlePreview.h
//  KnowledgeUI
//
//  Created by Amisha Goyal on 11/27/18.
//  Copyright © 2018 Salesforce.com. All rights reserved.
//

#import <Foundation/Foundation.h>
@import ServiceCore.ServiceCommon;
@import ServiceCore.ServiceCommon.Private;
@class SCKnowledgeInterface;

NS_ASSUME_NONNULL_BEGIN

@interface SCSArticlePreview : NSObject

- (instancetype)initWithEvent:(SCSEvent *)event knowledgeInterface:(SCKnowledgeInterface *)knowledgeInterface;
- (void)loadPreviewDataForArticle:(NSString *)articleId withCompletion:(void (^)(BOOL completion))completion;
- (void)loadArticleViewControllerForArticleId:(NSString*)articleId withCompletion:(void (^)(BOOL completion))completion;

@end

NS_ASSUME_NONNULL_END
