//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class SVXSpeechSynthesisRequest;

@protocol SVXClientSpeechSynthesisServicing <NSObject>
- (void)stopRequest:(SVXSpeechSynthesisRequest *)arg1;
- (void)cancelPendingRequest:(SVXSpeechSynthesisRequest *)arg1;
- (void)enqueueRequest:(SVXSpeechSynthesisRequest *)arg1 completion:(void (^)(SVXSpeechSynthesisResult *))arg2;
@end

