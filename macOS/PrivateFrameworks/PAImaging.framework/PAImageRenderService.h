//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, PAImageRenderRequestHandler, PATimer;
@protocol OS_dispatch_queue;

@interface PAImageRenderService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_requestHandlers;
    PAImageRenderRequestHandler *_currentRequestHandler;
    NSMutableSet *_completingRequestHandlers;
    PATimer *_timer;
}

+ (id)imageRenderService;
- (void).cxx_destruct;
- (void)_requestHandlerDidComplete:(id)arg1;
- (void)requestHandlerDidComplete:(id)arg1;
- (void)_requestHandlerWillComplete:(id)arg1;
- (void)requestHandlerWillComplete:(id)arg1;
- (void)_processNextRequest;
- (void)_processNextRequestIfNeeded;
- (id)_popRequestHandler;
- (void)_pushRequestHandler:(id)arg1;
- (void)_submitRequestWithHandler:(id)arg1;
- (void)submitRequest:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;

@end

