//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/SRDaemonNotificationDelegate-Protocol.h>

@class NSDictionary, NSString, NSXPCConnection, SRDaemonNotification, SRDevice, SRSensorDatastore;
@protocol SRSensorPrunerDelegate;

@interface SRSensorPruner : NSObject <SRDaemonNotificationDelegate>
{
    SRSensorDatastore *_datastore;
    SRDaemonNotification *_daemonNotification;
    BOOL _connectionDidInterrupt;
    BOOL _connectionDidInvalidate;
    id <SRSensorPrunerDelegate> _delegate;
    NSString *_sensor;
    NSDictionary *_nextDatastoreFiles;
    SRDevice *_device;
    NSXPCConnection *_connection;
}

+ (id)connectionToDaemon;
+ (id)remoteInterface;
+ (id)clientInterface;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) SRDevice *device; // @synthesize device=_device;
@property BOOL connectionDidInvalidate; // @synthesize connectionDidInvalidate=_connectionDidInvalidate;
@property BOOL connectionDidInterrupt; // @synthesize connectionDidInterrupt=_connectionDidInterrupt;
@property(retain) NSDictionary *nextDatastoreFiles; // @synthesize nextDatastoreFiles=_nextDatastoreFiles;
@property(copy) NSString *sensor; // @synthesize sensor=_sensor;
@property __weak id <SRSensorPrunerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeAllSamplesForAllSensors;
- (void)removeAllSamples;
- (void)continuePruneFrom:(double)arg1 to:(double)arg2 withDatastoreFiles:(id)arg3;
- (void)removeSamplesFrom:(double)arg1 to:(double)arg2 inSegment:(id)arg3;
- (void)removeSamplesFrom:(double)arg1 to:(double)arg2;
@property(readonly, retain) SRSensorDatastore *datastore;
- (void)resetDatastoreFiles:(id)arg1;
- (void)registerWithDaemonIfNeededWithReply:(CDUnknownBlockType)arg1;
- (void)setupConnection;
- (void)daemonNotificationDaemonDidStart:(id)arg1;
- (void)dealloc;
- (id)initWithSensor:(id)arg1 xpcConnection:(id)arg2 daemonNotification:(id)arg3 device:(id)arg4;
- (id)initWithSensor:(id)arg1 device:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

