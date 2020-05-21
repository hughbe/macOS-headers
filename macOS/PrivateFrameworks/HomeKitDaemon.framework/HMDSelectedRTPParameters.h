//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface HMDSelectedRTPParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    NSNumber *_payloadType;
    NSNumber *_synchronizationSource;
    NSNumber *_maximumBitrate;
    NSNumber *_minimumBitrate;
    NSNumber *_rtcpInterval;
    NSNumber *_maxMTU;
    NSNumber *_comfortNoisePayloadType;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *comfortNoisePayloadType; // @synthesize comfortNoisePayloadType=_comfortNoisePayloadType;
@property(copy, nonatomic) NSNumber *maxMTU; // @synthesize maxMTU=_maxMTU;
@property(readonly, copy, nonatomic) NSNumber *rtcpInterval; // @synthesize rtcpInterval=_rtcpInterval;
@property(readonly, copy, nonatomic) NSNumber *minimumBitrate; // @synthesize minimumBitrate=_minimumBitrate;
@property(readonly, copy, nonatomic) NSNumber *maximumBitrate; // @synthesize maximumBitrate=_maximumBitrate;
@property(retain, nonatomic) NSNumber *synchronizationSource; // @synthesize synchronizationSource=_synchronizationSource;
@property(readonly, copy, nonatomic) NSNumber *payloadType; // @synthesize payloadType=_payloadType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (BOOL)_parseFromTLVData;
- (id)tlvData;
- (id)initWithPayloadType:(id)arg1 maximumBitrate:(id)arg2 minimumBitrate:(id)arg3 rtcpInterval:(id)arg4 maxMTU:(id)arg5 comfortNoisePayloadType:(id)arg6;

@end

