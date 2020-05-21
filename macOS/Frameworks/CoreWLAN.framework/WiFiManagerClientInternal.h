//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreWLAN/CWInternalEventDelegate-Protocol.h>

@class CWWiFiClient, NSCountedSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WiFiManagerClientInternal : NSObject <CWInternalEventDelegate>
{
    CWWiFiClient *_wifiClient;
    NSCountedSet *_eventCounters;
    struct __CFRunLoop *_runLoopRef;
    struct __CFString *_runLoopMode;
    NSMutableDictionary *_mutableDeviceMap;
    struct WiFiManagerClientInternalCallbacks _callbacks;
}

@property(readonly) NSMutableDictionary *mutableDeviceMap; // @synthesize mutableDeviceMap=_mutableDeviceMap;
@property struct __CFString *runLoopMode; // @synthesize runLoopMode=_runLoopMode;
@property struct __CFRunLoop *runLoopRef; // @synthesize runLoopRef=_runLoopRef;
@property(readonly) CWWiFiClient *wifiClient; // @synthesize wifiClient=_wifiClient;
- (void)virtualInterfaceStateChangedForWiFiInterfaceWithName:(id)arg1;
- (void)deviceAvailabilityChangedForWiFiInterfaceWithName:(id)arg1 isAvailable:(BOOL)arg2;
- (void)wowStateDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)linkDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)interfaceAddedWithName:(id)arg1;
- (void)setDeviceAttachCallback:(CDUnknownFunctionPointerType)arg1 refcon:(void *)arg2;
- (void)setWoWStateChangeCallback:(CDUnknownFunctionPointerType)arg1 refcon:(void *)arg2;
- (void)dealloc;
- (id)init;
- (void)setEventMonitoringEnabled:(BOOL)arg1 event:(long long)arg2;
@property struct WiFiManagerClientInternalCallbacks *callbacks; // @dynamic callbacks;

@end

