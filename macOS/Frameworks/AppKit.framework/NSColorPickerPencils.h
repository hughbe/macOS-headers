//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSColorPicker.h>

#import <AppKit/NSColorPickingCustom-Protocol.h>

@class NSColorPickerPencilView, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface NSColorPickerPencils : NSColorPicker <NSColorPickingCustom>
{
    id _colorNameTextField;
    id _pencilView;
    id _containerView;
}

@property(retain) NSColorPickerPencilView *pencilView; // @synthesize pencilView=_pencilView;
@property(retain) NSView *containerView; // @synthesize containerView=_containerView;
@property(retain) NSTextField *colorNameTextField; // @synthesize colorNameTextField=_colorNameTextField;
- (void)setColor:(id)arg1;
- (id)buttonToolTip;
- (struct CGSize)minContentSize;
- (double)_insertionOrder;
- (id)provideNewView:(BOOL)arg1;
- (long long)currentMode;
- (BOOL)supportsMode:(long long)arg1;
- (void)changeDisplayedColorName:(id)arg1;
- (void)changeColor:(id)arg1;
- (id)provideNewButtonImage;
- (void)dealloc;
- (id)initWithPickerMask:(unsigned long long)arg1 colorPanel:(id)arg2;

@end

