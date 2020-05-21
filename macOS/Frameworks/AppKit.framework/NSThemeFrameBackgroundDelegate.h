//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/CALayerDelegate-Protocol.h>

@class NSString, NSThemeFrame;

__attribute__((visibility("hidden")))
@interface NSThemeFrameBackgroundDelegate : NSObject <CALayerDelegate>
{
    NSThemeFrame *_themeFrame;
}

@property NSThemeFrame *themeFrame; // @synthesize themeFrame=_themeFrame;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)displayLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

