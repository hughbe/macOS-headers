//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNRenderer.h>

@interface SCNOffscreenRenderer : SCNRenderer
{
}

+ (id)offscreenRendererWithDevice:(id)arg1 size:(struct CGSize)arg2;
+ (id)offscreenRendererWithContext:(struct _CGLContextObject *)arg1 size:(struct CGSize)arg2;
@property(nonatomic) unsigned long long antialiasingMode;
@property(nonatomic) struct CGSize size;
@property(readonly, nonatomic) unsigned int textureID;
- (id)snapshot;

@end

