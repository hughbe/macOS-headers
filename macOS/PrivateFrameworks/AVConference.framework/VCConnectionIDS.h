//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCConnectionProtocol-Protocol.h>

@class IDSDataChannelLinkContext, NSData, NSString, NSUUID, VCDatagramChannelIDS;

__attribute__((visibility("hidden")))
@interface VCConnectionIDS : NSObject <VCConnectionProtocol>
{
    IDSDataChannelLinkContext *_linkContext;
    unsigned int _datagramChannelToken;
    VCDatagramChannelIDS *_datagramChannel;
    int _priority;
    unsigned int _type;
    int _localCellTech;
    int _remoteCellTech;
    int _connectionMTU;
    unsigned int _uplinkBitrateCap;
    unsigned int _downlinkBitrateCap;
    BOOL _isLocalConstrained;
    BOOL _isRemoteConstrained;
}

+ (unsigned int)worstCaseNetworkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(BOOL)arg2;
@property(readonly) BOOL isRemoteConstrained; // @synthesize isRemoteConstrained=_isRemoteConstrained;
@property(readonly) BOOL isLocalConstrained; // @synthesize isLocalConstrained=_isLocalConstrained;
@property unsigned int downlinkBitrateCap; // @synthesize downlinkBitrateCap=_downlinkBitrateCap;
@property unsigned int uplinkBitrateCap; // @synthesize uplinkBitrateCap=_uplinkBitrateCap;
@property(readonly) unsigned int type; // @synthesize type=_type;
@property int priority; // @synthesize priority=_priority;
@property(readonly) VCDatagramChannelIDS *datagramChannel; // @synthesize datagramChannel=_datagramChannel;
@property(readonly) unsigned int datagramChannelToken; // @synthesize datagramChannelToken=_datagramChannelToken;
- (BOOL)matchesChannelTokenWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (BOOL)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
@property(readonly) unsigned char linkID;
- (BOOL)isOnSameInterfacesAndQRSessionWithConnection:(id)arg1;
- (BOOL)isOnSameQRSessionWithConnection:(id)arg1;
- (BOOL)isOnSameInterfacesWithConnection:(id)arg1;
- (BOOL)isSameAsConnection:(id)arg1;
@property int remoteCellTech;
@property int localCellTech;
- (void)setCellularMTU:(int)arg1;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
@property(readonly) NSString *remoteInterfaceTypeString;
@property(readonly) NSString *localInterfaceTypeString;
@property(readonly) int remoteConnectionType;
@property(readonly) int localConnectionType;
@property(readonly) NSUUID *connectionUUID;
- (int)networkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(BOOL)arg2;
@property int connectionMTU;
- (id)connectionQRSessionID;
@property(readonly) BOOL serverIsDegraded;
@property(readonly) BOOL isRelay;
@property(readonly) BOOL isVPN;
@property(readonly) int connectionId;
@property(readonly) BOOL isIPv6;
@property(readonly) BOOL isRemoteOnCellular;
@property(readonly) BOOL isLocalOnCellular;
@property(readonly) BOOL isRemoteOnWiFi;
@property(readonly) BOOL isLocalOnWiFi;
@property(readonly) NSData *sharedDigestKey;
@property(readonly) NSString *relaySessionToken;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithLinkContext:(id)arg1 dataChannelToken:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

