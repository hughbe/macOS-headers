//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@interface SKOpenGLNode : SKNode
{
}

+ (id)openGLNodeWithViewportSize:(struct CGSize)arg1;
- (void)renderForTime:(double)arg1;
- (void)_renderForTime:(double)arg1;
- (BOOL)needsRenderForTime:(double)arg1;
@property struct CGSize viewportSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewportSize:(struct CGSize)arg1;
- (id)init;

@end

