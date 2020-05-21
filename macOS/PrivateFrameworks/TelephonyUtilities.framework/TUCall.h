//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSSet, NSString, NSUUID, TUCallCenter, TUCallDisplayContext, TUCallModel, TUCallNotificationManager, TUCallProvider, TUCallServicesInterface, TUDialRequest, TUHandle, TUProxyCall, TUSenderIdentity, TUVideoCallAttributes;
@protocol OS_dispatch_queue;

@interface TUCall : NSObject <NSSecureCoding>
{
    BOOL _endpointOnCurrentDevice;
    BOOL _shouldSuppressRingtone;
    BOOL _wantsHoldMusic;
    BOOL _wasDialAssisted;
    BOOL _supportsRecents;
    BOOL _hasUpdatedAudio;
    BOOL _video;
    BOOL _ringtoneSuppressedRemotely;
    BOOL _wasPulledToCurrentDevice;
    int _disconnectedReason;
    int _faceTimeIDStatus;
    int _abUID;
    int _filteredOutReason;
    int _transitionStatus;
    int _hardPauseDigitsState;
    int _ttyType;
    NSDate *_dateCreated;
    NSDate *_dateAnsweredOrDialed;
    NSDate *_dateSentInvitation;
    NSDate *_dateStartedConnecting;
    NSDate *_dateConnected;
    NSDate *_dateEnded;
    NSString *_uniqueProxyIdentifier;
    NSString *_sourceIdentifier;
    TUCallModel *_model;
    TUCallNotificationManager *_callNotificationManager;
    TUProxyCall *_comparativeCall;
    NSObject<OS_dispatch_queue> *_queue;
    TUCallServicesInterface *_callServicesInterface;
    TUVideoCallAttributes *_videoCallAttributes;
    long long _verificationStatus;
    long long _priority;
    long long _provisionalHoldStatus;
    NSString *_isoCountryCode;
    long long _soundRegion;
    NSDictionary *_providerContext;
    double _hostCreationTime;
    double _hostMessageSendTime;
    double _clientMessageReceiveTime;
    NSString *_hardPauseDigits;
    struct CGSize _remoteScreenAspectRatio;
}

+ (BOOL)supportsSecureCoding;
+ (id)faceTimeSupplementalDialTelephonyCallStringIncludingFTA:(BOOL)arg1;
+ (id)supplementalDialTelephonyCallString;
+ (id)supplementalDialTelephonyCallStringForDestination:(id)arg1 isPhoneNumber:(BOOL)arg2;
+ (id)_supplementalDialTelephonyCallStringForLocString:(id)arg1 destination:(id)arg2 isPhoneNumber:(BOOL)arg3 includeFaceTimeAudio:(BOOL)arg4;
- (void).cxx_destruct;
@property(nonatomic) int ttyType; // @synthesize ttyType=_ttyType;
@property(copy, nonatomic) NSString *hardPauseDigits; // @synthesize hardPauseDigits=_hardPauseDigits;
@property(nonatomic) int hardPauseDigitsState; // @synthesize hardPauseDigitsState=_hardPauseDigitsState;
@property(nonatomic) BOOL wasPulledToCurrentDevice; // @synthesize wasPulledToCurrentDevice=_wasPulledToCurrentDevice;
@property(nonatomic) double clientMessageReceiveTime; // @synthesize clientMessageReceiveTime=_clientMessageReceiveTime;
@property(nonatomic) double hostMessageSendTime; // @synthesize hostMessageSendTime=_hostMessageSendTime;
@property(nonatomic) double hostCreationTime; // @synthesize hostCreationTime=_hostCreationTime;
@property(readonly, nonatomic) struct CGSize remoteScreenAspectRatio; // @synthesize remoteScreenAspectRatio=_remoteScreenAspectRatio;
@property(readonly, nonatomic) NSDictionary *providerContext; // @synthesize providerContext=_providerContext;
@property(nonatomic) BOOL ringtoneSuppressedRemotely; // @synthesize ringtoneSuppressedRemotely=_ringtoneSuppressedRemotely;
@property(nonatomic, getter=isVideo) BOOL video; // @synthesize video=_video;
@property(nonatomic) long long soundRegion; // @synthesize soundRegion=_soundRegion;
@property(nonatomic) BOOL hasUpdatedAudio; // @synthesize hasUpdatedAudio=_hasUpdatedAudio;
@property(nonatomic) int transitionStatus; // @synthesize transitionStatus=_transitionStatus;
@property(copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(nonatomic) long long provisionalHoldStatus; // @synthesize provisionalHoldStatus=_provisionalHoldStatus;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long verificationStatus; // @synthesize verificationStatus=_verificationStatus;
@property(retain, nonatomic) TUVideoCallAttributes *videoCallAttributes; // @synthesize videoCallAttributes=_videoCallAttributes;
@property(nonatomic) __weak TUCallServicesInterface *callServicesInterface; // @synthesize callServicesInterface=_callServicesInterface;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL supportsRecents; // @synthesize supportsRecents=_supportsRecents;
@property(nonatomic) int filteredOutReason; // @synthesize filteredOutReason=_filteredOutReason;
@property(retain, nonatomic) TUProxyCall *comparativeCall; // @synthesize comparativeCall=_comparativeCall;
@property(readonly, nonatomic) TUCallNotificationManager *callNotificationManager; // @synthesize callNotificationManager=_callNotificationManager;
@property(copy, nonatomic) TUCallModel *model; // @synthesize model=_model;
@property(nonatomic) BOOL wasDialAssisted; // @synthesize wasDialAssisted=_wasDialAssisted;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(copy, nonatomic) NSString *uniqueProxyIdentifier; // @synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier;
@property(readonly, nonatomic) int abUID; // @synthesize abUID=_abUID;
@property(retain, nonatomic) NSDate *dateEnded; // @synthesize dateEnded=_dateEnded;
@property(retain, nonatomic) NSDate *dateConnected; // @synthesize dateConnected=_dateConnected;
@property(retain, nonatomic) NSDate *dateStartedConnecting; // @synthesize dateStartedConnecting=_dateStartedConnecting;
@property(retain, nonatomic) NSDate *dateSentInvitation; // @synthesize dateSentInvitation=_dateSentInvitation;
@property(retain, nonatomic) NSDate *dateAnsweredOrDialed; // @synthesize dateAnsweredOrDialed=_dateAnsweredOrDialed;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(nonatomic) BOOL wantsHoldMusic; // @synthesize wantsHoldMusic=_wantsHoldMusic;
@property(nonatomic) BOOL shouldSuppressRingtone; // @synthesize shouldSuppressRingtone=_shouldSuppressRingtone;
@property(nonatomic, getter=isEndpointOnCurrentDevice) BOOL endpointOnCurrentDevice; // @synthesize endpointOnCurrentDevice=_endpointOnCurrentDevice;
@property(nonatomic) int faceTimeIDStatus; // @synthesize faceTimeIDStatus=_faceTimeIDStatus;
@property(nonatomic) int disconnectedReason; // @synthesize disconnectedReason=_disconnectedReason;
- (BOOL)isDialRequestVideoUpgrade:(id)arg1;
- (BOOL)isVideoUpgradeFromCall:(id)arg1;
- (void)setRemoteVideoPresentationState:(int)arg1;
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1;
- (struct CGSize)localAspectRatioForOrientation:(long long)arg1;
@property(readonly, nonatomic) struct CGRect remoteVideoContentRect;
@property(readonly, nonatomic) struct CGSize remoteAspectRatio;
@property(readonly, nonatomic) long long remoteScreenOrientation;
@property(readonly, nonatomic) long long remoteCameraOrientation;
@property(readonly, nonatomic) long long cameraType;
@property(nonatomic) BOOL requiresRemoteVideo;
- (void)setRemoteVideoLayer:(id)arg1 forMode:(long long)arg2;
- (void)setLocalVideoLayer:(id)arg1 forMode:(long long)arg2;
@property(readonly, nonatomic) NSString *endedReasonString;
@property(readonly, nonatomic) NSString *endedErrorString;
@property(readonly, nonatomic) NSDictionary *callStats;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithCall:(id)arg1;
- (id)errorAlertMessage;
- (id)errorAlertTitle;
- (id)supplementalInCallString;
- (id)serviceDisplayString;
@property(readonly, copy, nonatomic) NSDictionary *endedReasonUserInfo;
- (BOOL)hasRelaySupport:(int)arg1;
@property(readonly, nonatomic) int callRelaySupport;
@property(readonly, copy, nonatomic) NSString *companyName;
@property(readonly, copy, nonatomic) NSString *localizedLabel;
@property(readonly, copy, nonatomic) NSString *suggestedDisplayName;
@property(readonly, copy, nonatomic) NSString *displayFirstName;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *contactIdentifier;
@property(readonly, copy, nonatomic) TUCallDisplayContext *displayContext;
@property(readonly, nonatomic) NSData *remoteFrequency;
@property(readonly, nonatomic) NSData *localFrequency;
@property(nonatomic, getter=isDownlinkMuted) BOOL downlinkMuted;
@property(nonatomic, getter=isUplinkMuted) BOOL uplinkMuted;
- (BOOL)setMuted:(BOOL)arg1;
- (BOOL)isMuted;
@property(readonly, copy, nonatomic) NSString *audioMode;
@property(readonly, copy, nonatomic) NSString *audioCategory;
@property(readonly, nonatomic) BOOL supportsDTMFTones;
@property(readonly, nonatomic) BOOL shouldPlayDTMFTone;
@property(readonly, nonatomic, getter=isEmergencyCall) BOOL emergencyCall;
@property(readonly, nonatomic) BOOL statusIsProvisional;
@property(readonly, nonatomic) int callStatus;
- (id)statusDisplayStringWithLabel:(id)arg1;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) NSString *reminderString;
@property(readonly, copy, nonatomic) NSString *callDurationString;
@property(readonly, nonatomic) double callDuration;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCall:(id)arg1;
@property(readonly, copy, nonatomic) NSUUID *localSenderIdentityAccountUUID;
@property(readonly, copy, nonatomic) NSUUID *localSenderIdentityUUID;
@property(readonly, copy, nonatomic) TUSenderIdentity *localSenderIdentity;
@property(readonly, copy, nonatomic) NSUUID *callGroupUUID;
@property(readonly, copy, nonatomic) NSString *callHistoryIdentifier;
@property(readonly, copy, nonatomic) NSString *callUUID;
@property(readonly, nonatomic, getter=isHostedOnCurrentDevice) BOOL hostedOnCurrentDevice;
@property(readonly, nonatomic) BOOL shouldDisplayLocationIfAvailable;
@property(readonly, nonatomic) TUHandle *handle;
@property(readonly, copy, nonatomic) NSString *callerNameFromNetwork;
@property(readonly, copy, nonatomic) NSString *destinationID;
- (void)ungroup;
- (void)groupWithOtherCall:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *remoteParticipantHandles;
@property(readonly, nonatomic, getter=isConversation) BOOL conversation;
@property(readonly, copy, nonatomic) TUDialRequest *dialRequestForRedial;
@property(readonly, nonatomic) long long faceTimeTransportType;
@property(readonly, nonatomic, getter=isTTY) BOOL tty;
@property(readonly, nonatomic, getter=isRTT) BOOL rtt;
@property(readonly, nonatomic, getter=isVoIPCall) BOOL voipCall;
@property(readonly, nonatomic, getter=isWiFiCall) BOOL wiFiCall;
@property(readonly, nonatomic) BOOL needsManualInCallSounds;
- (void)suppressRingtoneDueToRemoteSuppression;
- (void)suppressRingtone;
- (void)resetWantsHoldMusic;
@property(readonly, nonatomic, getter=isConferenced) BOOL conferenced;
@property(readonly, nonatomic, getter=isIncoming) BOOL incoming;
@property(readonly, nonatomic) BOOL isActive;
@property(nonatomic) BOOL isSendingVideo;
@property(readonly, nonatomic, getter=isConnected) BOOL connected;
@property(readonly, nonatomic, getter=isConnecting) BOOL connecting;
@property(readonly, nonatomic) BOOL hasSentInvitation;
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic) BOOL wasDeclined;
@property(readonly, nonatomic) int service;
@property(readonly, nonatomic) TUCallProvider *displayProvider;
@property(readonly, nonatomic) TUCallProvider *backingProvider;
@property(readonly, nonatomic) TUCallProvider *provider;
@property(readonly, copy, nonatomic) NSUUID *uniqueProxyIdentifierUUID;
@property(readonly, nonatomic) NSString *hardPauseDigitsDisplayString;
- (void)sendHardPauseDigits;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (void)resetProvisionalState;
- (void)disconnectWithReason:(int)arg1;
- (void)unhold;
- (void)hold;
- (void)setIsOnHold:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isOnHold;
- (void)answerWithRequest:(id)arg1;
- (void)_handleStatusChange;
@property(readonly, nonatomic) long long outputAudioPowerSpectrumToken;
@property(readonly, nonatomic) long long inputAudioPowerSpectrumToken;
@property(readonly, nonatomic) long long videoStreamToken;
@property(readonly, nonatomic) float localMeterLevel;
@property(readonly, nonatomic) float remoteMeterLevel;
@property(readonly, nonatomic) BOOL wantsStagingArea;
@property(readonly, nonatomic, getter=isMutuallyExclusiveCall) BOOL mutuallyExclusiveCall;
@property(readonly, nonatomic) BOOL shouldSuppressInCallUI;
@property(readonly, nonatomic, getter=isRemoteUplinkMuted) BOOL remoteUplinkMuted;
@property(readonly, nonatomic) BOOL supportsTTYWithVoice;
@property(readonly, nonatomic, getter=isVideoMirrored) BOOL videoMirrored;
@property(readonly, nonatomic, getter=isVideoPaused) BOOL videoPaused;
@property(readonly, nonatomic, getter=isVideoDegraded) BOOL videoDegraded;
@property(readonly, nonatomic, getter=isMediaStalled) BOOL mediaStalled;
@property(readonly, nonatomic) BOOL isSendingAudio;
@property(readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property(readonly, nonatomic, getter=isOutgoing) BOOL outgoing;
@property(readonly, nonatomic, getter=isThirdPartyVideo) BOOL thirdPartyVideo;
@property(readonly, nonatomic) BOOL prefersExclusiveAccessToCellularNetwork;
@property(readonly, nonatomic, getter=isUsingBaseband) BOOL usingBaseband;
@property(readonly, nonatomic, getter=isVoicemail) BOOL voicemail;
@property(readonly, nonatomic, getter=isSOS) BOOL sos;
@property(readonly, nonatomic, getter=isEmergency) BOOL emergency;
@property(readonly, nonatomic) __weak TUCallCenter *callCenter;
- (void)updateComparativeCall;
- (id)description;
- (void)dealloc;
- (id)initWithUniqueProxyIdentifier:(id)arg1 endpointOnCurrentDevice:(BOOL)arg2;
- (id)initWithCall:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1;
- (id)init;

@end

