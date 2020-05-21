//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/NSXPCListenerDelegate-Protocol.h>

@class CUHomeKitManager, NSData, NSMutableSet, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface CUPairingDaemon : NSObject <NSXPCListenerDelegate>
{
    CUHomeKitManager *_homeKitManager;
    int _rpIdentityNotifier;
    NSData *_rpSelfIRK;
    unsigned long long _stateHandle;
    NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
    BOOL _testMode;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedPairingDaemon;
- (void).cxx_destruct;
@property(nonatomic) BOOL testMode; // @synthesize testMode=_testMode;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (int)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3;
- (int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3;
- (int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2;
- (int)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3;
- (int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(BOOL)arg3;
- (int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2;
- (id)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;
- (id)_findHomeKitExPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;
- (id)_findHomeKitPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;
- (id)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int *)arg3;
- (void)_removeDups:(id)arg1;
- (id)_copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (id)copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (int)_saveIdentity:(id)arg1 options:(unsigned long long)arg2;
- (int)_deleteIdentityWithOptions:(unsigned long long)arg1;
- (int)deleteIdentityWithOptions:(unsigned long long)arg1;
- (id)_copyIdentityWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyOrCreateWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyHomeKitExWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyHomeKitWithOptionsKeychain:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyHomeKitWithOptionsHAP:(unsigned long long)arg1 error:(int *)arg2;
- (id)_copyHomeKitWithOptions:(unsigned long long)arg1 error:(int *)arg2;
- (id)copyIdentityWithOptions:(unsigned long long)arg1 error:(int *)arg2;
@property(readonly, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
- (void)_rpIdentityUpdate;
- (void)reset;
- (void)_connectionInvalidated:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (id)detailedDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

