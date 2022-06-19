//
//  SCInternalDefines.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/23/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

#import <os/log.h>
#import <os/activity.h>

@import SalesforceCore.SalesforceNetwork;
@import SalesforceCore.SalesforceCrypto.Private;

@class SCSServiceConfiguration;

// Redeclarations of enums that are used from within both public and private interfaces,
// and therefore need to be redeclared here to prevent circular imports at the private
// header level.
#ifndef __SCDEFINES_ENUMS_H__
#define __SCDEFINES_ENUMS_H__
typedef NS_ENUM(NSInteger, SCChannelType) {
    SCChannelTypeUnknown,
    SCChannelTypeInternal,
    SCChannelTypePublic,
    SCChannelTypeCustomerPortal,
    SCChannelTypePartnerPortal
};

typedef NS_ENUM(NSInteger, SCQueryMethod) {
    SCQueryMethodUnknown,
    SCQueryMethodAbove,
    SCQueryMethodBelow,
    SCQueryMethodAboveOrBelow,
    SCQueryMethodAt
};

typedef NS_ENUM(NSInteger, SCArticleSortByField) {
    SCArticleSortByFieldUnknown,
    SCArticleSortByFieldLastPublishedDate,
    SCArticleSortByFieldTitle,
    SCArticleSortByFieldViewScore
};

typedef NS_ENUM(NSInteger, SCArticleSortOrder) {
    SCArticleSortOrderUnknown,
    SCArticleSortOrderAscending,
    SCArticleSortOrderDescending,
};
#endif

#ifndef SC_EXTERN
#ifdef __cplusplus
#define SC_EXTERN   extern "C" __attribute__((visibility ("default")))
#else
#define SC_EXTERN   extern __attribute__((visibility ("default")))
#endif
#endif

SC_EXTERN SFCLogger SCSKnowledgeCoreLogger;
SC_EXTERN SFCLogger SCSKnowledgeCoreWebServerLogger;

#define KnowledgeCoreLogDefault(frmt, ...)  SFCLoggerLogDefault(SCSKnowledgeCoreLogger, frmt, ##__VA_ARGS__)
#define KnowledgeCoreLogInfo(frmt, ...)     SFCLoggerLogInfo(SCSKnowledgeCoreLogger, frmt, ##__VA_ARGS__)
#define KnowledgeCoreLogDebug(frmt, ...)    SFCLoggerLogDebug(SCSKnowledgeCoreLogger, frmt, ##__VA_ARGS__)
#define KnowledgeCoreLogError(frmt, ...)    SFCLoggerLogError(SCSKnowledgeCoreLogger, frmt, ##__VA_ARGS__)
#define KnowledgeCoreLogFault(frmt, ...)    SFCLoggerLogFault(SCSKnowledgeCoreLogger, frmt, ##__VA_ARGS__)

#define KnowledgeCoreWebServerLogDefault(frmt, ...)  SFCLoggerLogDefault(SCSKnowledgeCoreWebServerLogger, frmt, ##__VA_ARGS__)
#define KnowledgeCoreWebServerLogInfo(frmt, ...)     SFCLoggerLogInfo(SCSKnowledgeCoreWebServerLogger, frmt, ##__VA_ARGS__)
#define KnowledgeCoreWebServerLogDebug(frmt, ...)    SFCLoggerLogDebug(SCSKnowledgeCoreWebServerLogger, frmt, ##__VA_ARGS__)
#define KnowledgeCoreWebServerLogError(frmt, ...)    SFCLoggerLogError(SCSKnowledgeCoreWebServerLogger, frmt, ##__VA_ARGS__)
#define KnowledgeCoreWebServerLogFault(frmt, ...)    SFCLoggerLogFault(SCSKnowledgeCoreWebServerLogger, frmt, ##__VA_ARGS__)

SC_EXTERN NSString * const CSFDataManagerConfigurationServiceCloud;
SC_EXTERN NSInteger const SCSArticleListPageSize;
SC_EXTERN NSInteger const SCSArticleCacheSize;
SC_EXTERN NSString* const SCSArticleContentFileName;
SC_EXTERN NSString* const SCSArticleCSSFileName;
SC_EXTERN NSString* const SCSArticleJavascriptFileName;
SC_EXTERN NSString* const SCSArticleAssociatedContentFileName;
SC_EXTERN NSString* const SCSArticleCacheRootDirectoryName;

SC_EXTERN SCArticleSortOrder const SCSArticleQueryDefaultSortOrder;
SC_EXTERN SCArticleSortByField const SCSArticleQueryDefaultSortByField;
SC_EXTERN SCQueryMethod const SCSArticleQueryDefaultQueryMethod;

SC_EXTERN SCArticleSortByField SCArticleSortByFieldNotUnknown(SCArticleSortByField field, BOOL isSearch);
SC_EXTERN SCArticleSortOrder SCArticleSortOrderNotUnknown(SCArticleSortOrder field);
SC_EXTERN SCQueryMethod SCQueryMethodNotUnknown(SCQueryMethod field);

typedef NS_ENUM(NSInteger, SCDataErrorCode) {
    SCDataUnknownError = 1000,
    SCDataNotFoundError,
};

/**
 The type of article field.
 */
typedef NS_ENUM(NSInteger, SCArticleFieldType) {
    /** Unknown field type. */
    SCArticleFieldTypeUnknown,
    /** Text field type. */
    SCArticleFieldTypeText,
    /** Text area field type. */
    SCArticleFieldTypeTextArea,
    /** Long text area field type. */
    SCArticleFieldTypeLongTextArea,
    /** Rich text field type. */
    SCArticleFieldTypeRichText
};


SC_EXTERN NSString * SCServiceCloudStringValueForChannelType(SCChannelType type);
SC_EXTERN SCChannelType SCServiceCloudTypeForChannelTypeName(NSString *name);

SC_EXTERN NSString * SCServiceCloudStringValueForQueryMethod(SCQueryMethod type);
SC_EXTERN SCQueryMethod SCServiceCloudTypeForQueryMethodName(NSString *name);

SC_EXTERN NSString * SCServiceCloudStringValueForArticleSortByField(SCArticleSortByField type);
SC_EXTERN SCArticleSortByField SCServiceCloudTypeForArticleSortByField(NSString *name);

SC_EXTERN NSString * SCServiceCloudStringValueForArticleSortOrder(SCArticleSortOrder type);
SC_EXTERN SCArticleSortOrder SCServiceCloudTypeForArticleSortOrder(NSString *name);

SC_EXTERN NSString * SCStringValueForArticleFieldType(SCArticleFieldType type);
SC_EXTERN SCArticleFieldType SCTypeForArticleFieldTypeName(NSString *name);

SC_EXTERN void SCServiceCloudPrimitiveChannelTypeFormatter(id value, SFCPrimitivePointer outputStruct);
SC_EXTERN void SCServiceCloudPrimitiveQueryMethodFormatter(id value, SFCPrimitivePointer outputStruct);
SC_EXTERN void SCServiceCloudPrimitiveSortTypeFormatter(id value, SFCPrimitivePointer outputStruct);
SC_EXTERN void SCServiceCloudPrimitiveSortOrderFormatter(id value, SFCPrimitivePointer outputStruct);
SC_EXTERN void SCPrimitiveArticleFieldTypeFormatter(id value, SFCPrimitivePointer outputStruct);
SC_EXTERN NSString * SCServiceCloudFieldNameForArticleSortByField(SCArticleSortByField sortByField);
