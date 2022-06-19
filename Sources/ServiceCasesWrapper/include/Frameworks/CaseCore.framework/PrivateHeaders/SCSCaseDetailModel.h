//
//  CaseDetail.h
//  
//
//  Created by Amisha Goyal on 3/22/16.
//
//

@import SalesforceCore.SalesforceOffline;

NS_ASSUME_NONNULL_BEGIN

@interface SCSCaseDetailModel : SFCBaseManagedObject <SFCConcreteEntity>

@property (nullable, nonatomic, retain) NSString *caseId;
@property (nullable, nonatomic, retain) NSString *assetId;
@property (nullable, nonatomic, retain) NSString *caseNumber;
@property (nullable, nonatomic, retain) NSString *caseDescription;
@property (nullable, nonatomic, retain) NSString *creatorFullPhotoUrl;
@property (nullable, nonatomic, retain) NSString *creatorName;
@property (nullable, nonatomic, retain) NSString *creatorSmallPhotoUrl;
@property (nullable, nonatomic, retain) NSString *feedItemId;
@property (nullable, nonatomic, retain) NSString *communityId;
@property (nullable, nonatomic, retain) NSString *contactId;
@property (nullable, nonatomic, retain) NSString *createdById;
@property (nullable, nonatomic, retain) NSString *ownerId;
@property (nullable, nonatomic, retain) NSString *priority;
@property (nullable, nonatomic, retain) NSString *reason;
@property (nullable, nonatomic, retain) NSString *recordTypeId;
@property (nullable, nonatomic, retain) NSString *sourceId;
@property (nullable, nonatomic, retain) NSString *status;
@property (nullable, nonatomic, retain) NSString *subject;
@property (nullable, nonatomic, retain) NSString *suppliedEmail;
@property (nullable, nonatomic, retain) NSString *systemModstamp;
@property (nullable, nonatomic, retain) NSString *type;
@property (nullable, nonatomic, retain) NSMutableDictionary *customAttributes;
@property (nullable, nonatomic, retain) NSString *accountId;
@property (nullable, nonatomic, retain) NSString *parentId;
@property (nullable, nonatomic, retain) NSString *suppliedCompany;
@property (nullable, nonatomic, retain) NSString *suppliedName;
@property (nullable, nonatomic, retain) NSString *suppliedPhone;
@property (nullable, nonatomic, retain) NSString *lastModifiedById;
@property (nonatomic) BOOL hasCommentsUnreadByOwner;
@property (nonatomic) BOOL hasSelfServiceComments;
@property (nonatomic) BOOL isClosed;
@property (nonatomic) BOOL isCaseDeleted;
@property (nonatomic) BOOL isEscalated;
@property (nonatomic, retain) NSDate *closedDate;
@property (nonatomic, retain) NSDate *createdDate;
@property (nonatomic, retain) NSDate *lastModifiedDate;
@property (nonatomic, retain) NSDate *lastReferencedDate;
@property (nonatomic, retain) NSDate *lastViewedDate;

@end

NS_ASSUME_NONNULL_END

