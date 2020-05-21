//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FinderKit/NSGestureRecognizerDelegatePrivate-Protocol.h>
#import <FinderKit/NSImmediateActionAnimationController-Protocol.h>
#import <FinderKit/NSImmediateActionGestureRecognizerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TBrowserImmediateActionGestureRecognizerDelegate : NSObject <NSGestureRecognizerDelegatePrivate, NSImmediateActionGestureRecognizerDelegate, NSImmediateActionAnimationController>
{
    unique_ptr_8828cb85 _handler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)immediateActionRecognizerDidCompleteAnimation:(id)arg1;
- (void)immediateActionRecognizerDidCancelAnimation:(id)arg1;
- (void)immediateActionRecognizerWillBeginAnimation:(id)arg1;
- (void)immediateActionRecognizerWillPrepare:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2;
- (void)setHandler:(unique_ptr_8828cb85 *)arg1;
- (const unique_ptr_8828cb85 *)handler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

