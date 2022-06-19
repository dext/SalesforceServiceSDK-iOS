//
//  SCArticleSummaryModel.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/20/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import Foundation;
@import CoreData;

@import SalesforceCore.SalesforceOffline;
#import "SCDataCategoryModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SCArticleSummaryModel : SFCBaseManagedObject <SFCConcreteEntity>

@property (nullable, nonatomic, retain) NSString * articleId;
@property (nullable, nonatomic, retain) NSString * articleNumber;
@property (nullable, nonatomic, retain) NSString * title;
@property (nullable, nonatomic, retain) NSString * summary;
@property (nullable, nonatomic, retain) NSString * url;
@property (nullable, nonatomic, retain) NSString * urlName;
@property (nullable, nonatomic, retain) NSNumber * viewCount;
@property (nullable, nonatomic, retain) NSNumber * viewScore;
@property (nullable, nonatomic, retain) NSDate * lastPublishedDate;
@property (nullable, nonatomic, retain) NSString * imageName;
@property (nullable, nonatomic, retain) NSSet<SCDataCategoryModel*> *categories;
@property (nullable, nonatomic, retain) NSNumber * upVoteCount;
@property (nullable, nonatomic, retain) NSNumber * downVoteCount;

@end

@interface SCArticleSummaryModel (CoreDataGeneratedAccessors)

- (void)addCategoriesObject:(SCDataCategoryModel *)value;
- (void)removeCategoriesObject:(SCDataCategoryModel *)value;
- (void)addCategories:(NSSet *)values;
- (void)removeCategories:(NSSet *)values;

@end

NS_ASSUME_NONNULL_END
