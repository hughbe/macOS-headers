//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@interface _UXSourceSplitViewShadowView : NSView
{
    double _shadowRevealAmount;
    unsigned long long _shadowEdge;
}

@property(nonatomic) unsigned long long shadowEdge; // @synthesize shadowEdge=_shadowEdge;
@property(nonatomic) double shadowRevealAmount; // @synthesize shadowRevealAmount=_shadowRevealAmount;
- (id)makeShadowImage;
- (struct CGSize)intrinsicContentSize;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)hitTest:(struct CGPoint)arg1;

@end

