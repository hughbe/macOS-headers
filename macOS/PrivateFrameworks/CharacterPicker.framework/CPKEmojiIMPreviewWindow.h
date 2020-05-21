//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class CPKEmojiPreviewView, NSString;

__attribute__((visibility("hidden")))
@interface CPKEmojiIMPreviewWindow : NSPanel
{
    NSString *_emojiString;
    CPKEmojiPreviewView *_previewView;
}

@property CPKEmojiPreviewView *previewView; // @synthesize previewView=_previewView;
@property(copy) NSString *emojiString; // @synthesize emojiString=_emojiString;
- (void)showAtScreenLocation:(struct CGPoint)arg1;
- (void)showAtInsertionPoint;
- (void)dealloc;
- (id)init;

@end

