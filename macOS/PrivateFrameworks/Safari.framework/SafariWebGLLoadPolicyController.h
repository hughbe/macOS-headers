//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, WBSPerSitePreference;

__attribute__((visibility("hidden")))
@interface SafariWebGLLoadPolicyController : NSObject
{
    NSMutableDictionary *_policies;
    NSMapTable *_browserViewControllerToPageHost;
    BOOL _changingPoliciesPerSitePreventedByAdmin;
    int _userDefaultWebGLLoadPolicy;
    NSMutableDictionary *_domainsToHosts;
    BOOL _firstVisitPolicyIsManagedByAdmin;
    int _defaultWebGLPolicy;
    WBSPerSitePreference *_webGLPreference;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(readonly, nonatomic) WBSPerSitePreference *webGLPreference; // @synthesize webGLPreference=_webGLPreference;
@property(nonatomic) BOOL firstVisitPolicyIsManagedByAdmin; // @synthesize firstVisitPolicyIsManagedByAdmin=_firstVisitPolicyIsManagedByAdmin;
@property(nonatomic) int defaultWebGLPolicy; // @synthesize defaultWebGLPolicy=_defaultWebGLPolicy;
- (id)_hostForDomain:(id)arg1;
- (id)_domainFromHost:(id)arg1;
- (void)clearWebGLPoliciesAddedAfterDate:(id)arg1;
- (void)clearWebGLPolicies;
- (void)saveWebGLLoadPoliciesToUserDefaults;
- (void)_loadPoliciesFromUserDefaults:(BOOL)arg1;
- (void)reloadWebGLLoadPoliciesIfNeeded;
@property(readonly, nonatomic) int hardwareSecurityLevel;
- (void)resetWebGLLoadPolicies;
- (BOOL)_openPageIsUsingPolicyForHost:(id)arg1;
- (void)browserViewController:(id)arg1 didLeavePageRunningWebGLWithHost:(id)arg2;
- (void)browserViewController:(id)arg1 didOpenPageRunningWebGLWithHost:(id)arg2;
- (void)removeWebGLLoadPoliciesForHosts:(id)arg1;
- (void)removeWebGLLoadPolicyForHost:(id)arg1;
- (void)setWebGLLoadPolicy:(int)arg1 forHost:(id)arg2 saveToUserDefaults:(BOOL)arg3;
- (long long)webGLLoadPolicyForHost:(id)arg1;
- (BOOL)showWebGLLoadPolicyDialogForURL:(id)arg1 inBrowserViewController:(id)arg2;
- (BOOL)_isSuppressingDialog:(id)arg1;
- (id)policyEntryForHost:(id)arg1;
- (id)sortedPolicies;
- (long long)_managedPolicyToWebGLLoadPolicy:(int)arg1;
- (id)init;

@end

