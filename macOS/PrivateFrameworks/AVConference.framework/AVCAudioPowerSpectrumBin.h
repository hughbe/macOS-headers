//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/NSSecureCoding-Protocol.h>

@interface AVCAudioPowerSpectrumBin : NSObject <NSSecureCoding>
{
    float _minFrequency;
    float _maxFrequency;
    float _powerLevel;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) float powerLevel; // @synthesize powerLevel=_powerLevel;
@property(readonly, nonatomic) float maxFrequency; // @synthesize maxFrequency=_maxFrequency;
@property(readonly, nonatomic) float minFrequency; // @synthesize minFrequency=_minFrequency;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)assign:(const struct _VCAudioPowerSpectrumEntry *)arg1;

@end

