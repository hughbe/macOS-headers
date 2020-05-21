//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEExtensionTunnelProviderContext.h>

#import <NetworkExtension/NEExtensionPacketTunnelProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEExtensionPacketTunnelProviderProtocol-Protocol.h>

@class NSString;

@interface NEExtensionPacketTunnelProviderContext : NEExtensionTunnelProviderContext <NEExtensionPacketTunnelProviderProtocol, NEExtensionPacketTunnelProviderHostProtocol>
{
}

+ (BOOL)extensionHasACRequirement;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (id)extensionPoint;
- (void)setTunnelConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestSocket:(BOOL)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchVirtualInterfaceTypeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setVirtualInterfaceSocket:(id)arg1;
- (void)stopWithReason:(int)arg1;
- (void)startWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)completeSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

