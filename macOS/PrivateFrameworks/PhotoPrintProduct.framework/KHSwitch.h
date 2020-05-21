//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXView.h>

@class NSButton, NSColor, NSString;

@interface KHSwitch : UXView
{
    NSButton *_button;
    id _target;
    SEL _action;
    NSColor *_titleColor;
    NSColor *_thumbTintColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
@property(retain, nonatomic) NSColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(nonatomic, getter=isOn) BOOL on;
@property(copy, nonatomic) NSString *title;
- (void)stateChanged:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

