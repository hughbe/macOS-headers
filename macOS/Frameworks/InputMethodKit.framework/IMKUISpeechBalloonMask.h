//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InputMethodKit/IMKUIPanelMask.h>

@class NSImage;

@interface IMKUISpeechBalloonMask : IMKUIPanelMask
{
    unsigned long long _arrowDirection;
    double _arrowOffset;
    NSImage *_arrowImage;
    struct CGRect _contentFrame;
    struct CGRect _arrowFrame;
}

+ (id)downwardsPointingArrow;
- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(nonatomic) struct CGRect arrowFrame; // @synthesize arrowFrame=_arrowFrame;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (void)drawInRect:(struct CGRect)arg1;
- (struct NSEdgeInsets)edgeInsets;
- (void)calculateFramesWithContentSize:(struct CGSize)arg1;
- (void)drawArrowFlipped:(id)arg1 withSize:(struct CGSize)arg2 degrees:(double)arg3;
- (void)drawArrowUpsideDown:(id)arg1 withSize:(struct CGSize)arg2;
- (id)initWithContentSize:(struct CGSize)arg1 direction:(unsigned long long)arg2 offset:(double)arg3;

@end

