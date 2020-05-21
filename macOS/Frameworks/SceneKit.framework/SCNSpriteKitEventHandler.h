//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SKScene;

__attribute__((visibility("hidden")))
@interface SCNSpriteKitEventHandler : NSObject
{
    SKScene *_scene;
    NSMutableDictionary *_touchMap;
    BOOL _mouseIsDown;
    BOOL _rightMouseIsDown;
}

@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (BOOL)acceptsFirstResponder;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)rightMouseUp:(id)arg1;
- (BOOL)mouseUp:(id)arg1;
- (BOOL)rightMouseDragged:(id)arg1;
- (BOOL)mouseDragged:(id)arg1;
- (BOOL)mouseMoved:(id)arg1;
- (BOOL)rightMouseDown:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)dealloc;
- (id)init;

@end

