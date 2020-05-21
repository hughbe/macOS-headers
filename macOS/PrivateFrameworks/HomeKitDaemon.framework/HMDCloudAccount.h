//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface HMDCloudAccount : HMFObject
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSOperationQueue *_queue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void)addAccountOperation:(CDUnknownBlockType)arg1;
- (id)initWithClientQueue:(id)arg1;

@end

