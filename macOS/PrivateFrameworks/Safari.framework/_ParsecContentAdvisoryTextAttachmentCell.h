//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextAttachmentCell.h>

@class NSColor, NSString;

__attribute__((visibility("hidden")))
@interface _ParsecContentAdvisoryTextAttachmentCell : NSTextAttachmentCell
{
    NSString *_contentAdvisoryString;
    NSColor *_color;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSColor *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSString *contentAdvisoryString; // @synthesize contentAdvisoryString=_contentAdvisoryString;
- (id)_labelAttributes;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSize;
- (id)initWithString:(id)arg1 color:(id)arg2;

@end

