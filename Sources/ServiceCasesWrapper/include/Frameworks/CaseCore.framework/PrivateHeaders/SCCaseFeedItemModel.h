//
//  SCCaseFeedItemModel.h
//  
//
//  Created by Amisha Goyal on 1/12/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceOffline;

#import "SCSCaseFeedEntityModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SCCaseFeedItemModel : SCSCaseFeedEntityModel <SFCConcreteEntity>

@property (nullable, nonatomic, retain) NSString *bodyText;
@property (nullable, nonatomic, retain) NSString *companyName;
@property (nullable, nonatomic, retain) NSString *displayName;
@property (nullable, nonatomic, retain) NSString *feedElementId;
@property (nullable, nonatomic, retain) NSString *firstName;
@property (nullable, nonatomic, retain) NSString *lastName;
@property (nullable, nonatomic, retain) NSString *photoUrl;
@property (nullable, nonatomic, retain) NSString *title;
@property (nullable, nonatomic, retain) NSString *url;
@property (nullable, nonatomic, retain) NSString *userId;
@property (nonatomic) BOOL groupedWithPrevious;

@end

NS_ASSUME_NONNULL_END

