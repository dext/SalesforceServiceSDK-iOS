//
//  SCSArticleQuery_Internal.h
//  KnowledgeCore
//
//  Created by Michael Nachbaur on 4/22/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

@class SCArticleAction, SCSKnowledgeManager, SCArticleQueryModel;
@interface SCSArticleQuery ()

NS_ASSUME_NONNULL_BEGIN
- (nullable SCArticleAction*)actionToPerformQueryWithKnowledgeManager:(SCSKnowledgeManager *)knowledgeManager responseBlock:(SFCActionResponseBlock)responseBlock;
- (nullable NSFetchRequest*)fetchRequestForSelectingModelsWithKnowledgeManager:(SCSKnowledgeManager *)knowledgeManager;
- (nullable SCArticleQueryModel*)queryModelWithKnowledgeManager:(SCSKnowledgeManager *)knowledgeManager;
NS_ASSUME_NONNULL_END
@end
