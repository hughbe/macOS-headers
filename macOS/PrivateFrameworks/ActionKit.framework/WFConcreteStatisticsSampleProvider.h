//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import <ActionKit/WFStatisticsSampleProvider-Protocol.h>

@class NSArray, NSObject, NSString;
@protocol WFStatisticsSampleProvider;

@interface WFConcreteStatisticsSampleProvider : NSProxy <WFStatisticsSampleProvider>
{
    NSObject<WFStatisticsSampleProvider> *_sampleProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<WFStatisticsSampleProvider> *sampleProvider; // @synthesize sampleProvider=_sampleProvider;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithSampleProvider:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BOOL canProvideDataSamples; // @dynamic canProvideDataSamples;
@property(readonly, nonatomic) NSArray *dataSamples; // @dynamic dataSamples;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

