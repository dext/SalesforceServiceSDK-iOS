//
//  SCCaseListItemModel.h
//
//
//  Created by Amisha Goyal on 1/12/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceOffline;

@class SCCaseListModel, SCSCaseFeedEntityModel;

NS_ASSUME_NONNULL_BEGIN

@interface SCCaseListItemModel : SFCBaseManagedObject <SFCConcreteEntity>

@property (nullable, nonatomic, retain) NSString *caseId;
@property (nullable, nonatomic, retain) NSString *caseNumber;
@property (nullable, nonatomic, retain) NSString *createdById;
@property (nullable, nonatomic, retain) NSDate *createdDate;
@property (nullable, nonatomic, retain) NSString *lastModifiedById;
@property (nullable, nonatomic, retain) NSDate *lastViewedDate;
@property (nullable, nonatomic, retain) NSDate *lastFeedItemModifiedDate;
@property (nullable, nonatomic, retain) NSString *lastFeedItemCreatedById;
//This property stores the lastFeedItemModifiedDate if not null. If it is null then stores the caseCreatedDate
@property (nullable, nonatomic, retain) NSDate *lastFeedItemModifiedDateOrCaseCreatedDate;
@property (nullable, nonatomic, retain) NSDate *lastModifiedDate;
@property (nullable, nonatomic, retain) NSString *status;
@property (nullable, nonatomic, retain) NSString *subject;
@property (nullable, nonatomic, retain) SCCaseListModel *caseList;
@property (nullable, nonatomic, retain) NSSet<SCSCaseFeedEntityModel *> *caseFeedEntities;

@end

@interface SCCaseListItemModel (CoreDataGeneratedAccessors)

- (void)addCaseFeedEntitiesObject:(SCSCaseFeedEntityModel *)value;
- (void)removeCaseFeedEntitiesObject:(SCSCaseFeedEntityModel *)value;
- (void)addCaseFeedEntities:(NSSet<SCSCaseFeedEntityModel *> *)values;
- (void)removeCaseFeedEntities:(NSSet<SCSCaseFeedEntityModel *> *)values;

@end

NS_ASSUME_NONNULL_END
