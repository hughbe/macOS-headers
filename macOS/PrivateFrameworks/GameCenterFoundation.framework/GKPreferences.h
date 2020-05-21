//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;
@protocol GKPreferencesDelegate;

@interface GKPreferences : NSObject
{
    BOOL _shouldSynchronizeOnNextRead;
    BOOL _webKitInspectElementEnabled;
    NSDictionary *_overrideValues;
}

+ (id)displayNameForEnvironment:(long long)arg1;
+ (id)hostNameForEnvironment:(long long)arg1;
+ (id)shared;
@property(copy) NSDictionary *overrideValues; // @synthesize overrideValues=_overrideValues;
@property(nonatomic, getter=isWebKitInspectElementEnabled) BOOL webKitInspectElementEnabled; // @synthesize webKitInspectElementEnabled=_webKitInspectElementEnabled;
@property(nonatomic) BOOL _shouldSynchronizeOnNextRead; // @synthesize _shouldSynchronizeOnNextRead;
@property(nonatomic) long long tournamentServer;
@property(nonatomic) BOOL restrictToTournamentPlayers;
@property(nonatomic) long long tournamentCreationMethod;
@property(nonatomic) long long tournamentUIAppearanceStyle;
@property(nonatomic) long long tournamentCustomDuration;
@property(nonatomic) long long tournamentCustomMaxReplays;
@property(nonatomic) long long tournamentCustomMaxPlayers;
@property(nonatomic) long long tournamentCustomMinPlayers;
@property(nonatomic) long long tournamentAutoDuration;
@property(nonatomic) long long tournamentMaxReplays;
@property(nonatomic) long long tournamentMaxPlayers;
@property(nonatomic) long long tournamentMinPlayers;
@property(retain, nonatomic) NSDate *tournamentEndDate;
@property(retain, nonatomic) NSDate *tournamentStartDate;
@property(nonatomic) long long tournamentDuration;
@property(nonatomic) long long tournamentReplays;
@property(nonatomic) long long tournamentPlayers;
@property(nonatomic) long long tournamentParticipantState;
@property(nonatomic) long long tournamentState;
@property(nonatomic) long long tournamentMaxSimulatedFriends;
@property(nonatomic) long long tournamentMaxSimulatedPlayers;
@property(nonatomic) BOOL tournamentDemoModeEnabled;
@property(nonatomic) BOOL tournamentsDebuggingEnabled;
@property(nonatomic, getter=isComprehensiveLoggingEnabled) BOOL comprehensiveLoggingEnabled;
@property(nonatomic, getter=isClipGestureEnabled) BOOL clipGestureEnabled;
@property(readonly, nonatomic) BOOL HTTPShouldUsePipelining;
@property(readonly, nonatomic) unsigned long long exchangeDefaultMaxInitiatedExchangesPerPlayer;
@property(readonly, nonatomic) unsigned long long exchangeDataDefaultMaximumSize;
@property(readonly, nonatomic) unsigned long long maxDefaultGameStateSizeTurnBased;
@property(readonly, nonatomic) unsigned long long maxDefaultPlayersTurnBased;
@property(readonly, nonatomic) unsigned long long maxDefaultPlayersHosted;
@property(readonly, nonatomic) unsigned long long maxDefaultPlayersP2P;
@property(nonatomic) double maxRecentPlayersTime;
@property(nonatomic) unsigned long long maxRecentPlayersCount;
@property(nonatomic) BOOL shouldAddPlayerInfoToAddressBook;
@property(nonatomic) BOOL shouldAllowNearbyMultiplayer;
@property(readonly, nonatomic) BOOL shouldDisallowInvitesFromStrangers;
@property(nonatomic) BOOL shouldLinkPlayerToFacebook;
@property(nonatomic) BOOL shouldLinkPlayerToTwitter;
@property(nonatomic) BOOL shouldLinkPlayerToICloud;
@property(nonatomic) BOOL shouldUseTestIcons;
@property(nonatomic) BOOL shouldTrackAtlasImageUsage;
@property(nonatomic) BOOL shouldAnnotateImageUsage;
@property(nonatomic) double cacheTTLOverride;
@property(nonatomic) double minimumCacheTTL;
@property(nonatomic) double garbageCollectionInterval;
@property(nonatomic) double terminationInterval;
@property(nonatomic) BOOL useInternalHeader;
@property(nonatomic) unsigned long long exchangeMaxInitiatedExchangesPerPlayer;
@property(nonatomic) unsigned long long exchangeDataMaximumSize;
@property(nonatomic) unsigned long long maxGameStateSizeTurnBased;
@property(nonatomic) unsigned long long maxPlayersTurnBased;
@property(nonatomic) unsigned long long maxPlayersHosted;
@property(nonatomic) unsigned long long maxPlayersP2P;
@property(nonatomic) unsigned long long recentNumberOfPlayers;
@property(nonatomic) BOOL restrictToAutomatch;
@property(nonatomic) long long pipeliningSetting;
@property(nonatomic) long long pushEnvironment;
@property(nonatomic) BOOL preemptiveRelay;
@property(nonatomic) BOOL forceRelay;
@property(copy, nonatomic) NSString *testRunID;
@property(nonatomic) unsigned int logFilter;
@property(nonatomic) BOOL verboseLogging;
@property(nonatomic) BOOL notificationAlertsEnabled;
@property(nonatomic) BOOL notificationSoundsEnabled;
@property(nonatomic) BOOL notificationBadgesEnabled;
@property(nonatomic, getter=isNotificationCenterEnabled) BOOL notificationCenterEnabled;
@property(nonatomic) double debugRequestTimeout;
@property(nonatomic) unsigned long long operationRetryCount;
@property(nonatomic) double operationRetryDelay;
@property(nonatomic) double operationTimeout;
@property(nonatomic) unsigned long long loginDisableThreshold;
@property(nonatomic) unsigned long long mescalSetupRetries;
@property(nonatomic) BOOL forceDefaultNickname;
@property(nonatomic) BOOL useTestProtocols;
@property(nonatomic) BOOL allowUnsignedBag;
@property(retain, nonatomic) NSString *storeBagURL;
@property(nonatomic) long long environment;
- (void)removeOverrideForKey:(id)arg1;
- (void)setStringValue:(id)arg1 forKey:(struct __CFString *)arg2;
- (id)stringValueForKey:(struct __CFString *)arg1 defaultValue:(id)arg2;
- (void)setTimeInterval:(double)arg1 forKey:(struct __CFString *)arg2;
- (double)timeIntervalForKey:(struct __CFString *)arg1 defaultValue:(double)arg2;
- (void)setUnsignedIntegerValue:(long long)arg1 forKey:(struct __CFString *)arg2;
- (long long)unsignedIntegerValueForKey:(struct __CFString *)arg1 defaultValue:(long long)arg2;
- (void)setIntegerValue:(long long)arg1 forKey:(struct __CFString *)arg2;
- (long long)integerValueForKey:(struct __CFString *)arg1 defaultValue:(long long)arg2;
- (void)setBooleanValue:(BOOL)arg1 forKey:(struct __CFString *)arg2;
- (BOOL)booleanValueForKey:(struct __CFString *)arg1;
- (BOOL)booleanValueForKey:(struct __CFString *)arg1 defaultValue:(BOOL)arg2;
- (id)preferencesValueForKey:(id)arg1;
- (void)applicationWillEnterBackground:(id)arg1;
- (void)_didWriteKey:(struct __CFString *)arg1;
- (void)synchronize;
- (void)invalidate;
- (BOOL)isInternalBuild;
- (void)dealloc;
- (id)init;
- (id)initWithoutUIKitNotifications;
- (id)initWithUIKitNotifications;
- (BOOL)restrictionEnabledForKey:(id)arg1;
@property(readonly, nonatomic, getter=isGameCenterRestricted) BOOL gameCenterRestricted;
@property(readonly, nonatomic, getter=isAccountModificationRestricted) BOOL accountModificationRestricted;
@property(readonly, nonatomic, getter=isAppInstallationRestricted) BOOL appInstallationRestricted;
@property(readonly, nonatomic, getter=isAddingFriendsRestricted) BOOL addingFriendsRestricted;
@property(readonly, nonatomic, getter=isMultiplayerGamingRestricted) BOOL multiplayerGamingRestricted;
@property(readonly, nonatomic, getter=isStoreDemoModeEnabled) BOOL storeDemoModeEnabled;
@property(nonatomic) id <GKPreferencesDelegate> preferencesDelegate;

@end

