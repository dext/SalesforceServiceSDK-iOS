//
//  NSFetchRequest+CaseCore.h
//  CaseCore
//
//  Created by Michael Nachbaur on 11/11/15.
//  Copyright © 2015 Salesforce.com. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSFetchRequest (CaseCore)

+ (instancetype)fetchRequestForQuickAction:(NSString *)quickActionName;
+ (instancetype)fetchRequestForCaseListWithId:(NSString *)caseListId;
+ (instancetype)fetchRequestForCaseWithId:(NSString *)caseId;
+ (instancetype)fetchRequestForCaseListWithName:(NSString *)caseListName;
+ (instancetype)fetchRequestForCaseListItemWithId:(NSString *)caseId;

@end
