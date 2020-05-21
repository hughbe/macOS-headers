//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HDAInterface/HDAUserClient.h>

@class NSArray;

@interface HDADSPUserClient : HDAUserClient
{
    NSArray *_neverBypassModules;
    NSArray *_alwaysBypassModules;
    NSArray *_calibrationModules;
    NSArray *_compressorModules;
    NSArray *_linearModules;
    NSArray *_nonlinearModules;
}

+ (id)dspUserClientForDeviceType:(unsigned long long)arg1;
+ (id)dspUserClientForSPDIFOut;
+ (id)dspUserClientForSPDIFIn;
+ (id)dspUserClientForLineIn;
+ (id)dspUserClientForLineOut;
+ (id)dspUserClientForHeadphones;
+ (id)dspUserClientForSpeakers;
+ (id)dspUserClientForExternalMicrophone;
+ (id)dspUserClientForInternalMicrophone;
- (void)dealloc;
- (int)UserClientScalarIStructureO:(unsigned int)arg1 scalarICount:(unsigned int)arg2 structOSize:(unsigned long long *)arg3 structO:(void *)arg4 scalarVargs:(void *)arg5;
- (int)UserClientScalarIScalarO:(unsigned int)arg1 scalarICount:(unsigned int)arg2 scalarOCount:(unsigned int)arg3 scalarVargs:(void *)arg4;
- (BOOL)getFunction:(unsigned long long)arg1 coefficients:(void *)arg2 atIndex:(unsigned int)arg3 ofSize:(unsigned long long *)arg4 withError:(id *)arg5;
- (BOOL)getFunction:(unsigned long long)arg1 coefficients:(void *)arg2 ofSize:(unsigned long long *)arg3 withError:(id *)arg4;
- (BOOL)getFunction:(unsigned long long)arg1 numberOfParameter:(unsigned long long *)arg2 withError:(id *)arg3;
- (BOOL)getFunction:(unsigned long long)arg1 parameter:(unsigned long long)arg2 value:(unsigned long long *)arg3 withError:(id *)arg4;
- (BOOL)setFunction:(unsigned long long)arg1 parameter:(unsigned long long)arg2 toValue:(unsigned long long)arg3 withError:(id *)arg4;
- (BOOL)getFunction:(unsigned long long)arg1 name:(char *)arg2 ofSize:(unsigned long long *)arg3 withError:(id *)arg4;
- (BOOL)getNumberOfInstantiatedFunctions:(unsigned long long *)arg1 withError:(id *)arg2;
- (BOOL)getFunction:(unsigned long long)arg1 bypass:(char *)arg2 withError:(id *)arg3;
- (BOOL)setFunction:(unsigned long long)arg1 bypass:(BOOL)arg2 withError:(id *)arg3;
- (BOOL)getOutputMuteForChannel1:(char *)arg1 channel2:(char *)arg2 channel3:(char *)arg3 channel4:(char *)arg4 channel5:(char *)arg5 channel6:(char *)arg6 withError:(id *)arg7;
- (BOOL)setOutputMuteForChannel1:(BOOL)arg1 channel2:(BOOL)arg2 channel3:(BOOL)arg3 channel4:(BOOL)arg4 channel5:(BOOL)arg5 channel6:(BOOL)arg6 withError:(id *)arg7;
- (BOOL)enableDSPBypass:(unsigned long long)arg1 withError:(id *)arg2;
- (BOOL)disableDSPBypass:(unsigned long long)arg1 withError:(id *)arg2;
- (BOOL)restoreFromDSPBypassState:(id)arg1 withError:(id *)arg2;
- (id)currentDSPBypassStateWithError:(id *)arg1;
- (id)initWithService:(unsigned int)arg1 andClientType:(unsigned int)arg2;

@end

