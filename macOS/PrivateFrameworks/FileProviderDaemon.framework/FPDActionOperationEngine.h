//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPDServer, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDActionOperationEngine : NSObject
{
    FPDServer *_server;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
- (void)dumpStateTo:(id)arg1;
- (id)inFlightOperations;
- (void)scheduleActionOperationWithInfo:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithServer:(id)arg1;
- (id)init;

@end

