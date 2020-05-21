//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNView.h>

@class NSOpenGLContext, SCNPlane;

__attribute__((visibility("hidden")))
@interface SCNRenderTargetView : SCNView
{
    struct __C3DTexture *_texture;
    int _filterChannel;
    SCNPlane *_plane;
    NSOpenGLContext *_sourceContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOpenGLContext *sourceContext; // @synthesize sourceContext=_sourceContext;
- (void)setFilterChannel:(id)arg1;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3;
- (void)dealloc;
- (void)setTexture:(struct __C3DTexture *)arg1;
- (void)awakeFromNib;

@end

