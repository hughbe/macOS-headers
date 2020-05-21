//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSFileProviderXPCInterface-Protocol.h>

@class NSFileProviderProxy, NSString;
@protocol NSFileProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFileProviderXPCMessenger : NSObject <NSFileProviderXPCInterface>
{
    id <NSFileProvider> _fileProvider;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileProviderProxy *_fileProviderProxy;
}

- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)movingItemAtURL:(id)arg1 requiresProvidingWithDestinationURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (oneway void)observeEndOfWriteAtURL:(id)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3;
- (oneway void)observePresentationChangeOfKind:(id)arg1 forPresenterWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 observedUbiquityAttributes:(id)arg4 url:(id)arg5 newURL:(id)arg6;
- (void)providePhysicalItemForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)cancelProvidingItemAtURL:(id)arg1 forClaimWithID:(id)arg2;
- (void)provideItemAtURL:(id)arg1 forClaimWithID:(id)arg2 madeByClientWithProcessIdentifier:(int)arg3 options:(unsigned long long)arg4 kernelOperation:(unsigned int)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 options:(unsigned long long)arg3 forAccessClaimWithID:(id)arg4 processIdentifier:(int)arg5 kernelOperation:(unsigned int)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)checkInProviderWithReply:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFileProviderProxy:(id)arg1;
- (id)initWithFileProvider:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

