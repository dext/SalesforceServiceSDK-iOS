//
//  SCArticleQueryResultModel.h
//  KnowledgeCore
//
//  Created by Michael Nachbaur on 2018-04-12.
//  Copyright © 2018 Salesforce.com. All rights reserved.
//
//

@import Foundation;
@import CoreData;
@import SalesforceCore.SalesforceOffline;

@class SCArticleQueryModel, SCArticleDetailModel;

NS_ASSUME_NONNULL_BEGIN

@interface SCArticleQueryResultModel : SFCBaseManagedObject <SFCConcreteEntity>

@property (nullable, nonatomic, retain) SCArticleDetailModel *article;
@property (nullable, nonatomic, retain) SCArticleQueryModel *query;
@property (nullable, nonatomic, copy) NSNumber *resultIndex;
@property (nullable, nonatomic, copy) NSString *queryResultIndex;

@end

NS_ASSUME_NONNULL_END
