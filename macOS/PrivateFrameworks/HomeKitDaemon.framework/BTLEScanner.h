//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HAPBTLECentralManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class CUBLEScanner, HAPBTLECentralManager, HMDAccessoryQueues, HMFTimer, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface BTLEScanner : HMFObject <HMFTimerDelegate, HAPBTLECentralManagerDelegate>
{
    NSObject<OS_dispatch_queue> *workQueue;
    HMFTimer *scanTimer;
    CUBLEScanner *cubleScanner;
    HAPBTLECentralManager *centralManager;
    HMDAccessoryQueues *scanQueue;
}

+ (id)initializeScanner;
+ (id)sharedScanLock;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDAccessoryQueues *scanQueue; // @synthesize scanQueue;
@property(retain, nonatomic) HAPBTLECentralManager *centralManager; // @synthesize centralManager;
@property(retain, nonatomic) CUBLEScanner *cubleScanner; // @synthesize cubleScanner;
@property(retain, nonatomic) HMFTimer *scanTimer; // @synthesize scanTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue;
- (void)timerDidFire:(id)arg1;
- (void)_stopScan;
- (BOOL)startScan:(id)arg1 timeout:(double)arg2;
- (void)_checkCanScan;
- (void)_stopTimer;
- (void)_flushQueue;
- (id)init;
- (void)didUpdateBTLEState:(long long)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

