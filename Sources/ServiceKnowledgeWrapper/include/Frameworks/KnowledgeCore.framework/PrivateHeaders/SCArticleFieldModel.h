//
//  SCArticleFieldModel.h
//  ServiceSDK
//
//  Created by Michael Nachbaur on 1/20/15.
//  Copyright (c) 2015 Salesforce.com. All rights reserved.
//

@import Foundation;
@import CoreData;
@import SalesforceCore.SalesforceOffline;

#import "SCInternalDefines.h"

@class SCArticleDetailModel, SCDataCategoryModel;

@interface SCArticleFieldModel : SFCBaseManagedObject <SFCConcreteEntity>

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * label;
@property (nonatomic, retain) NSString * value;
@property (nonatomic, assign) NSNumber * type;
@property (nonatomic, retain) SCDataCategoryModel *rootCategory;
@property (nonatomic, retain) SCArticleDetailModel *article;
@property (nonatomic, retain) NSNumber * sortOrder;

- (BOOL)isDisplayField;

@end
