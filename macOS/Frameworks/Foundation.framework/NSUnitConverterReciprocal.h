//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUnitConverter.h>

#import <Foundation/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSUnitConverterReciprocal : NSUnitConverter <NSSecureCoding>
{
    double _reciprocalValue;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) double reciprocalValue; // @synthesize reciprocalValue=_reciprocalValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)valueFromBaseUnitValue:(double)arg1;
- (double)baseUnitValueFromValue:(double)arg1;
- (id)initWithReciprocalValue:(double)arg1;

@end

