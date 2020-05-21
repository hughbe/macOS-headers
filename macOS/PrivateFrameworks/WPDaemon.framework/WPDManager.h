//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WPDaemon/CBCentralManagerDelegate-Protocol.h>
#import <WPDaemon/CBPeripheralManagerDelegate-Protocol.h>
#import <WPDaemon/CBScalablePipeManagerDelegate-Protocol.h>

@class NSSet, NSString, WPDaemonServer;

@interface WPDManager : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBScalablePipeManagerDelegate>
{
    BOOL _isHomePod;
    BOOL _restricted;
    BOOL _testMode;
    long long _state;
    NSString *_name;
    WPDaemonServer *_server;
    NSSet *_cbManagers;
}

+ (id)cbStateAsString:(long long)arg1;
+ (id)wpStateAsString:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *cbManagers; // @synthesize cbManagers=_cbManagers;
@property __weak WPDaemonServer *server; // @synthesize server=_server;
@property(nonatomic) BOOL testMode; // @synthesize testMode=_testMode;
@property(nonatomic) BOOL restricted; // @synthesize restricted=_restricted;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) BOOL isHomePod; // @synthesize isHomePod=_isHomePod;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)update;
- (void)updateState:(long long)arg1 Restricted:(BOOL)arg2;
- (void)cbManagerDidUpdateState:(id)arg1;
- (void)scalablePipeManagerDidUpdateState:(id)arg1;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)generateStateDump;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)cleanup;
- (id)initWithServer:(id)arg1 Name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

