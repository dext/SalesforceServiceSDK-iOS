//
//  SCCaseChatterDefines.h
//  CaseCore
//
//  Created by Michael Nachbaur on 1/27/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;

#ifndef SCCaseChatterDefines_h
#define SCCaseChatterDefines_h

#ifndef SCS_EXTERN
#ifdef __cplusplus
#define SCS_EXTERN   extern "C" __attribute__((visibility ("default")))
#else
#define SCS_EXTERN   extern __attribute__((visibility ("default")))
#endif
#endif

typedef NS_ENUM(NSInteger, SCCaseChatterCaseActorType) {
    SCCaseChatterCaseActorTypeUnknown,
    SCCaseChatterCaseActorTypeCustomerService,
    SCCaseChatterCaseActorTypeCustomer
};

typedef NS_ENUM(NSInteger, SCCaseChatterFeedElementCapabilityType) {
    SCCaseChatterFeedElementCapabilityTypeUnknown,
    SCCaseChatterFeedElementCapabilityTypeAssociatedActions,
    SCCaseChatterFeedElementCapabilityTypeBanner,
    SCCaseChatterFeedElementCapabilityTypeBookmarks,
    SCCaseChatterFeedElementCapabilityTypeBundle,
    SCCaseChatterFeedElementCapabilityTypeChatterLikes,
    SCCaseChatterFeedElementCapabilityTypeComments,
    SCCaseChatterFeedElementCapabilityTypeModeration,
    SCCaseChatterFeedElementCapabilityTypePoll,
    SCCaseChatterFeedElementCapabilityTypeQuestionAndAnswers,
    SCCaseChatterFeedElementCapabilityTypeTopics
};

typedef NS_ENUM(NSInteger, SCCaseChatterFeedElementType) {
    SCCaseChatterFeedElementTypeUnknown,
    SCCaseChatterFeedElementTypeBundle,
    SCCaseChatterFeedElementTypeFeedItem
};

typedef NS_ENUM(NSInteger, SCCaseChatterFeedItemAttachmentInputType) {
    SCCaseChatterFeedItemAttachmentInputTypeUnknown,
    SCCaseChatterFeedItemAttachmentInputTypeLink,
    SCCaseChatterFeedItemAttachmentInputTypeNewFile,
    SCCaseChatterFeedItemAttachmentInputTypeExistingContent,
    SCCaseChatterFeedItemAttachmentInputTypePoll,
    SCCaseChatterFeedItemAttachmentInputTypeThanks,
    SCCaseChatterFeedItemAttachmentInputTypeCanvas
};

typedef NS_ENUM(NSInteger, SCCaseChatterFeedDensity) {
    SCCaseChatterFeedDensityUnknown,
    SCCaseChatterFeedDensityAllUpdates,
    SCCaseChatterFeedDensityFewerUpdates
};

typedef NS_ENUM(NSInteger, SCCaseChatterFeedItemType) {
    SCCaseChatterFeedItemTypeUnknown,
    SCCaseChatterFeedItemTypeActivityEvent,
    SCCaseChatterFeedItemTypeAdvancedTextPost,
    SCCaseChatterFeedItemTypeApprovalPost,
    SCCaseChatterFeedItemTypeAttachArticleEvent,
    SCCaseChatterFeedItemTypeCallLogPost,
    SCCaseChatterFeedItemTypeCaseCommentPost,
    SCCaseChatterFeedItemTypeChangeStatusPost,
    SCCaseChatterFeedItemTypeCollaborationGroupCreated,
    SCCaseChatterFeedItemTypeContentPost,
    SCCaseChatterFeedItemTypeDashboardComponentAlert,
    SCCaseChatterFeedItemTypeDashboardComponentSnapshot,
    SCCaseChatterFeedItemTypeEmailMessageEvent,
    SCCaseChatterFeedItemTypeLinkPost,
    SCCaseChatterFeedItemTypePollPost,
    SCCaseChatterFeedItemTypeTextPost,
    SCCaseChatterFeedItemTypeTrackedChange,
    SCCaseChatterFeedItemTypeUserStatus,
    SCCaseChatterFeedItemTypeChatTranscriptPost,
    SCCaseChatterFeedItemTypeFacebookPost,
    SCCaseChatterFeedItemTypeRypplePost,
    SCCaseChatterFeedItemTypeReplyPost,
    SCCaseChatterFeedItemTypeTwitterPost,
    SCCaseChatterFeedItemTypeCreateRecordEvent,
    SCCaseChatterFeedItemTypeCanvasPost
};

typedef NS_ENUM(NSInteger, SCCaseChatterFeedItemAttachmentType) {
    SCCaseChatterFeedItemAttachmentTypeUnknown,
    SCCaseChatterFeedItemAttachmentTypeApproval,
    SCCaseChatterFeedItemAttachmentTypeBasicTemplate,
    SCCaseChatterFeedItemAttachmentTypeCanvas,
    SCCaseChatterFeedItemAttachmentTypeCaseComment,
    SCCaseChatterFeedItemAttachmentTypeContent,
    SCCaseChatterFeedItemAttachmentTypeDashboardComponent,
    SCCaseChatterFeedItemAttachmentTypeEmailMessage,
    SCCaseChatterFeedItemAttachmentTypeLink,
    SCCaseChatterFeedItemAttachmentTypePoll,
    SCCaseChatterFeedItemAttachmentTypeRecordSnapshot,
    SCCaseChatterFeedItemAttachmentTypeTrackedChange
};

typedef NS_ENUM(NSInteger, SCCaseChatterFeedItemVisibility) {
    SCCaseChatterFeedItemVisibilityUnknown,
    SCCaseChatterFeedItemVisibilityInternalUsers,
    SCCaseChatterFeedItemVisibilityAllUsers
};

typedef NS_ENUM(NSInteger, SCCaseChatterFeedSortOrder) {
    SCCaseChatterFeedSortOrderUnknown,
    SCCaseChatterFeedSortOrderCreatedDateDesc,
    SCCaseChatterFeedSortOrderLastModifiedDateDesc
};

typedef NS_ENUM(NSInteger, SCCaseChatterMessageSegmentType) {
    SCCaseChatterMessageSegmentTypeUnknown,
    SCCaseChatterMessageSegmentTypeEntityLink,
    SCCaseChatterMessageSegmentTypeFieldChange,
    SCCaseChatterMessageSegmentTypeFieldChangeName,
    SCCaseChatterMessageSegmentTypeFieldChangeValue,
    SCCaseChatterMessageSegmentTypeHashtag,
    SCCaseChatterMessageSegmentTypeLink,
    SCCaseChatterMessageSegmentTypeMention,
    SCCaseChatterMessageSegmentTypeMoreChanges,
    SCCaseChatterMessageSegmentTypeText,
    SCCaseChatterMessageSegmentTypeResourceLink
};

typedef NS_ENUM(NSInteger, SCCaseChatterRenditionStatusType) {
    SCCaseChatterRenditionStatusTypeUnknown,
    SCCaseChatterRenditionStatusTypeProcessing,
    SCCaseChatterRenditionStatusTypeFailed,
    SCCaseChatterRenditionStatusTypeSuccess,
    SCCaseChatterRenditionStatusTypeNotAvailable
};

typedef NS_ENUM(NSInteger, SCCaseChatterFileRenditionType) {
    SCCaseChatterFileRenditionTypeUnknown,
    SCCaseChatterFileRenditionTypeFlash,
    SCCaseChatterFileRenditionTypePDF,
    SCCaseChatterFileRenditionTypeSlide,
    SCCaseChatterFileRenditionTypeSmall,
    SCCaseChatterFileRenditionTypeMedium,
    SCCaseChatterFileRenditionTypeLarge
};

typedef NS_ENUM(NSInteger, SCCaseChatterPublishStatus) {
    SCCaseChatterPublishStatusUnknown,
    SCCaseChatterPublishStatusPublicAccess,
    SCCaseChatterPublishStatusPrivateAccess,
    SCCaseChatterPublishStatusPendingAccess
};

typedef NS_ENUM(NSInteger, SCCaseChatterFilterGroup) {
    SCCaseChatterFilterGroupUnknown,
    SCCaseChatterFilterGroupSmall,
    SCCaseChatterFilterGroupMedium,
    SCCaseChatterFilterGroupBig,
    SCCaseChatterFilterGroupSupplemental
};

typedef NS_ENUM(NSInteger, SCCaseChatterUserType) {
    SCCaseChatterUserTypeUnknown,
    SCCaseChatterUserTypeChatterGuest,
    SCCaseChatterUserTypeChatterOnly,
    SCCaseChatterUserTypeGuest,
    SCCaseChatterUserTypeInternal,
    SCCaseChatterUserTypePortal,
    SCCaseChatterUserTypeSystem
};

typedef NS_ENUM(NSInteger, SCCaseChatterFeedType) {
    SCCaseChatterFeedTypeUnknown,
    SCCaseChatterFeedTypeBookmarks,
    SCCaseChatterFeedTypeCompany,
    SCCaseChatterFeedTypeFiles,
    SCCaseChatterFeedTypeGroups,
    SCCaseChatterFeedTypeNews,
    SCCaseChatterFeedTypePeople,
    SCCaseChatterFeedTypeRecord,
    SCCaseChatterFeedTypeTo,
    SCCaseChatterFeedTypeUserProfile
};

typedef NS_ENUM(NSInteger, SCCaseChatterCommunityStatus) {
    SCCaseChatterCommunityStatusUnknown,
    SCCaseChatterCommunityStatusLive,
    SCCaseChatterCommunityStatusInactive,
    SCCaseChatterCommunityStatusUnderConstruction
};

SCS_EXTERN NSString * SCCaseChatterStringValueForCaseActorType(SCCaseChatterCaseActorType type);
SCS_EXTERN SCCaseChatterCaseActorType SCCaseChatterTypeForCaseActorTypeName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveCaseActorTypeFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForFeedElementCapabilityType(SCCaseChatterFeedElementCapabilityType type);
SCS_EXTERN SCCaseChatterFeedElementCapabilityType SCCaseChatterTypeForFeedElementCapabilityTypeName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveFeedElementCapabilityTypeFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForFeedElementType(SCCaseChatterFeedElementType type);
SCS_EXTERN SCCaseChatterFeedElementType SCCaseChatterTypeForFeedElementTypeName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveFeedElementTypeFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForFeedItemAttachmentInputType(SCCaseChatterFeedItemAttachmentInputType type);
SCS_EXTERN SCCaseChatterFeedItemAttachmentInputType SCCaseChatterTypeForFeedItemAttachmentInputTypeName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveFeedItemAttachmentInputTypeFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForFeedDensity(SCCaseChatterFeedDensity type);
SCS_EXTERN SCCaseChatterFeedDensity SCCaseChatterTypeForFeedDensityName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveFeedDensityFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForFeedItemType(SCCaseChatterFeedItemType type);
SCS_EXTERN SCCaseChatterFeedItemType SCCaseChatterTypeForFeedItemTypeName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveFeedItemTypeFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForFeedItemAttachmentType(SCCaseChatterFeedItemAttachmentType type);
SCS_EXTERN SCCaseChatterFeedItemAttachmentType SCCaseChatterTypeForFeedItemAttachmentTypeName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveFeedItemAttachmentTypeFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForFeedItemVisibility(SCCaseChatterFeedItemVisibility type);
SCS_EXTERN SCCaseChatterFeedItemVisibility SCCaseChatterTypeForFeedItemVisibilityName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveFeedItemVisibilityFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForFeedSortOrder(SCCaseChatterFeedSortOrder type);
SCS_EXTERN SCCaseChatterFeedSortOrder SCCaseChatterTypeForFeedSortOrderName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveFeedSortOrderFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForMessageSegmentType(SCCaseChatterMessageSegmentType type);
SCS_EXTERN SCCaseChatterMessageSegmentType SCCaseChatterTypeForMessageSegmentTypeName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveMessageSegmentTypeFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForRenditionStatusType(SCCaseChatterRenditionStatusType type);
SCS_EXTERN SCCaseChatterRenditionStatusType SCCaseChatterTypeForRenditionStatusTypeName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveRenditionStatusTypeFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForFileRenditionType(SCCaseChatterFileRenditionType type);
SCS_EXTERN SCCaseChatterFileRenditionType SCCaseChatterTypeForFileRenditionTypeName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveFileRenditionTypeFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForPublishStatus(SCCaseChatterPublishStatus type);
SCS_EXTERN SCCaseChatterPublishStatus SCCaseChatterTypeForPublishStatusName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitivePublishStatusFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForFilterGroup(SCCaseChatterFilterGroup type);
SCS_EXTERN SCCaseChatterFilterGroup SCCaseChatterTypeForFilterGroupName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveFilterGroupFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForUserType(SCCaseChatterUserType type);
SCS_EXTERN SCCaseChatterUserType SCCaseChatterTypeForUserTypeName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveUserTypeFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForFeedType(SCCaseChatterFeedType type);
SCS_EXTERN SCCaseChatterFeedType SCCaseChatterTypeForFeedTypeName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveFeedTypeFormatter(id value, SFCPrimitivePointer outputStruct);

SCS_EXTERN NSString * SCCaseChatterStringValueForCommunityStatus(SCCaseChatterCommunityStatus type);
SCS_EXTERN SCCaseChatterCommunityStatus SCCaseChatterTypeForCommunityStatusName(NSString *name);
SCS_EXTERN void SCCaseChatterPrimitiveCommunityStatusFormatter(id value, SFCPrimitivePointer outputStruct);

#endif
