//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSTextLocation;

@interface NSTextRange : NSObject
{
    id <NSTextLocation> _location;
    id <NSTextLocation> _terminator;
}

@property(readonly) id <NSTextLocation> terminator; // @synthesize terminator=_terminator;
@property(readonly) id <NSTextLocation> location; // @synthesize location=_location;
- (id)endLocation;
- (id)startLocation;
- (id)initWithStartLocation:(id)arg1 endLocation:(id)arg2;
- (id)textRangeByFormingUnionWithTextRange:(id)arg1;
- (id)textRangeByIntersectingWithTextRange:(id)arg1;
- (BOOL)intersectsWithTextRange:(id)arg1;
- (BOOL)containsLocation:(id)arg1;
- (BOOL)isEqualToTextRange:(id)arg1;
@property(readonly, getter=isEmpty) BOOL empty;
- (void)dealloc;
- (id)initWithLocation:(id)arg1;
- (id)initWithLocation:(id)arg1 terminator:(id)arg2;

@end

