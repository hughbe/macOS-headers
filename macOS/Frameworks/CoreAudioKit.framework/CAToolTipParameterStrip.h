//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class CAToolTipEditTextField;

@interface CAToolTipParameterStrip : NSView
{
    CAToolTipEditTextField *labelField;
    CAToolTipEditTextField *valueField;
    unsigned int parameter;
}

@property(readonly) unsigned int parameter; // @synthesize parameter;
@property(readonly) float value;
@property float labelWidth;
- (void)setLabel:(id)arg1;
- (void)setValue:(float)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 parameter:(unsigned int)arg2 label:(id)arg3 minValue:(float)arg4 maxValue:(float)arg5 unitLabel:(id)arg6 editable:(BOOL)arg7;
- (id)initWithFrame:(struct CGRect)arg1 parameter:(unsigned int)arg2 label:(id)arg3 minValue:(float)arg4 maxValue:(float)arg5 unitLabel:(id)arg6;
- (void)createLabel:(id)arg1;

@end

