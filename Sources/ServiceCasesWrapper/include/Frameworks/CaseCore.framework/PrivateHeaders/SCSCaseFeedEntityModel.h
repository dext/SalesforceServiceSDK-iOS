//
//  SCSCaseFeedEntity.h
//  CaseCore
//
//  Created by Amit Gosar on 5/10/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class SCCaseListItemModel;

NS_ASSUME_NONNULL_BEGIN

@interface SCSCaseFeedEntityModel : NSManagedObject

@property (nullable, nonatomic, retain) NSDate *createdDate;
@property (nullable, nonatomic, retain) SCCaseListItemModel *caseListItem;

@end

NS_ASSUME_NONNULL_END

