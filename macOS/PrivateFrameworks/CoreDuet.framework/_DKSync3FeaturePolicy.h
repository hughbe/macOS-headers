//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSync3PolicyCommonMethods-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface _DKSync3FeaturePolicy : NSObject <_DKSync3PolicyCommonMethods>
{
    BOOL _isSyncDisabled;
    BOOL _onlyMultiDevice;
    BOOL _onlySingleDevice;
    BOOL _requiresCharging;
    BOOL _pushTriggersSync;
    BOOL _additionsCountTowardTriggeredSyncBucket;
    BOOL _deletionsCountTowardTriggeredSyncBucket;
    BOOL _additionTriggersImmediateSync;
    BOOL _deletionTriggersImmediateSync;
    NSDictionary *_properties;
    NSString *_name;
    NSString *_feature;
    NSArray *_streamNames;
    NSArray *_sources;
    NSArray *_destinations;
    NSString *_transport;
    unsigned long long _periodicSyncCadenceInMinutes;
    unsigned long long _oldestEventToSyncInDays;
    NSArray *_requiresCompanions;
}

+ (id)policyForFeature:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL deletionTriggersImmediateSync; // @synthesize deletionTriggersImmediateSync=_deletionTriggersImmediateSync;
@property(nonatomic) BOOL additionTriggersImmediateSync; // @synthesize additionTriggersImmediateSync=_additionTriggersImmediateSync;
@property(nonatomic) BOOL deletionsCountTowardTriggeredSyncBucket; // @synthesize deletionsCountTowardTriggeredSyncBucket=_deletionsCountTowardTriggeredSyncBucket;
@property(nonatomic) BOOL additionsCountTowardTriggeredSyncBucket; // @synthesize additionsCountTowardTriggeredSyncBucket=_additionsCountTowardTriggeredSyncBucket;
@property(nonatomic) BOOL pushTriggersSync; // @synthesize pushTriggersSync=_pushTriggersSync;
@property(retain, nonatomic) NSArray *requiresCompanions; // @synthesize requiresCompanions=_requiresCompanions;
@property(nonatomic) BOOL requiresCharging; // @synthesize requiresCharging=_requiresCharging;
@property(nonatomic) BOOL onlySingleDevice; // @synthesize onlySingleDevice=_onlySingleDevice;
@property(nonatomic) BOOL onlyMultiDevice; // @synthesize onlyMultiDevice=_onlyMultiDevice;
@property(nonatomic) unsigned long long oldestEventToSyncInDays; // @synthesize oldestEventToSyncInDays=_oldestEventToSyncInDays;
@property(nonatomic) unsigned long long periodicSyncCadenceInMinutes; // @synthesize periodicSyncCadenceInMinutes=_periodicSyncCadenceInMinutes;
@property(retain, nonatomic) NSString *transport; // @synthesize transport=_transport;
@property(retain, nonatomic) NSArray *destinations; // @synthesize destinations=_destinations;
@property(retain, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) NSArray *streamNames; // @synthesize streamNames=_streamNames;
@property(retain, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(nonatomic) BOOL isSyncDisabled; // @synthesize isSyncDisabled=_isSyncDisabled;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (id)description;
- (id)initWithName:(id)arg1 properties:(id)arg2;
- (id)init;

@end

