//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVCaptureControlsRecordingViewController.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface AVFloatingCaptureControlsViewController : AVCaptureControlsRecordingViewController
{
    NSView *_initialFirstResponder;
    CDUnknownBlockType _nextKeyViewSetupBlock;
}

+ (id)keyPathsForValuesAffectingMovableControlsContentView;
- (void).cxx_destruct;
- (id)initialFirstResponder;
- (BOOL)movableControlsContentView;
- (CDStruct_83cd8af5)controlsContentViewMargin;
- (struct CGSize)intrinsicControlsContentViewSize;
- (long long)layoutStyle;
- (id)backgroundBackdropViewMaskImage;
- (id)recordButtonStopImage;
- (id)recordButtonRecordImage;
- (id)recordButtonPauseImage;
- (void)setupNextKeyView;
- (void)loadView;

@end

