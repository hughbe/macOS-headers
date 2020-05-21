//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSToolbarItem.h>

@interface NSToolbarSeparatorItem : NSToolbarItem
{
    id _separatorItemReserved;
}

+ (id)itemIdentifier;
- (BOOL)allowsDuplicatesInToolbar;
- (id)view;
- (BOOL)_participatesInDefiningMinimumGridWidthForCustomizationPalette;
- (BOOL)isSeparatorItem;
- (id)init;
- (id)initWithItemIdentifier:(id)arg1;
- (void)_separatorFinishInit;
- (BOOL)wantsToDrawIconIntoLabelAreaInDisplayMode:(unsigned long long)arg1;
- (BOOL)wantsToDrawLabelInDisplayMode:(unsigned long long)arg1;
- (BOOL)wantsToDrawIconInDisplayMode:(unsigned long long)arg1;
- (void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2;
- (struct CGSize)maxSize;
- (struct CGSize)minSize;

@end

