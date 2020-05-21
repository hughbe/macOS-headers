//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Spotlight/PRSConversionResult.h>

#import <Spotlight/NSCoding-Protocol.h>
#import <Spotlight/NSSecureCoding-Protocol.h>

@class NSDate;

@interface PRSCurrencyConversionResult : PRSConversionResult <NSCoding, NSSecureCoding>
{
    NSDate *_lastUpdated;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
- (id)initWithConverter:(id)arg1;
- (BOOL)isCurrency;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

