//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Spotlight/PRSCalculatorResult.h>

#import <Spotlight/NSCoding-Protocol.h>
#import <Spotlight/NSSecureCoding-Protocol.h>

@class MISSING_TYPE, NSArray, NSNumber, NSString;

@interface PRSConversionResult : PRSCalculatorResult <NSCoding, NSSecureCoding>
{
    NSString *_inputUnit;
    NSNumber *_inputValue;
    NSString *_localizedInputValueAndUnit;
    NSString *_conversionType;
    NSArray *_conversions;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSArray *conversions; // @synthesize conversions=_conversions;
@property(readonly) NSString *conversionType; // @synthesize conversionType=_conversionType;
@property(readonly) NSString *localizedInputValueAndUnit; // @synthesize localizedInputValueAndUnit=_localizedInputValueAndUnit;
@property(readonly) NSNumber *inputValue; // @synthesize inputValue=_inputValue;
@property(readonly) NSString *inputUnit; // @synthesize inputUnit=_inputUnit;
- (MISSING_TYPE *)rank;
- (MISSING_TYPE *)score;
- (BOOL)shouldNotBeTopHit;
- (BOOL)isConversion;
- (id)initWithConverter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

