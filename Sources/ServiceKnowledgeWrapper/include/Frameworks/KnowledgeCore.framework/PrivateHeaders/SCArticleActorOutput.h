//
//  SCArticleActorOutput.h
//  KnowledgeCore
//
//  Created by Michael Nachbaur on 1/27/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;
#import "SCInternalDefines.h"

@class SCArticleActorReferenceOutput;
@class SCArticleActorPhotoOutput;
@interface SCArticleActorOutput : SFCOutput <SFCIndexedEntity>

@property (nonatomic, copy, readonly) NSString *userName;
@property (nonatomic, copy, readonly) NSString *userId;
@property (nonatomic, copy, readonly) NSString *url;
@property (nonatomic, copy, readonly) NSString *email;
@property (nonatomic, copy, readonly) NSString *firstName;
@property (nonatomic, getter = isActive, readonly) BOOL active;
@property (nonatomic, copy, readonly) NSString *lastName;

@end
