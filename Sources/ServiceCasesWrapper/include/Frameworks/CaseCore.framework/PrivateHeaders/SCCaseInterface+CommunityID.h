//
//  SFUserAccount+CaseCore.h
//  CaseCore
//
//  Created by Michael Nachbaur on 4/8/16.
//  Copyright © 2016 Salesforce.com. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

@interface SCCaseInterface (CommunityID)

- (NSString *)communityIdForURL:(NSURL*)communityURL;
- (void)communityIdForURL:(NSURL*)communityURL completion:(void(^)(NSString * __nullable communityId, NSError * __nullable error))completion;

@end

NS_ASSUME_NONNULL_END
