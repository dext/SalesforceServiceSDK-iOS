//
//  SCCaseListModel.h
//  
//
//  Created by Amisha Goyal on 1/12/16.
//
//

@import SalesforceCore.SalesforceOffline;

@class SCCaseListItemModel;

NS_ASSUME_NONNULL_BEGIN

@interface SCCaseListModel : SFCBaseManagedObject <SFCConcreteEntity>

@property (nullable, nonatomic, retain) NSString *caseListId;
@property (nullable, nonatomic, retain) NSString *developerName;
@property (nonatomic) BOOL done;
@property (nullable, nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSDate *lastRefreshTime;
@property (nullable, nonatomic, retain) NSSet<SCCaseListItemModel *> *records;
@property (nullable, nonatomic, retain) NSString *describeUrl;
@property (nullable, nonatomic, retain) NSString *resultsUrl;
@property (nullable, nonatomic, retain) NSString *url;
@property (nullable, nonatomic, retain) NSString *soqlQuery;

@end

@interface SCCaseListModel (CoreDataGeneratedAccessors)

- (void)addRecordsObject:(SCCaseListItemModel *)value;
- (void)removeRecordsObject:(SCCaseListItemModel *)value;
- (void)addRecords:(NSSet<SCCaseListItemModel *> *)values;
- (void)removeRecords:(NSSet<SCCaseListItemModel *> *)values;

@end

NS_ASSUME_NONNULL_END
