//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSAnimation.h>

__attribute__((visibility("hidden")))
@interface Animation : NSAnimation
{
    CDUnknownBlockType _progressHandler;
}

- (void).cxx_destruct;
- (void)setCurrentProgress:(float)arg1;
- (id)initWithDuration:(double)arg1 animationCurve:(unsigned long long)arg2 progressHandler:(CDUnknownBlockType)arg3;

@end

