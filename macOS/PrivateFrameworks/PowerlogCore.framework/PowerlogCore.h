//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PLCoreAgent, PLCoreService, PLCoreStorage;
@protocol OS_dispatch_source;

@interface PowerlogCore : NSObject
{
    NSObject<OS_dispatch_source> *_fVMPressureSource;
    NSDate *_launchDate;
    PLCoreStorage *_storage;
    PLCoreAgent *_agents;
    PLCoreService *_services;
}

+ (BOOL)isDebugEnabled;
+ (BOOL)isAudioAccessory;
+ (BOOL)shouldSetupCore;
+ (BOOL)allowRun;
+ (void)deprecateOldFullMode;
+ (void)setupCore;
+ (id)sharedCore;
+ (BOOL)sharedCoreStarted;
- (void).cxx_destruct;
@property(readonly) PLCoreService *services; // @synthesize services=_services;
@property(readonly) PLCoreAgent *agents; // @synthesize agents=_agents;
@property(readonly) PLCoreStorage *storage; // @synthesize storage=_storage;
@property(readonly) NSDate *launchDate; // @synthesize launchDate=_launchDate;
- (void)didRecieveMemoryPressureWarning;
- (void)stopCore;
- (void)startCore;
- (void)dealloc;
- (id)init;

@end

