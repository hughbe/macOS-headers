//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FinderKit/CAAnimationDelegate-Protocol.h>

@class NSString, NSView;
@protocol CAAnimationDelegate;

__attribute__((visibility("hidden")))
@interface FI_TViewAnimationHelper : NSObject <CAAnimationDelegate>
{
    struct TNSRef<NSView, void> _view;
    struct TNSWeakPtr<NSObject<CAAnimationDelegate>, void> _weakDelegate;
    _Bool _origWantsLayers;
}

+ (id)animationHelperWithView:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (void)setView:(id)arg1;
@property(readonly, retain) NSView *view; // @dynamic view;
- (void)configureAnimations:(_Bool)arg1;
@property __weak NSObject<CAAnimationDelegate> *delegate; // @dynamic delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

