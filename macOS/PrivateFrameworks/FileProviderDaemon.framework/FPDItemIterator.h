//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProviderDaemon/FPDIterator.h>

#import <FileProviderDaemon/FPDLifetimeExtender-Protocol.h>
#import <FileProviderDaemon/FPXEnumeratorObserver-Protocol.h>

@class FPDDomain, FPDExtension, FPItem, NSError, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDItemIterator : FPDIterator <FPXEnumeratorObserver, FPDLifetimeExtender>
{
    NSObject<OS_dispatch_queue> *_queue;
    FPItem *_current;
    unsigned long long _numFoldersPoped;
    BOOL _done;
    NSError *_error;
    NSMutableArray *_enumeratorByDepth;
    NSMutableArray *_remainingItemsByDepth;
    FPDExtension *_provider;
    FPDDomain *_domain;
}

- (void).cxx_destruct;
@property(readonly) NSString *prettyDescription;
@property(readonly) int requestEffectivePID;
- (void)didUpdateItem:(id)arg1;
- (void)enumerationResultsDidChange;
- (void)dealloc;
- (unsigned long long)numFoldersPopped;
- (BOOL)done;
- (void)_invalidateWithError:(id)arg1;
- (id)error;
- (id)nextWithError:(id *)arg1;
- (void)_next;
- (BOOL)_shouldTraverseSubTree:(id)arg1;
- (void)_decorateItem:(id)arg1;
- (BOOL)_enumerateMoreItems;
- (BOOL)_createEnumerator;
- (id)_popItem;
- (void)_pushFolder:(id)arg1;
- (void)_popFolder;
- (id)initWithItem:(id)arg1 provider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

