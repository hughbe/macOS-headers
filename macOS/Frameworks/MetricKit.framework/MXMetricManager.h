//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricKit/MXXPCClient-Protocol.h>

@class NSArray, NSHashTable, NSXPCConnection;
@protocol OS_dispatch_queue, OS_os_log;

@interface MXMetricManager : NSObject <MXXPCClient>
{
    int _metricToken;
    NSArray *_pastPayloads;
    NSObject<OS_dispatch_queue> *_iVarQueue;
    NSObject<OS_os_log> *_managerLogHandle;
    NSXPCConnection *_connection;
    NSHashTable *_subscribers;
}

+ (id)makeLogHandleWithCategory:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *subscribers; // @synthesize subscribers=_subscribers;
@property(nonatomic) int metricToken; // @synthesize metricToken=_metricToken;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_os_log> *managerLogHandle; // @synthesize managerLogHandle=_managerLogHandle;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue; // @synthesize iVarQueue=_iVarQueue;
@property(retain) NSArray *pastPayloads; // @synthesize pastPayloads=_pastPayloads;
- (void)registrationProcessed;
- (void)_checkAndDeliverMetricReports;
- (BOOL)_cachedPayloadAvailable;
- (id)_createXPCConnection;
- (void)removeSubscriber:(id)arg1;
- (void)addSubscriber:(id)arg1;
- (void)dealloc;
- (id)init;

@end

