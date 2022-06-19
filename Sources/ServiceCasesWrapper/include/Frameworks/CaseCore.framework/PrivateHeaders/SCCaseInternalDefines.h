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

#ifndef SCS_EXTERN
#ifdef __cplusplus
#define SCS_EXTERN   extern "C" __attribute__((visibility ("default")))
#else
#define SCS_EXTERN   extern __attribute__((visibility ("default")))
#endif
#endif

SCS_EXTERN SFCLogger SCSCaseCoreLogger;

#define CaseCoreLogDefault(frmt, ...)  SFCLoggerLogDefault(SCSCaseCoreLogger, frmt, ##__VA_ARGS__)
#define CaseCoreLogInfo(frmt, ...)     SFCLoggerLogInfo(SCSCaseCoreLogger, frmt, ##__VA_ARGS__)
#define CaseCoreLogDebug(frmt, ...)    SFCLoggerLogDebug(SCSCaseCoreLogger, frmt, ##__VA_ARGS__)
#define CaseCoreLogError(frmt, ...)    SFCLoggerLogError(SCSCaseCoreLogger, frmt, ##__VA_ARGS__)
#define CaseCoreLogFault(frmt, ...)    SFCLoggerLogFault(SCSCaseCoreLogger, frmt, ##__VA_ARGS__)

// TODO: Add proper enum values for the various field types that can be present on a case
typedef NS_ENUM(NSInteger, SCCaseFieldType) {
    SCCaseFieldTypeUnknown,
    SCCaseFieldTypeText,
    SCCaseFieldTypeEmail,
    SCCaseFieldTypeTextArea,
    SCCaseFieldTypeRichText,
    SCCaseFieldTypePicklist
};

typedef NS_ENUM(NSInteger, SCCaseFieldExtraType) {
    SCCaseFieldExtraTypeUnknown,
    SCCaseFieldExtraTypeRichText,
    SCCaseFieldExtraTypePlainText
};

SCS_EXTERN NSString * SCStringValueForCaseFieldType(SCCaseFieldType type);
SCS_EXTERN SCCaseFieldType SCTypeForCaseFieldTypeName(NSString *name);

SCS_EXTERN NSString * SCStringValueForCaseFieldExtraType(SCCaseFieldExtraType type);
SCS_EXTERN SCCaseFieldExtraType SCTypeForCaseFieldExtraTypeName(NSString *name);

SCS_EXTERN void SCPrimitiveCaseFieldTypeFormatter(id value, SFCPrimitivePointer outputStruct);
SCS_EXTERN void SCPrimitiveCaseFieldExtraTypeFormatter(id value, SFCPrimitivePointer outputStruct);
SCS_EXTERN NSString * const SCCaseMockNetworkInstanceURL;
SCS_EXTERN NSString * const SCCaseDateTransformerName;
SCS_EXTERN NSString * const SCCaseCreationSuccessfulNotification;
SCS_EXTERN NSString * const SCCasePublisherLoadedForNewUserNotification;
SCS_EXTERN NSString * const SCCaseUnreadCountChangedNotification;
SCS_EXTERN NSString * const SCSCaseFrameworkVersion;

