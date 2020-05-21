//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDStoreKitClientProtocol-Protocol.h>

@class NSMapTable, NSString;

@interface ASDStoreKitClientBroker : NSObject <ASDStoreKitClientProtocol>
{
    NSMapTable *_clients;
}

+ (id)defaultBroker;
- (void).cxx_destruct;
- (void)shouldContinueTransaction:(id)arg1 withNewStorefront:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)storefrontChanged:(id)arg1;
- (void)downloadRemoved:(id)arg1;
- (void)downloadStatusChanged:(id)arg1;
- (void)downloadAdded:(id)arg1;
- (void)removedTransactions:(id)arg1;
- (void)updatedTransactions:(id)arg1;
- (void)unregisterClientWithIdentifier:(id)arg1;
- (void)registerClient:(id)arg1 withIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

