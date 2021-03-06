//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSTextField;

@interface AMDescriptionLineItemView : NSView
{
    NSTextField *_label;
    NSTextField *_value;
}

+ (double)maxLabelWidth;
+ (id)labelsForKeys;
+ (id)valueFont;
+ (id)labelFont;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTextField *value; // @synthesize value=_value;
@property(retain, nonatomic) NSTextField *label; // @synthesize label=_label;
- (void)dealloc;
- (void)setValueString:(id)arg1;
- (void)setLabelKey:(id)arg1;
- (void)openURL:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

