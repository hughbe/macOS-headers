//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/IDSLink-Protocol.h>

@class NSIndexSet, NSString;
@protocol IDSLinkDelegate;

@interface IDSTCPLink : NSObject <IDSLink>
{
    int _addressFamily;
    BOOL _isSSL;
    struct IDSTCPConnection_ *_conns;
    CDUnknownBlockType _getPacketLength;
    struct IDSTCPLinkCounter_ _counters;
    struct IDSTCPLinkCounter_ _previousCounters;
    double _previousReportTime;
    NSString *_cbuuid;
    NSString *_deviceUniqueID;
    id <IDSLinkDelegate> _delegate;
    id <IDSLinkDelegate> _alternateDelegate;
    unsigned long long _state;
    NSIndexSet *_cellularInterfaceIndices;
    BOOL _wifiAssistEnabled;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL wifiAssistEnabled; // @synthesize wifiAssistEnabled=_wifiAssistEnabled;
@property(retain, nonatomic) NSIndexSet *cellularInterfaceIndices; // @synthesize cellularInterfaceIndices=_cellularInterfaceIndices;
@property __weak id <IDSLinkDelegate> alternateDelegate; // @synthesize alternateDelegate=_alternateDelegate;
@property(readonly) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) BOOL isSSL; // @synthesize isSSL=_isSSL;
@property __weak id <IDSLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(retain) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
- (void)setWiFiAssistState:(BOOL)arg1;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2;
- (unsigned long long)sendPacketBufferArray:(CDStruct_183601bc **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
- (unsigned long long)sendPacketBuffer:(CDStruct_4c86a2e2 *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (void)processIncomingPacket:(CDStruct_4c86a2e2 *)arg1;
- (BOOL)disconnect:(struct sockaddr_in *)arg1 remoteAddress:(struct sockaddr_in *)arg2;
- (BOOL)connect:(int)arg1 localAddress:(struct sockaddr *)arg2 portRange:(unsigned short)arg3 remoteAddress:(struct sockaddr *)arg4 clientUUID:(unsigned char [16])arg5 completionHandler:(CDUnknownBlockType)arg6;
- (struct IDSTCPConnection_ *)_getIDSTCPConnection:(CDStruct_4c86a2e2 *)arg1;
- (long long)getPacketLength:(CDStruct_4c86a2e2 *)arg1 isChannelData:(char *)arg2;
- (id)copyLinkStatsDict;
@property(readonly, getter=linkTypeString) NSString *linkTypeString;
@property(readonly) unsigned long long headerOverhead;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 isSSL:(BOOL)arg3 getPacketLength:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

