//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HPDClient, NSDictionary, NSMapTable, NSSet;
@protocol OS_dispatch_queue;

@interface HPDSearchManager : NSObject
{
    NSDictionary *_cachedBooks;
    HPDClient *_client;
    NSMapTable *_clientMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (BOOL)isClient;
+ (id)sharedSearchManager;
+ (id)new;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain) NSMapTable *clientMap; // @synthesize clientMap=_clientMap;
@property(retain) HPDClient *client; // @synthesize client=_client;
- (id)bookContainingFileAtPath:(id)arg1;
- (BOOL)registerBookWithIdentifier:(id)arg1 appBundleURL:(id)arg2 bookVersion:(id)arg3 bookURL:(id)arg4;
- (id)cachedBookList;
- (id)cachedBookWithIdentifier:(id)arg1;
- (id)bookWithIdentifier:(id)arg1;
@property(readonly) NSSet *indexedBookIDs;
@property(readonly, copy) NSDictionary *bookList;
@property(retain) NSDictionary *cachedBooks; // @synthesize cachedBooks=_cachedBooks;
- (BOOL)searchForString:(id)arg1 inBooks:(id)arg2 withDelegate:(id)arg3 options:(id)arg4 contextInfo:(const void *)arg5;
- (BOOL)cancelQuery:(id)arg1;
- (BOOL)searchForString:(id)arg1 inBooks:(id)arg2 withDelegate:(id)arg3 options:(id)arg4;
- (BOOL)cancelQuery:(id)arg1 withDelegate:(id)arg2;
- (BOOL)performQuery:(id)arg1 withDelegate:(id)arg2;
- (id)_delegateForClient:(id)arg1;
- (id)_clientForDelegate:(id)arg1;
- (id)_init;
- (void)client:(id)arg1 helpQueryDidFinishSearching:(id)arg2;
- (void)client:(id)arg1 helpQuery:(id)arg2 didEncounterError:(id)arg3;
- (void)client:(id)arg1 helpQuery:(id)arg2 didReturnActions:(id)arg3;
- (void)client:(id)arg1 helpQuery:(id)arg2 didReturnSuggestions:(id)arg3;
- (void)client:(id)arg1 helpQuery:(id)arg2 didReturnResults:(id)arg3;

@end

