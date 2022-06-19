//
//  NSFetchRequest+KnowledgeCore.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/27/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSFetchRequest (KnowledgeCore)

+ (instancetype)fetchRequestForDataCategoryGroupWithName:(NSString*)groupName;
+ (instancetype)fetchRequestForDataCategoryWithGroupName:(NSString*)groupName categoryName:(NSString*)categoryName;
+ (instancetype)fetchRequestForArticleWithArticleId:(NSString*)articleId;

@end
