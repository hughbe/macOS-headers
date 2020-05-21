//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCArgumentParser.h>

@class SCRMIGHelper;

__attribute__((visibility("hidden")))
@interface SCRArgumentParser : SCRCArgumentParser
{
    BOOL _hasReceivedMessageFromLaunchdStart;
    BOOL _startedByLaunchd;
    BOOL _isKeyboardHelpOnlyEnabled;
    BOOL _shouldSkipSplash;
    BOOL _isQuickStarted;
    BOOL _isAutomaticStartAfterLogin;
    BOOL _bailAsSoonAsPossible;
    BOOL _isQuickStartRunning;
    BOOL _shouldShortCircuitSpeechSynthesizer;
    SCRMIGHelper *_migHelper;
}

+ (id)versionString;
+ (id)processIdentifier;
- (void).cxx_destruct;
- (BOOL)_checkAndRunSplash;
- (BOOL)_shouldStartVoiceOver;
- (BOOL)_isRunningAsRoot;
- (BOOL)_isMacBuddyRunning;
- (void)setHasReceivedMessageFromLaunchdStart:(BOOL)arg1;
- (id)_setStartedByLaunchd:(id)arg1;
- (BOOL)startedByLaunchd;
- (id)_setTestTargetApplicationPIDs:(id)arg1;
- (id)_setTargetApplications:(id)arg1;
- (id)_setQuickStart:(id)arg1;
- (id)_setAutomaticStartAfterLogin:(id)arg1;
- (id)_setKeyboardHelp:(id)arg1;
- (id)_setSkipSplash:(id)arg1;
- (id)_setLogMask:(id)arg1;
- (void)_handleCommand:(id)arg1 synchronizationHandler:(CDUnknownBlockType)arg2;
- (void)_stopAndPlayMessage:(BOOL)arg1;
- (void)stop;
- (void)stopDueToSigTerm;
- (void)_tearDownMachServicesWithReturnValue:(int)arg1;
- (int)run;
- (BOOL)wasLastShutdownPlanned;
- (unsigned long long)_securitySessionID;
- (unsigned long long)_sessionID;
- (void)_setSessionID:(unsigned long long)arg1;
- (void)_initializeStartupOptions:(int)arg1;
- (id)initWithArgc:(int)arg1 argv:(const char **)arg2;

@end

