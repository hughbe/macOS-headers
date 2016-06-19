//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSAnimation.h>

__attribute__((visibility("hidden")))
@interface _NSDisplayFadeAndCaptureAnimation : NSAnimation
{
    BOOL fadeOut;
    unsigned long long displayCount;
    unsigned int *displays;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
        float _field7;
        float _field8;
        float _field9;
    } *gammas;
    CDUnknownBlockType completionHandler;
}

@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
@property BOOL fadeOut; // @synthesize fadeOut;
- (void)_stopAnimation:(int)arg1 withDisplayLink:(id)arg2;
- (void)setCurrentProgress:(float)arg1;
- (void)startAnimation;
- (void)dealloc;
- (id)init;

@end

