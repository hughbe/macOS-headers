//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSColor, NSColorPickerMatrixView;

@protocol NSColorPickerMatrixViewDelegate <NSObject>

@optional
- (NSColor *)matrixColorPicker:(NSColorPickerMatrixView *)arg1 highlightColorForColor:(NSColor *)arg2;
- (void)matrixColorPicker:(NSColorPickerMatrixView *)arg1 selectedColor:(NSColor *)arg2;
@end

