//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLCounterSampleBuffer-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface MTLToolsCounterSampleBuffer : MTLToolsObject <MTLCounterSampleBuffer>
{
}

- (id)resolveCounterRange:(struct _NSRange)arg1;
@property(readonly) unsigned long long sampleCount;
@property(readonly) NSString *label;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

