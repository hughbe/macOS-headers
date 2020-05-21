//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEPacketTunnelProvider.h>

@class NEIKEv2MOBIKE, NEIKEv2Rekey, NEIKEv2Server, NEIKEv2Session, NEUserNotification, NSArray, NSDictionary, NSObject, NWPath, NWPathEvaluator, NWResolver;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface NEIKEv2PacketTunnelProvider : NEPacketTunnelProvider
{
    BOOL _isIfCellular;
    BOOL _hasNAT;
    BOOL _dispose;
    BOOL _sessionDidConnect;
    BOOL _mobikeCapable;
    BOOL _authenticationPrompted;
    unsigned int _flags;
    NSArray *_ikeConfig;
    NSArray *_localTrafficSelectors;
    NSArray *_remoteTrafficSelectors;
    NSDictionary *_options;
    struct NEVirtualInterface_s *_virtualInterface;
    NEIKEv2Server *_serverAddresses;
    NWResolver *_resolver;
    NSObject<OS_dispatch_source> *_resolverWaitTimer;
    NEIKEv2Rekey *_rekey;
    NSObject<OS_dispatch_semaphore> *_getSocketSemaphore;
    NEIKEv2MOBIKE *_mobikeHandle;
    CDUnknownBlockType _startTunnelCompletionHandler;
    CDUnknownBlockType _dnsResolverCompletionHandler;
    long long _tunnelKind;
    NWPath *_path;
    NEUserNotification *_g_notification;
    NEIKEv2Session *_session;
    unsigned long long _ifIndex;
    long long _pathStatus;
    NSObject<OS_dispatch_queue> *_queue;
    NWPathEvaluator *_scopedPathEvaluator;
}

- (void).cxx_destruct;
@property(retain) NWPathEvaluator *scopedPathEvaluator; // @synthesize scopedPathEvaluator=_scopedPathEvaluator;
@property unsigned int flags; // @synthesize flags=_flags;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property long long pathStatus; // @synthesize pathStatus=_pathStatus;
@property unsigned long long ifIndex; // @synthesize ifIndex=_ifIndex;
@property(retain) NEIKEv2Session *session; // @synthesize session=_session;
@property(retain) NEUserNotification *g_notification; // @synthesize g_notification=_g_notification;
@property BOOL authenticationPrompted; // @synthesize authenticationPrompted=_authenticationPrompted;
@property(retain) NWPath *path; // @synthesize path=_path;
@property BOOL mobikeCapable; // @synthesize mobikeCapable=_mobikeCapable;
@property BOOL sessionDidConnect; // @synthesize sessionDidConnect=_sessionDidConnect;
@property long long tunnelKind; // @synthesize tunnelKind=_tunnelKind;
@property BOOL dispose; // @synthesize dispose=_dispose;
@property(copy) CDUnknownBlockType dnsResolverCompletionHandler; // @synthesize dnsResolverCompletionHandler=_dnsResolverCompletionHandler;
@property(copy) CDUnknownBlockType startTunnelCompletionHandler; // @synthesize startTunnelCompletionHandler=_startTunnelCompletionHandler;
@property(retain) NEIKEv2MOBIKE *mobikeHandle; // @synthesize mobikeHandle=_mobikeHandle;
@property(retain) NSObject<OS_dispatch_semaphore> *getSocketSemaphore; // @synthesize getSocketSemaphore=_getSocketSemaphore;
@property(retain) NEIKEv2Rekey *rekey; // @synthesize rekey=_rekey;
@property(retain) NSObject<OS_dispatch_source> *resolverWaitTimer; // @synthesize resolverWaitTimer=_resolverWaitTimer;
@property(retain) NWResolver *resolver; // @synthesize resolver=_resolver;
@property(retain) NEIKEv2Server *serverAddresses; // @synthesize serverAddresses=_serverAddresses;
@property BOOL hasNAT; // @synthesize hasNAT=_hasNAT;
@property BOOL isIfCellular; // @synthesize isIfCellular=_isIfCellular;
@property struct NEVirtualInterface_s *virtualInterface; // @synthesize virtualInterface=_virtualInterface;
@property(retain) NSDictionary *options; // @synthesize options=_options;
@property(retain) NSArray *remoteTrafficSelectors; // @synthesize remoteTrafficSelectors=_remoteTrafficSelectors;
@property(retain) NSArray *localTrafficSelectors; // @synthesize localTrafficSelectors=_localTrafficSelectors;
@property(retain) NSArray *ikeConfig; // @synthesize ikeConfig=_ikeConfig;
- (BOOL)NEIKEv2ProviderAuthenticate:(id)arg1;
- (BOOL)tryAlternateServerAddresses;
- (void)setTunnelNetworkSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startRekeyTimer:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observerHelperHandler:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleConfigChange;
- (void)handleDNSResolution;
- (void)handleScopedPathChange;
- (void)watchIKESocketChange;
- (void)handleDefaultPathChange;
- (void)handleInterfaceChange:(BOOL)arg1;
- (void)handleInterfaceDown;
- (void)handleAdditionalServerAddressesNotification:(id)arg1;
- (int)handleRedirectNotification:(id)arg1;
- (void)invokeCancelTunnel:(int)arg1;
- (BOOL)invokeStartTunnelCompletionHandler:(id)arg1;
- (id)createPacketTunnelNetworkSettings;
- (long long)tunnelTeardown;
- (int)tunnelBringup;
- (void)setupIKEv2CallbackBlocks;
- (void)resolveServerAddressIfNeeded:(CDUnknownBlockType)arg1;
- (void)wake;
- (void)wakeIKEv2;
- (void)stopTunnelWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopIKEv2TunnelWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startTunnelWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startIKEv2TunnelWithOptions:(id)arg1;
- (void)dealloc;
- (void)reset:(BOOL)arg1;
- (id)init;
- (void)ignoreSigPipe;
- (id)description;
- (id)stringForTunnelKind;

@end

