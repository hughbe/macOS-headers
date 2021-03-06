//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SFDevice, SFDeviceOperationCDPSetup, SFDeviceOperationWiFiSetup, SFSession;
@protocol OS_dispatch_queue;

@interface SFDeviceRepairSession : NSObject
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    unsigned long long _startTicks;
    int _preflightWiFiEarlyState;
    int _preflightWiFiState;
    SFSession *_sfSession;
    int _sfSessionState;
    int _pairVerifyState;
    int _getProblemsState;
    unsigned long long _problemFlags;
    BOOL _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    SFDeviceOperationWiFiSetup *_wifiSetupOperation;
    int _wifiSetupState;
    double _wifiSetupSecs;
    int _finishState;
    unsigned int _repairFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_idsIdentifier;
    SFDevice *_peerDevice;
    CDUnknownBlockType _progressHandler;
    unsigned long long _triggerMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long triggerMs; // @synthesize triggerMs=_triggerMs;
@property(nonatomic) unsigned int repairFlags; // @synthesize repairFlags=_repairFlags;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(readonly, copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (int)_runFinish;
- (int)_runCDPSetup;
- (int)_runWiFiSetup;
- (int)_runGetProblems;
- (int)_runPairVerify;
- (int)_runSFSessionStart;
- (int)_runPreflightWiFiFull;
- (int)_runPreflightWiFiEarly;
- (void)_run;
- (void)_reportError:(id)arg1;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

