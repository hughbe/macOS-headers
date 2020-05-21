//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ProviderConfiguration : NSObject
{
    NSDictionary *_configuration;
    BOOL _providerOff;
    BOOL _socialEngineeringThreatTypeOff;
    BOOL _malwareThreatTypeOff;
    BOOL _unwantedSoftwareThreatTypeOff;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL unwantedSoftwareThreatTypeOff; // @synthesize unwantedSoftwareThreatTypeOff=_unwantedSoftwareThreatTypeOff;
@property(readonly, nonatomic) BOOL malwareThreatTypeOff; // @synthesize malwareThreatTypeOff=_malwareThreatTypeOff;
@property(readonly, nonatomic) BOOL socialEngineeringThreatTypeOff; // @synthesize socialEngineeringThreatTypeOff=_socialEngineeringThreatTypeOff;
@property(nonatomic) BOOL providerOff; // @synthesize providerOff=_providerOff;
- (BOOL)isEqualToConfiguration:(id)arg1;
- (void)_parseConfiguration:(id)arg1;
- (id)_currentRegionCode;
- (void)_configureToBeOff;
- (void)_configureToUseDefaultValues;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

