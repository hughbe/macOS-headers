//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface NSTouchBarEscapeKeyView : NSView
{
    NSView *_itemView;
    struct CGSize _preferredSize;
    BOOL _isSystemCloseButton;
}

@property BOOL isSystemCloseButton; // @synthesize isSystemCloseButton=_isSystemCloseButton;
@property(readonly) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
- (void)dealloc;
- (void)_subview:(id)arg1 valueOfVariable:(id)arg2 didChangeInEngine:(id)arg3;
@property(retain) NSView *itemView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

