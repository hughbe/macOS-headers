//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoginUIKit/LUIController.h>

@class LUITextField, NSDateFormatter, NSTimer;

@interface LUITimeStatusController : LUIController
{
    LUITextField *_timeTextField;
    NSDateFormatter *_timeFormatter;
    NSTimer *_clockTimer;
    NSTimer *_dstTimer;
}

+ (id)controllerWithStyle:(int)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)tearDownController;
- (void)resumeController;
- (void)pauseController;
- (void)_setupContentView;
- (id)attributedStringFont;
- (void)_timePressed:(id)arg1;
- (id)_userTimeFormat;
- (void)_dstTick:(id)arg1;
- (void)_clockTick:(id)arg1;
- (id)_nextDSTFireDate;

@end

