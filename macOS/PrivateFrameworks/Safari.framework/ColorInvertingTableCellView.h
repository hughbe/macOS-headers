//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface ColorInvertingTableCellView : NSTableCellView
{
    NSMapTable *_textFieldsToDefaultColors;
}

- (void).cxx_destruct;
- (void)_recursivelySetEnclosedTextFieldsToDefaultColor;
- (void)_recursivelySetEnclosedTextFieldsToWhite;
- (void)setBackgroundStyle:(long long)arg1;
- (void)awakeFromNib;

@end

