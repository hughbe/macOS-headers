//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPXEnumerator-Protocol.h>

@class FPDAccessControlServicer, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _FPDAccessControlEnumerator : NSObject <FPXEnumerator>
{
    NSNumber *_bundleKey;
    FPDAccessControlServicer *_servicer;
    NSNumber *_limit;
}

- (void).cxx_destruct;
- (void)enumeratorBecameFrontmost:(BOOL)arg1 inWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)keepAliveConnectionForRegisteredObserver:(CDUnknownBlockType)arg1;
- (void)enumerateChangesFromToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)enumerateItemsFromPage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)currentSyncAnchorWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchOnDB:(id)arg1 withOffset:(unsigned long long)arg2;
- (id)initWithBundleIdentifier:(id)arg1 servicer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

