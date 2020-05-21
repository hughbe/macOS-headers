//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLMediaLibraryImpl, NSDictionary;

@interface MLMediaLibrary : NSObject
{
    MLMediaLibraryImpl *_impl;
}

+ (void)unboxURLWithKey1:(id)arg1 key2:(id)arg2 inDictionary:(id)arg3;
+ (void)initialize;
- (void)cacheDeletePeriodic:(id)arg1 urgency:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cacheDeleteCancel;
- (void)cacheDeletePurge:(id)arg1 urgency:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cacheDeletePurgeable:(id)arg1 urgency:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)mediaObjectAttributesExpectedClasses;
- (void)setMediaSources:(id)arg1;
@property(readonly, copy) NSDictionary *mediaSources;
- (void)xpcConnectionWasInterrupted;
- (BOOL)outboundRequestInFlight;
- (void)setOutboundRequestInFlight:(BOOL)arg1;
- (id)outboundRequestCondition;
- (id)outboundRequestQueue;
- (id)service;
- (void)dealloc;
- (id)init;
- (id)initWithOptions:(id)arg1;

@end

