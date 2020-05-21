//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioVideoBridging/NSObject-Protocol.h>

@class AVB17221ACMPInterface, AVB17221AECPInterface, AVB17221EntityDiscovery, AVB1722MAAP, AVBInterface, AVBInterfaceStreamingManager, AVBMSRPDomain, AVBMSRPListener, AVBMSRPTalker, AVBMVRP, AVBgPTPEthernetPort;

@protocol AVBInterfaceDelegate <NSObject>

@optional
- (void)didRemoveInterfaceStreamingManager:(AVBInterfaceStreamingManager *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didAddInterfaceStreamingManager:(AVBInterfaceStreamingManager *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didRemoveLinkLayerPort:(AVBgPTPEthernetPort *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didAddLinkLayerPort:(AVBgPTPEthernetPort *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didTerminateControllerForInterface:(AVBInterface *)arg1;
- (void)didRemoveMAAP:(AVB1722MAAP *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didAddMAAP:(AVB1722MAAP *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didRemoveACMP:(AVB17221ACMPInterface *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didAddACMP:(AVB17221ACMPInterface *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didRemoveAECP:(AVB17221AECPInterface *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didAddAECP:(AVB17221AECPInterface *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didRemoveMSRPTalker:(AVBMSRPTalker *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didAddMSRPTalker:(AVBMSRPTalker *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didRemoveMSRPListener:(AVBMSRPListener *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didAddMSRPListener:(AVBMSRPListener *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didRemoveMSRPDomain:(AVBMSRPDomain *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didAddMSRPDomain:(AVBMSRPDomain *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didRemoveMVRP:(AVBMVRP *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didAddMVRP:(AVBMVRP *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didRemoveEntityDiscovery:(AVB17221EntityDiscovery *)arg1 onInterface:(AVBInterface *)arg2;
- (void)didAddEntityDiscovery:(AVB17221EntityDiscovery *)arg1 onInterface:(AVBInterface *)arg2;
@end

