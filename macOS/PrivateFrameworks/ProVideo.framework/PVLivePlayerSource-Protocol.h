//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProVideo/NSObject-Protocol.h>

@class PVFrameSet;

@protocol PVLivePlayerSource <NSObject>
- (void)setMuted:(BOOL)arg1;
- (CDStruct_1b6d18a9)itemTimeForHostTime:(double)arg1;
- (PVFrameSet *)imageBufferForHostTime:(double)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)pause;
- (void)play;
@end

