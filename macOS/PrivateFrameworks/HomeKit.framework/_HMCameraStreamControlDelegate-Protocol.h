//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>

@class NSError, _HMCameraStreamControl;

@protocol _HMCameraStreamControlDelegate <NSObject>
- (void)cameraStreamControl:(_HMCameraStreamControl *)arg1 didStopStream:(NSError *)arg2;
- (void)cameraStreamControlDidStartStream:(_HMCameraStreamControl *)arg1;
@end

