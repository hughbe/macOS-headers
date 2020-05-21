//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

@class NSAttributedString, NSImage;

@interface NSCandidateBarCompositeCandidate : NSObject <NSCopying>
{
    NSImage *_image;
    NSAttributedString *_attributedString;
    double _spacing;
    unsigned char _flags;
}

- (BOOL)isEmojiCandidate;
- (BOOL)isSimpleCandidate;
- (BOOL)hasContent;
@property(readonly) double spacing;
- (id)string;
@property(readonly, copy) NSAttributedString *attributedString;
@property(readonly, copy) NSImage *image;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1 attributedString:(id)arg2;
- (id)initWithImage:(id)arg1 attributedString:(id)arg2 spacing:(double)arg3;
- (id)initWithImage:(id)arg1 attributedString:(id)arg2 spacing:(double)arg3 isSimpleCandidate:(BOOL)arg4 isEmojiCandidate:(BOOL)arg5;

@end

