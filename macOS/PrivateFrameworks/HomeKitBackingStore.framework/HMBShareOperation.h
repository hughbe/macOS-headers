//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class HMBCloudZone, NAFuture, NSString;

__attribute__((visibility("hidden")))
@interface HMBShareOperation : HMFOperation <HMFLogging>
{
    HMBCloudZone *_cloudZone;
    CDUnknownBlockType _block;
    NAFuture *_future;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) NAFuture *future; // @synthesize future=_future;
@property(readonly, copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
- (void)main;
- (void)cancelWithError:(id)arg1;
- (id)initWithCloudZone:(id)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

