//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>
#import <Rapport/RPPrivateDiscoveryXPCClientInterface-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface RPPrivateDiscovery : NSObject <NSSecureCoding, RPPrivateDiscoveryXPCClientInterface>
{
    BOOL _activateCalled;
    BOOL _changesPending;
    BOOL _direct;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    unsigned int _clientID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _endpointFoundHandler;
    CDUnknownBlockType _endpointLostHandler;
    CDUnknownBlockType _endpointChangedHandler;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_serviceType;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned int clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType endpointChangedHandler; // @synthesize endpointChangedHandler=_endpointChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType endpointLostHandler; // @synthesize endpointLostHandler=_endpointLostHandler;
@property(copy, nonatomic) CDUnknownBlockType endpointFoundHandler; // @synthesize endpointFoundHandler=_endpointFoundHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)xpcPrivateDiscoveryEndpointChanged:(id)arg1;
- (void)xpcPrivateDiscoveryEndpointLost:(id)arg1;
- (void)xpcPrivateDiscoveryEndpointFound:(id)arg1;
- (void)_update;
- (void)_updateIfNeededWithBlock:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_invalidateDirect;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateXPC:(BOOL)arg1;
- (void)_activateDirect;
- (void)activate;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

