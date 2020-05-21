//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDEndPointAddress, HMDSRTPParameters, NSUUID;

@interface HMDSetupEndPointWrite : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    NSUUID *_sessionID;
    HMDEndPointAddress *_address;
    HMDSRTPParameters *_videoSrtpParameters;
    HMDSRTPParameters *_audioSrtpParameters;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) HMDSRTPParameters *audioSrtpParameters; // @synthesize audioSrtpParameters=_audioSrtpParameters;
@property(readonly, copy, nonatomic) HMDSRTPParameters *videoSrtpParameters; // @synthesize videoSrtpParameters=_videoSrtpParameters;
@property(readonly, copy, nonatomic) HMDEndPointAddress *address; // @synthesize address=_address;
@property(readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (BOOL)_parseFromTLVDataOnFailure;
- (BOOL)_parseFromTLVDataOnSuccess;
- (BOOL)_parseFromTLVDataImpl;
- (BOOL)_parseFromTLVData;
- (id)tlvData;
- (id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4;

@end

