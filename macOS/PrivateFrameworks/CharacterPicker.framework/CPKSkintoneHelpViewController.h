//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface CPKSkintoneHelpViewController : NSViewController
{
    NSView *_imageEnclosingView;
    NSView *_imageForEmojiSkinTones;
    NSView *_imageForCouplesSkinTones;
    CDUnknownBlockType _completionBlock;
    BOOL _hasCompletionBlockCalled;
}

- (void)viewDidDisappear;
- (void)_doConfirm:(id)arg1;
- (void)dealloc;
- (id)initForEmoji:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end

