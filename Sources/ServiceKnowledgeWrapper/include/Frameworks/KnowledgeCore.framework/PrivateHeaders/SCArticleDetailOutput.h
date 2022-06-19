//
//  SCArticleDetailOutput.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/15/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

#import "SCArticleSummaryOutput.h"

@class SCArticleActorOutput, SCArticleFieldOutput;
@interface SCArticleDetailOutput : SCArticleSummaryOutput

///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

@property (nonatomic, strong, readonly) NSString *articleType;
@property (nonatomic, assign, readonly) NSInteger versionNumber;
@property (nonatomic, strong, readonly) NSDate *createdDate;
@property (nonatomic, strong, readonly) NSDate *lastModifiedDate;
@property (nonatomic, strong, readonly) SCArticleActorOutput *createdBy;
@property (nonatomic, strong, readonly) SCArticleActorOutput *lastModifiedBy;
@property (nonatomic, strong, readonly) NSArray<SCArticleFieldOutput*> *layoutItems;

@end
