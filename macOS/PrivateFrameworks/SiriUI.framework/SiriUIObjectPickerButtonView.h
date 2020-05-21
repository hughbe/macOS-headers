//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, SiriUIKeyline;

@interface SiriUIObjectPickerButtonView : NSView
{
    SiriUIKeyline *_topKeyline;
    SiriUIKeyline *_bottomKeyline;
    BOOL _showsTopKeyline;
    NSButton *_button;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(nonatomic) BOOL showsTopKeyline; // @synthesize showsTopKeyline=_showsTopKeyline;
@property(readonly, nonatomic) NSButton *button; // @synthesize button=_button;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

