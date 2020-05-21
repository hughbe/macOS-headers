//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLCommandEncoder.h>

#import <Metal/MTLDebugCommandEncoder-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface _MTLDebugCommandEncoder : _MTLCommandEncoder <MTLDebugCommandEncoder>
{
}

- (void)IOLogBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)IOLog:(id)arg1;
- (void)kprintf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

