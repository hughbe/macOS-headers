//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PASampling/NSObject-Protocol.h>

@protocol PASampleFrameIterator <NSObject>
- (void)exposeAllFrames;
- (void)exposeKernelFramesOnly;
- (void)exposeUserFramesOnly;
- (void)iterateFrames:(void (^)(PASampleFrame *))arg1;
@end

