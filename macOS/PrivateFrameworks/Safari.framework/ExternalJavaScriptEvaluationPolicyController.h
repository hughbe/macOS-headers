//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ExternalJavaScriptEvaluationPolicyController : NSObject
{
}

- (BOOL)_canToggleSecurePreferenceWithName:(id)arg1 backedByAuthorizationRight:(int)arg2;
- (void)_toggleSecurePreferenceWithName:(id)arg1 backedByAuthorizationRight:(int)arg2;
- (void)toggleAllowJavaScriptFromAppleEvents;
- (BOOL)javaScriptIsAllowedFromAppleEvents;
- (void)toggleAllowJavaScriptInSmartSearchField;
- (BOOL)javaScriptIsAllowedInSmartSearchField;

@end

