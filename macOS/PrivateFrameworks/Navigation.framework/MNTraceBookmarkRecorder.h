//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNTrace;

@interface MNTraceBookmarkRecorder : NSObject
{
    MNTrace *_trace;
}

- (void).cxx_destruct;
- (void)recordBookmarkAtTime:(double)arg1 withScreenshotData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithTrace:(id)arg1;

@end

