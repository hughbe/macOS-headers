//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraAudioParameterSelection, HMDCameraStreamSessionID, HMDCameraVideoParameterSelection, NSString;

@interface HMDCameraParameterSelection : HMFObject <HMFLogging>
{
    HMDCameraStreamSessionID *_sessionID;
    HMDCameraVideoParameterSelection *_videoParameterSelection;
    HMDCameraAudioParameterSelection *_audioParameterSelection;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDCameraAudioParameterSelection *audioParameterSelection; // @synthesize audioParameterSelection=_audioParameterSelection;
@property(retain, nonatomic) HMDCameraVideoParameterSelection *videoParameterSelection; // @synthesize videoParameterSelection=_videoParameterSelection;
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (void)setReselectedConfigParameters:(id)arg1 videoTier:(id)arg2;
- (void)setSelectedConfigParameters:(id)arg1;
- (void)setSelectedEndPointSetupParameters:(id)arg1 videoNetworkConfig:(id)arg2 audioNetworkConfig:(id)arg3;
- (BOOL)findBestMatchWithProtocolParameters:(id)arg1 streamingCapabilities:(id)arg2 videoTierParameters:(id)arg3;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

