//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSColor, NSTableViewRowAction, NSTextField;

__attribute__((visibility("hidden")))
@interface NSTableViewActionButton : NSButton
{
    NSColor *_backgroundColor;
    NSTableViewRowAction *_rowAction;
    struct CGSize _requiredSize;
    NSTextField *_label;
}

+ (Class)cellClass;
@property struct CGSize requiredSize; // @synthesize requiredSize=_requiredSize;
@property(retain) NSTableViewRowAction *rowAction; // @synthesize rowAction=_rowAction;
@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)setTitle:(id)arg1;
- (void)_layoutTitle;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)allowsVibrancy;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)layout;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

