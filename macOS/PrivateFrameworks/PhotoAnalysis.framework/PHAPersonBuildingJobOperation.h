//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSProgress, PHAVisionServiceFaceProcessingWorker, PVCanceler;
@protocol PHAPersonBuildingJobOperationDelegate;

@interface PHAPersonBuildingJobOperation : NSOperation
{
    id <PHAPersonBuildingJobOperationDelegate> _delegate;
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    PVCanceler *_canceler;
    NSProgress *_progress;
    float _percentComplete;
}

- (void).cxx_destruct;
- (float)percentComplete;
- (void)cancel;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithFaceProcessingWorker:(id)arg1;

@end

