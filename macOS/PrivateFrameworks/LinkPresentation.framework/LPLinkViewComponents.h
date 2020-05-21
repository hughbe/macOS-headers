//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPCaptionBarView, LPComponentView, LPTextView, NSView;

__attribute__((visibility("hidden")))
@interface LPLinkViewComponents : NSObject
{
    LPCaptionBarView *_captionBar;
    LPComponentView *_media;
    NSView *_mediaBackground;
    LPCaptionBarView *_mediaTopCaptionBar;
    LPCaptionBarView *_mediaBottomCaptionBar;
    LPTextView *_quote;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LPTextView *quote; // @synthesize quote=_quote;
@property(retain, nonatomic) LPCaptionBarView *mediaBottomCaptionBar; // @synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar;
@property(retain, nonatomic) LPCaptionBarView *mediaTopCaptionBar; // @synthesize mediaTopCaptionBar=_mediaTopCaptionBar;
@property(retain, nonatomic) NSView *mediaBackground; // @synthesize mediaBackground=_mediaBackground;
@property(retain, nonatomic) LPComponentView *media; // @synthesize media=_media;
@property(retain, nonatomic) LPCaptionBarView *captionBar; // @synthesize captionBar=_captionBar;

@end

