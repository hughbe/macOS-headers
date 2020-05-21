//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DuetActivityScheduler/NSCopying-Protocol.h>
#import <DuetActivityScheduler/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, NSURL, NSUUID, _DASAssertion, _DASFileProtection;
@protocol OS_dispatch_queue;

@interface _DASActivity : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _cancelAfterDeadline;
    BOOL _requiresNetwork;
    BOOL _isUpload;
    BOOL _requiresInexpensiveNetworking;
    BOOL _requiresUnconstrainedNetworking;
    BOOL _cpuIntensive;
    BOOL _memoryIntensive;
    BOOL _diskIntensive;
    BOOL _requiresDeviceInactivity;
    BOOL _requiresPlugin;
    BOOL _afterUserIsInactive;
    BOOL _beforeUserIsActive;
    BOOL _triggersRestart;
    BOOL _supportsAnyApplication;
    BOOL _requestsApplicationLaunch;
    BOOL _requestsExtensionLaunch;
    BOOL _delayedStart;
    BOOL _darkWakeEligible;
    BOOL _beforeDaysFirstActivity;
    BOOL _shouldBePersisted;
    BOOL _isMLBackgroundActivity;
    BOOL _deferred;
    BOOL _suspendable;
    BOOL _suspendRequested;
    BOOL _bypassesPredictions;
    BOOL _wasForceRun;
    BOOL _budgeted;
    BOOL _requiresBuddyComplete;
    int _pid;
    unsigned int _userIdentifier;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    CDUnknownBlockType _startHandler;
    CDUnknownBlockType _suspendHandler;
    _DASFileProtection *_fileProtection;
    unsigned long long _schedulingPriority;
    NSDate *_startAfter;
    NSDate *_startBefore;
    unsigned long long _duration;
    unsigned long long _uploadSize;
    unsigned long long _downloadSize;
    long long _targetDevice;
    NSArray *_relatedApplications;
    long long _relevancy;
    NSArray *_schedulerRecommendedApplications;
    long long _motionState;
    NSDictionary *_userInfo;
    NSString *_bundleId;
    double _interval;
    NSString *_groupName;
    NSString *_launchReason;
    NSString *_extensionIdentifier;
    double _predictedOptimalScore;
    NSDate *_predictedOptimalStartDate;
    double _lastComputedScore;
    NSDate *_lastScored;
    NSDate *_submitDate;
    NSDate *_startDate;
    double _percentCompleted;
    NSMutableDictionary *_policyScores;
    NSMutableDictionary *_policyReasons;
    unsigned long long _lastDenialValue;
    NSString *_clientName;
    long long _completionStatus;
    NSURL *_applicationURL;
    CDUnknownBlockType _completionHandler;
    NSString *_clientDataBudgetName;
    unsigned long long _budgetingToken;
    _DASAssertion *_assertion;
    long long _preClearedMode;
    NSUUID *_uuid;
}

+ (id)sharedDateFormatter;
+ (id)prettySchedulingPriorityDescription:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)validClassesForUserInfoSerialization;
+ (unsigned long long)cleanSchedulingPriority:(unsigned long long)arg1;
+ (unsigned long long)cleanTransferSize:(unsigned long long)arg1;
+ (unsigned long long)cleanDuration:(unsigned long long)arg1;
+ (id)validateBGTaskRequestWithActivity:(id)arg1;
+ (id)launchForRemoteNotificationWithTopic:(id)arg1 withPayload:(id)arg2 highPriority:(BOOL)arg3;
+ (id)launchWithTopic:(id)arg1 forReason:(id)arg2 withPayload:(id)arg3 highPriority:(BOOL)arg4;
+ (id)extensionLaunchActivityWithName:(id)arg1 priority:(unsigned long long)arg2 forExtensionIdentifier:(id)arg3 withReason:(id)arg4 duration:(unsigned long long)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7;
+ (id)extensionLaunchActivityWithName:(id)arg1 priority:(unsigned long long)arg2 forApplication:(id)arg3 withReason:(id)arg4 duration:(unsigned long long)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7;
+ (id)extensionLaunchActivityWithName:(id)arg1 priority:(unsigned long long)arg2 forApplication:(id)arg3 forExtensionIdentifier:(id)arg4 withReason:(id)arg5 duration:(unsigned long long)arg6 startingAfter:(id)arg7 startingBefore:(id)arg8;
+ (id)applicationLaunchActivityWithName:(id)arg1 priority:(unsigned long long)arg2 forApplication:(id)arg3 withReason:(id)arg4 duration:(unsigned long long)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7;
+ (id)anyApplicationActivityWithName:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 startingAfter:(id)arg4 startingBefore:(id)arg5 limitedToApplications:(id)arg6;
+ (id)networkingActivityWithName:(id)arg1 priority:(unsigned long long)arg2 downloadSize:(unsigned long long)arg3 uploadSize:(unsigned long long)arg4 expensiveNetworkingAllowed:(BOOL)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7;
+ (id)networkingActivityWithName:(id)arg1 priority:(unsigned long long)arg2 transferSize:(unsigned long long)arg3 isUpload:(BOOL)arg4 expensiveNetworkingAllowed:(BOOL)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7;
+ (id)activityWithName:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 startingAfter:(id)arg4 startingBefore:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned int userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(nonatomic) BOOL requiresBuddyComplete; // @synthesize requiresBuddyComplete=_requiresBuddyComplete;
@property(nonatomic) long long preClearedMode; // @synthesize preClearedMode=_preClearedMode;
@property(retain, nonatomic) _DASAssertion *assertion; // @synthesize assertion=_assertion;
@property(nonatomic) unsigned long long budgetingToken; // @synthesize budgetingToken=_budgetingToken;
@property(retain, nonatomic) NSString *clientDataBudgetName; // @synthesize clientDataBudgetName=_clientDataBudgetName;
@property(nonatomic) BOOL budgeted; // @synthesize budgeted=_budgeted;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSURL *applicationURL; // @synthesize applicationURL=_applicationURL;
@property(nonatomic) long long completionStatus; // @synthesize completionStatus=_completionStatus;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) BOOL wasForceRun; // @synthesize wasForceRun=_wasForceRun;
@property unsigned long long lastDenialValue; // @synthesize lastDenialValue=_lastDenialValue;
@property(retain) NSMutableDictionary *policyReasons; // @synthesize policyReasons=_policyReasons;
@property(retain) NSMutableDictionary *policyScores; // @synthesize policyScores=_policyScores;
@property(nonatomic) double percentCompleted; // @synthesize percentCompleted=_percentCompleted;
@property(nonatomic) BOOL bypassesPredictions; // @synthesize bypassesPredictions=_bypassesPredictions;
@property(nonatomic) BOOL suspendRequested; // @synthesize suspendRequested=_suspendRequested;
@property(nonatomic) BOOL suspendable; // @synthesize suspendable=_suspendable;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSDate *submitDate; // @synthesize submitDate=_submitDate;
@property(retain) NSDate *lastScored; // @synthesize lastScored=_lastScored;
@property(nonatomic) double lastComputedScore; // @synthesize lastComputedScore=_lastComputedScore;
@property(retain) NSDate *predictedOptimalStartDate; // @synthesize predictedOptimalStartDate=_predictedOptimalStartDate;
@property(nonatomic) double predictedOptimalScore; // @synthesize predictedOptimalScore=_predictedOptimalScore;
@property(nonatomic) BOOL deferred; // @synthesize deferred=_deferred;
@property(nonatomic) BOOL isMLBackgroundActivity; // @synthesize isMLBackgroundActivity=_isMLBackgroundActivity;
@property(nonatomic) BOOL shouldBePersisted; // @synthesize shouldBePersisted=_shouldBePersisted;
@property(copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(copy, nonatomic) NSString *launchReason; // @synthesize launchReason=_launchReason;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) BOOL beforeDaysFirstActivity; // @synthesize beforeDaysFirstActivity=_beforeDaysFirstActivity;
@property(nonatomic) BOOL darkWakeEligible; // @synthesize darkWakeEligible=_darkWakeEligible;
@property(nonatomic) BOOL delayedStart; // @synthesize delayedStart=_delayedStart;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long motionState; // @synthesize motionState=_motionState;
@property(retain, nonatomic) NSArray *schedulerRecommendedApplications; // @synthesize schedulerRecommendedApplications=_schedulerRecommendedApplications;
@property(nonatomic) long long relevancy; // @synthesize relevancy=_relevancy;
@property(retain, nonatomic) NSArray *relatedApplications; // @synthesize relatedApplications=_relatedApplications;
@property(nonatomic) long long targetDevice; // @synthesize targetDevice=_targetDevice;
@property(nonatomic) BOOL requestsExtensionLaunch; // @synthesize requestsExtensionLaunch=_requestsExtensionLaunch;
@property(nonatomic) BOOL requestsApplicationLaunch; // @synthesize requestsApplicationLaunch=_requestsApplicationLaunch;
@property(nonatomic) BOOL supportsAnyApplication; // @synthesize supportsAnyApplication=_supportsAnyApplication;
@property(nonatomic) BOOL triggersRestart; // @synthesize triggersRestart=_triggersRestart;
@property(nonatomic) BOOL beforeUserIsActive; // @synthesize beforeUserIsActive=_beforeUserIsActive;
@property(nonatomic) BOOL afterUserIsInactive; // @synthesize afterUserIsInactive=_afterUserIsInactive;
@property(nonatomic) BOOL requiresPlugin; // @synthesize requiresPlugin=_requiresPlugin;
@property(nonatomic) BOOL requiresDeviceInactivity; // @synthesize requiresDeviceInactivity=_requiresDeviceInactivity;
@property(nonatomic) BOOL diskIntensive; // @synthesize diskIntensive=_diskIntensive;
@property(nonatomic) BOOL memoryIntensive; // @synthesize memoryIntensive=_memoryIntensive;
@property(nonatomic) BOOL cpuIntensive; // @synthesize cpuIntensive=_cpuIntensive;
@property(nonatomic) BOOL requiresUnconstrainedNetworking; // @synthesize requiresUnconstrainedNetworking=_requiresUnconstrainedNetworking;
@property(nonatomic) BOOL requiresInexpensiveNetworking; // @synthesize requiresInexpensiveNetworking=_requiresInexpensiveNetworking;
@property(nonatomic) BOOL isUpload; // @synthesize isUpload=_isUpload;
@property(nonatomic) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(nonatomic) unsigned long long uploadSize; // @synthesize uploadSize=_uploadSize;
@property(nonatomic) BOOL requiresNetwork; // @synthesize requiresNetwork=_requiresNetwork;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) BOOL cancelAfterDeadline; // @synthesize cancelAfterDeadline=_cancelAfterDeadline;
@property(retain) NSDate *startBefore; // @synthesize startBefore=_startBefore;
@property(retain) NSDate *startAfter; // @synthesize startAfter=_startAfter;
@property(nonatomic) unsigned long long schedulingPriority; // @synthesize schedulingPriority=_schedulingPriority;
@property(copy, nonatomic) _DASFileProtection *fileProtection; // @synthesize fileProtection=_fileProtection;
@property(copy, nonatomic) CDUnknownBlockType suspendHandler; // @synthesize suspendHandler=_suspendHandler;
@property(copy, nonatomic) CDUnknownBlockType startHandler; // @synthesize startHandler=_startHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)updateGroupIfNecessary;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)debugDescription;
- (id)shortDescription;
- (id)description;
- (id)nameString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)reconcileWithActivity:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)shouldReplaceActivity:(id)arg1 andKeepsSubmitted:(char *)arg2;
- (BOOL)isBackgroundTaskActivity;
- (BOOL)overwritesPrevious;
- (BOOL)keepsPrevious;
- (BOOL)isIdenticalLaunchTo:(id)arg1;
- (BOOL)significantlyOverdueAtDate:(id)arg1;
- (BOOL)overdueAtDate:(id)arg1;
- (BOOL)timewiseEligibleAtDate:(id)arg1;
- (BOOL)hasManyConstraints;
- (double)compatibilityWith:(id)arg1;
- (BOOL)isIntensive;
- (void)setConstraintsWithXPCDictionary:(id)arg1;
- (void)setObject:(id)arg1 forUserInfoKey:(id)arg2;
@property(nonatomic) BOOL beforeApplicationLaunch;
@property(retain, nonatomic) NSDate *clientProvidedStartDate;
@property(retain, nonatomic) NSString *clientProvidedIdentifier;
@property(nonatomic) BOOL requestsNewsstandLaunch;
- (BOOL)isSilentPush;
@property(nonatomic) BOOL userRequestedBackupTask;
@property(nonatomic) BOOL allowsCompanionExpensiveNetworking;
@property(nonatomic) BOOL hasMagneticSensitivity;
@property(nonatomic) BOOL requiresSignificantUserInactivity;
@property(nonatomic) unsigned long long transferSize;
- (id)initWithName:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 startingAfter:(id)arg4 startingBefore:(id)arg5;

@end

