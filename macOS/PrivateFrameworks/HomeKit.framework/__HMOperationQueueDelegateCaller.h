//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMDelegateCaller.h>

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface __HMOperationQueueDelegateCaller : HMDelegateCaller
{
    NSOperationQueue *_queue;
}

- (void).cxx_destruct;
- (void)invokeBlock:(CDUnknownBlockType)arg1;
- (id)initWithOperationQueue:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

