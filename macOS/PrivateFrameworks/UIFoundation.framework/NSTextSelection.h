//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;
@protocol NSTextLocation;

@interface NSTextSelection : NSObject <NSSecureCoding>
{
    BOOL _transient;
    BOOL _logical;
    NSArray *_textRanges;
    long long _granularity;
    long long _affinity;
    double _anchorPoint;
    id <NSTextLocation> _secondarySelectionLocation;
    NSDictionary *_typingAttributes;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSDictionary *typingAttributes; // @synthesize typingAttributes=_typingAttributes;
@property(retain) id <NSTextLocation> secondarySelectionLocation; // @synthesize secondarySelectionLocation=_secondarySelectionLocation;
@property(getter=isLogical) BOOL logical; // @synthesize logical=_logical;
@property double anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(readonly, getter=isTransient) BOOL transient; // @synthesize transient=_transient;
@property(readonly) long long affinity; // @synthesize affinity=_affinity;
@property(readonly) long long granularity; // @synthesize granularity=_granularity;
@property(readonly, copy) NSArray *textRanges; // @synthesize textRanges=_textRanges;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithLocation:(id)arg1 affinity:(long long)arg2;
- (id)initWithRange:(id)arg1 affinity:(long long)arg2 granularity:(long long)arg3;
- (id)initWithRanges:(id)arg1 affinity:(long long)arg2 granularity:(long long)arg3;

@end

