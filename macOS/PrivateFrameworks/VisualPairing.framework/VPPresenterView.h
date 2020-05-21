//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class AVPlayer, CALayer, NSArray, NSObject, NSString;
@protocol OS_dispatch_source;

@interface VPPresenterView : NSView
{
    AVPlayer *_moviePlayer;
    BOOL _started;
    CALayer *_watermarkLayer;
    NSArray *_watermarkPixelBuffers;
    unsigned long long _watermarkStepIndex;
    NSObject<OS_dispatch_source> *_watermarkStepTimer;
    NSString *_verificationCode;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *verificationCode; // @synthesize verificationCode=_verificationCode;
- (void)_watermarkStep;
- (void)stop;
- (void)start;
- (void)viewDidEndLiveResize;
- (void)layout;

@end

