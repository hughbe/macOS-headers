//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class CALayer, NSWindow;

@protocol NSViewLayerContentScaleDelegate <NSObject>

@optional
- (BOOL)layer:(CALayer *)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(NSWindow *)arg3;
@end

