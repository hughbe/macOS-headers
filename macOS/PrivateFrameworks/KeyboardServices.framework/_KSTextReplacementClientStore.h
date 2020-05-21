//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardServices/_KSTextReplacementCancellation-Protocol.h>
#import <KeyboardServices/_KSTextReplacementStoreProtocol-Protocol.h>

@class NSString, _KSTextReplacementServerConnection;

@interface _KSTextReplacementClientStore : NSObject <_KSTextReplacementStoreProtocol, _KSTextReplacementCancellation>
{
    _KSTextReplacementServerConnection *_connection;
}

- (void).cxx_destruct;
- (id)phraseShortcuts;
- (void)performTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)queryTextReplacementsWithCallback:(CDUnknownBlockType)arg1;
- (id)textReplacementEntries;
- (void)cancelPendingUpdates;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)removeAllEntries;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)modifyEntry:(id)arg1 toEntry:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

