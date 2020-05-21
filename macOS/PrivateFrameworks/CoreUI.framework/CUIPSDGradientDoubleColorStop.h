//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIPSDGradientColorStop.h>

#import <CoreUI/NSCoding-Protocol.h>

@interface CUIPSDGradientDoubleColorStop : CUIPSDGradientColorStop <NSCoding>
{
    struct _psdGradientColor leadOutColor;
}

+ (id)doubleColorStopWithLocation:(double)arg1 leadInColor:(struct _psdGradientColor)arg2 leadOutColor:(struct _psdGradientColor)arg3;
+ (void)initialize;
- (id)description;
- (BOOL)isDoubleStop;
- (struct _psdGradientColor)leadOutColor;
- (struct _psdGradientColor)leadInColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocation:(double)arg1 leadInColor:(struct _psdGradientColor)arg2 leadOutColor:(struct _psdGradientColor)arg3;

@end

