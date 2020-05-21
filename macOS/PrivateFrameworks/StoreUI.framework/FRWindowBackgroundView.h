//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSImage, NSString;

@interface FRWindowBackgroundView : NSView
{
    long long _backgroundStyle;
    NSColor *_backgroundColor;
    NSImage *_icon;
    NSString *_title;
    NSString *_subtitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (void)_drawEtchedString:(id)arg1 inRect:(struct CGRect)arg2 withAttributes:(id)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;

@end

