//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSColor;

__attribute__((visibility("hidden")))
@interface TintedImageButtonCell : NSButtonCell
{
    NSColor *_tintColor;
    double _imageAlpha;
}

- (void).cxx_destruct;
@property(nonatomic) double imageAlpha; // @synthesize imageAlpha=_imageAlpha;
@property(retain, nonatomic) NSColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

