//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUActivatable-Protocol.h>

@class RPCompanionLinkClient, RPCompanionLinkDevice;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CULiveAudioPeerSession : NSObject <CUActivatable>
{
    RPCompanionLinkClient *_clinkClient;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    RPCompanionLinkDevice *_destinationDevice;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RPCompanionLinkDevice *destinationDevice; // @synthesize destinationDevice=_destinationDevice;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)sendAudioDataEvent:(id)arg1;
- (void)invalidate;
- (void)_activateCompleted:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;

@end

