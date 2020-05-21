//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDAssertion;
@protocol OS_dispatch_source;

@interface PDAssertionRequest : NSObject
{
    PDAssertion *_assertion;
    CDUnknownBlockType _resultHandler;
    NSObject<OS_dispatch_source> *_invalidationTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *invalidationTimer; // @synthesize invalidationTimer=_invalidationTimer;
@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(retain, nonatomic) PDAssertion *assertion; // @synthesize assertion=_assertion;
- (unsigned long long)hash;
- (id)initWithAssertion:(id)arg1 delegate:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end

