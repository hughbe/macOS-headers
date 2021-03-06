/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDActionSetEvent : HMDLogEvent <HMDAWDLogEvent, HMDCoreDuetLogEvent> {
    NSArray * _accessoryUUIDs;
    NSString * _actionSetName;
    NSString * _actionSetType;
    NSUUID * _actionSetUUID;
    NSString * _bundleId;
    HMDHome * _home;
    unsigned int  _numAccessoriesInHome;
    unsigned int  _numAccessoriesModified;
    unsigned int  _numNonEmptyScenesInHome;
    NSString * _serializedIdentifier;
    NSUUID * _transactionId;
    unsigned long long  _triggerSource;
}

@property (nonatomic, readonly, copy) NSArray *accessoryUUIDs;
@property (nonatomic, readonly) NSString *actionSetName;
@property (nonatomic, readonly) NSString *actionSetType;
@property (nonatomic, readonly) NSUUID *actionSetUUID;
@property (nonatomic, readonly) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long duetEventType;
@property (readonly, copy) NSArray *eventDataToLog;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHome *home;
@property (nonatomic, readonly) unsigned int numAccessoriesInHome;
@property (nonatomic, readonly) unsigned int numAccessoriesModified;
@property (nonatomic, readonly) unsigned int numNonEmptyScenesInHome;
@property (nonatomic, readonly) NSString *serializedIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *transactionId;
@property (nonatomic, readonly) unsigned long long triggerSource;

+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)accessoryUUIDs;
- (id)actionSetName;
- (id)actionSetType;
- (id)actionSetUUID;
- (id)bundleId;
- (unsigned long long)duetEventType;
- (id)eventDataToLog;
- (id)home;
- (id)initWithActionSet:(id)arg1 source:(unsigned long long)arg2 numAccessories:(unsigned int)arg3 bundleId:(id)arg4 transactionId:(id)arg5;
- (id)metadata;
- (id)metricForAWD;
- (unsigned int)numAccessoriesInHome;
- (unsigned int)numAccessoriesModified;
- (unsigned int)numNonEmptyScenesInHome;
- (id)serializedIdentifier;
- (id)transactionId;
- (unsigned long long)triggerSource;
- (id)value;

@end
