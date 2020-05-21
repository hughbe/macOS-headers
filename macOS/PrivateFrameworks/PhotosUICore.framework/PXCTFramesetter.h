//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSShadow;

@interface PXCTFramesetter : NSObject
{
    BOOL _prepared;
    NSAttributedString *_attributedString;
    struct CGContext *_context;
    const struct __CTFramesetter *_framesetter;
    NSShadow *_shadow;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(readonly, nonatomic) const struct __CTFramesetter *framesetter; // @synthesize framesetter=_framesetter;
@property(readonly, nonatomic) struct CGContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void)prepare;
- (id)frameWithRect:(struct CGRect)arg1 maximumLineCount:(unsigned long long)arg2 allowTruncation:(BOOL)arg3;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 context:(struct CGContext *)arg2;
- (id)init;

@end

