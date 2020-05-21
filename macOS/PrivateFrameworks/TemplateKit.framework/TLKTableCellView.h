//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import <TemplateKit/TLKCustomEdgeInsets-Protocol.h>

@class NSView;

@interface TLKTableCellView : NSTableCellView <TLKCustomEdgeInsets>
{
    NSView *_contentView;
    struct NSEdgeInsets _customEdgeInsets;
}

+ (double)separatorHeightForWindow:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct NSEdgeInsets customEdgeInsets; // @synthesize customEdgeInsets=_customEdgeInsets;
- (void)layout;
- (struct CGSize)intrinsicContentSize;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (id)initWithContentView:(id)arg1;

@end

