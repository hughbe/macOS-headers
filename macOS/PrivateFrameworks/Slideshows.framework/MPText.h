//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Slideshows/NSCoding-Protocol.h>
#import <Slideshows/NSCopying-Protocol.h>

@class MCText, MPTextInternal;
@protocol MPEffectSupport;

@interface MPText : NSObject <NSCoding, NSCopying>
{
    MCText *_text;
    MPTextInternal *_internal;
    NSObject<MPEffectSupport> *_parent;
}

+ (id)textWithAttributedString:(id)arg1;
- (double)textAreaAspectRatio;
- (double)displayDuration;
- (double)displayStartTime;
- (double)displayTime;
- (long long)index;
- (id)subtitleSlide;
- (id)parentEffect;
- (void)setAttributedString:(id)arg1;
- (id)attributedString;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithAttributedString:(id)arg1;
- (void)setPlainString:(id)arg1;
- (id)plainString;
- (BOOL)isOriginal;
- (double)maxFontSize;
- (id)defaultString;
- (id)fullDebugLog;
- (void)dump;
- (id)text;
- (void)checkForMaxFontSize;
- (void)checkForPlacesLabel;
- (void)setParent:(id)arg1;
- (void)setText:(id)arg1;
- (id)nearestPlug;
- (void)copyStruct:(id)arg1;
- (id)action;

@end

