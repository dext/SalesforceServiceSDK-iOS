//
//  CHConnectAction.h
//  ChatterSDK
//
//  Created by Michael Nachbaur on 5/7/12.
//  Copyright (c) 2012 Salesforce.com. All rights reserved.
//

@import SalesforceCore.SalesforceNetwork;

#import "SCCaseChatterDefines.h"

/** This class provides a common base for all network actions that can be performed against
 the Chatter Connect API.  All actions that communicate with Connect are subclasses of this one.
 */
@interface SCCaseChatterAction : SFCSalesforceAction

/** The URI path for the Chatter Connect resource being accessed.
 
 This value, combined with the communityId property, is used to formulate the
 verb for this request.  Because the verb is derived from the version
 of Chatter Connect (in this case managed by the `kCHConnectVersion` constant) and
 an optional communitId, the verb is a derived property from these two values.
 
 @see communityId
 @see [CHActionExecuter defaultConnectCommunityId]
 */
@property (nonatomic, copy, readonly) NSString *actionResource;

/** The ID representing the community the request should be made against.
 
 Not all requests are performed against a Chatter Community, nor are all organizations
 configured to support communities.  If this value is `nil` then communities will not
 be taken into consideration, and network requests will only take the actionResource
 into account.
 
 If this value is not `nil`, or if the `[CHActionExecuter defaultConnectCommunityId]`
 property is not `nil`, then the request will be made against the indicated community.
 
 @see actionResource
 @see [CHActionExecuter defaultConnectCommunityId]
 */
@property (nonatomic, copy) NSString *communityId;

/** Indicates how this action is allowed to interact with communities.

 The value here controls how this action interacts within communities, and whether or not
 the command is scoped within a community.

   * CHConnectCommunityOptional -- The action works with or without a community set
   * CHConnectCommunityRequired -- This action requires a community to operate
   * CHConnectCommunityDisallowed -- This action cannot be used with a community
 */
@property (nonatomic, readonly) SFCChatterCommunityMode communityMode;

@property (nonatomic) SCCaseChatterFilterGroup filterGroup;

/** The list of attributes to be excluded from the connect response.
 
 The connect response may have many attributes that are not required. If such attributes are
 known in advance, they can be safely passed on to connect so that they are not included as part 
 of the connect response. In some cases this can significanly improve performance.
 */
@property (nonatomic, strong, readonly) NSSet *excludeParameters;

- (void)addExcludeParameter:(NSString*)keyPath;
- (void)addExcludeParameters:(NSSet *)keyPaths;
- (void)removeExcludeParameter:(NSString*)keyPath;
- (void)removeExcludeParameters:(NSSet *)keyPaths;

/** the only attributes to be included in the connect response.
 
 Similar to exclude parameters. However, in this case, only the parameters that are included are
 returned as part of the connect response. hence this endpoint should be carefully used.
 */
@property (nonatomic, strong, readonly) NSSet *includeParameters;

- (void)addIncludeParameter:(NSString*)keyPath;
- (void)addIncludeParameters:(NSSet *)keyPaths;
- (void)removeIncludeParameter:(NSString*)keyPath;
- (void)removeIncludeParameters:(NSSet *)keyPaths;

@property (nonatomic, readonly, getter = canSupportCommunities) BOOL supportsCommunities;

@end
