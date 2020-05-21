//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNUIEditingPolicy : NSObject
{
}

+ (id)guardianPolicy;
+ (id)defaultPolicy;
- (id)evaluateWithContact:(id)arg1 container:(id)arg2;
- (void)executeActionWhileIgnoringGuardianRestrictions:(CDUnknownBlockType)arg1;
- (BOOL)shouldBypassRestrictionsWhenSavingContact:(id)arg1 inContainer:(id)arg2 givenAuhtorizationResult:(long long)arg3;
- (BOOL)shouldIgnoreGuardianRestrictions;
- (BOOL)shouldPromptForAuthoriationWhenDeletingContact:(id)arg1 fromContainer:(id)arg2;
- (BOOL)shouldPromptForAuthoriationWhenUpdatingContact:(id)arg1 inContainer:(id)arg2;
- (BOOL)shouldPromptForAuthorizationWhenInsertingNewContactToContainer:(id)arg1;
- (BOOL)shouldSignalSharedAccessToContact:(id)arg1 inContainer:(id)arg2;

@end

