//
//  SCArticleSummaryOutput.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/15/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;

@class SCArticleDataCategoryGroupOutput;
@interface SCArticleSummaryOutput : SFCOutput <SFCIndexedEntity>

///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

@property (nonatomic, strong, readonly) NSString *articleId;
@property (nonatomic, strong, readonly) NSString *articleNumber;
@property (nonatomic, strong, readonly) NSString *title;
@property (nonatomic, strong, readonly) NSString *summary;
@property (nonatomic, strong, readonly) NSString *url;
@property (nonatomic, strong, readonly) NSString *urlName;
@property (nonatomic, readonly) NSUInteger viewCount;
@property (nonatomic, readonly) NSUInteger downVoteCount;
@property (nonatomic, readonly) NSUInteger upVoteCount;
@property (nonatomic, readonly) double viewScore;
@property (nonatomic, strong, readonly) NSDate *lastPublishedDate;
@property (nonatomic, strong, readonly) NSArray<SCArticleDataCategoryGroupOutput*> *categoryGroups;

@end
