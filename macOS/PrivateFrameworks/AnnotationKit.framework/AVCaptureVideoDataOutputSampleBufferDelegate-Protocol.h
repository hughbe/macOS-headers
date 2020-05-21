//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/NSObject-Protocol.h>

@class AVCaptureConnection, AVCaptureOutput;

@protocol AVCaptureVideoDataOutputSampleBufferDelegate <NSObject>

@optional
- (void)captureOutput:(AVCaptureOutput *)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(AVCaptureConnection *)arg3;
- (void)captureOutput:(AVCaptureOutput *)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(AVCaptureConnection *)arg3;
@end

