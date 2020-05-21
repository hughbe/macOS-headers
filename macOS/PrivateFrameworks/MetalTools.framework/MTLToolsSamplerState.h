//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLSamplerState-Protocol.h>
#import <MetalTools/MTLSamplerStateSPI-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface MTLToolsSamplerState : MTLToolsObject <MTLSamplerState, MTLSamplerStateSPI>
{
}

@property(readonly, nonatomic) unsigned long long pixelFormat;
@property(readonly) unsigned long long uniqueIdentifier;
@property(nonatomic) unsigned long long resourceIndex;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSString *label;
- (void)dealloc;
- (void)acceptVisitor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

