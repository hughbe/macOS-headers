//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSProgressIndicator, NSTextField;

@interface EKUITravelTimeSpinnerView : NSView
{
    NSProgressIndicator *_spinner;
    NSTextField *_textfield;
}

- (void).cxx_destruct;
@property(retain) NSTextField *textfield; // @synthesize textfield=_textfield;
@property(retain) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
- (void)dealloc;
- (void)stop;
- (void)animate;
- (id)init;

@end

