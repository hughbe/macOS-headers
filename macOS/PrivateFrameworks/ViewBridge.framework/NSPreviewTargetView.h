//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSPreviewTargetViewController;

__attribute__((visibility("hidden")))
@interface NSPreviewTargetView : NSView
{
    struct os_unfair_lock_s _retainReleaseLock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly) NSPreviewTargetViewController *previewTargetViewController;
- (oneway void)release;
- (void)__vbSuperRelease;
- (id)retain;
- (void)__vbWithLockPerform:(CDUnknownBlockType)arg1;
- (struct os_unfair_lock_s *)retainReleaseLock;

@end

