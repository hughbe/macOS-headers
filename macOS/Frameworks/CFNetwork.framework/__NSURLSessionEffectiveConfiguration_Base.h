//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSHTTPCookieStorage, NSNumber, NSSet, NSString, NSURL, NSURLCache, NSURLCredentialStorage, NSURLSessionConfiguration;
@protocol NSURLSessionAppleIDContext;

@interface __NSURLSessionEffectiveConfiguration_Base : NSObject <NSSecureCoding, NSCopying>
{
    NSURLSessionConfiguration *_config;
}

+ (BOOL)supportsSecureCoding;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_sessionConfiguration;
- (id)_initWithMeOther:(id)arg1;
- (id)_initWithConfiguration:(id)arg1;
- (id)description;
- (const void *)_copyAttribute:(struct __CFString *)arg1;

// Remaining properties
@property(readonly, copy) NSDictionary *HTTPAdditionalHeaders; // @dynamic HTTPAdditionalHeaders;
@property(readonly, retain) NSHTTPCookieStorage *HTTPCookieStorage; // @dynamic HTTPCookieStorage;
@property(readonly, retain) NSURLCache *URLCache; // @dynamic URLCache;
@property(readonly, retain) NSURLCredentialStorage *URLCredentialStorage; // @dynamic URLCredentialStorage;
@property(readonly) unsigned long long _TCPAdaptiveReadTimeout; // @dynamic _TCPAdaptiveReadTimeout;
@property(readonly) unsigned long long _TCPAdaptiveWriteTimeout; // @dynamic _TCPAdaptiveWriteTimeout;
@property(readonly) BOOL _allowsConstrainedNetworkAccess; // @dynamic _allowsConstrainedNetworkAccess;
@property(readonly) BOOL _allowsExpensiveAccess; // @dynamic _allowsExpensiveAccess;
@property(readonly) BOOL _allowsIndefiniteConnections; // @dynamic _allowsIndefiniteConnections;
@property(readonly) BOOL _allowsMultipathTCP; // @dynamic _allowsMultipathTCP;
@property(readonly) BOOL _allowsPowerNapScheduling; // @dynamic _allowsPowerNapScheduling;
@property(readonly) BOOL _allowsResponseMonitoringDuringBodyTranmission; // @dynamic _allowsResponseMonitoringDuringBodyTranmission;
@property(readonly) BOOL _allowsTCPFastOpen; // @dynamic _allowsTCPFastOpen;
@property(readonly) BOOL _allowsTLSFalseStart; // @dynamic _allowsTLSFalseStart;
@property(readonly) BOOL _allowsTLSSessionResumption; // @dynamic _allowsTLSSessionResumption;
@property(readonly) BOOL _allowsTLSSessionTickets; // @dynamic _allowsTLSSessionTickets;
@property(readonly) BOOL _allowsWCA; // @dynamic _allowsWCA;
@property(readonly) BOOL _alwaysPerformDefaultTrustEvaluation; // @dynamic _alwaysPerformDefaultTrustEvaluation;
@property(readonly, copy) id <NSURLSessionAppleIDContext> _appleIDContext; // @dynamic _appleIDContext;
@property(readonly, copy) NSSet *_authenticatorStatusCodes; // @dynamic _authenticatorStatusCodes;
@property(readonly) BOOL _clientIsNotExplicitlyDiscretionary; // @dynamic _clientIsNotExplicitlyDiscretionary;
@property(readonly, copy) NSString *_companionAppBundleIdentifier; // @dynamic _companionAppBundleIdentifier;
@property(readonly, copy) NSString *_connectionPoolName; // @dynamic _connectionPoolName;
@property(readonly) unsigned long long _customReadBufferSize; // @dynamic _customReadBufferSize;
@property(readonly) double _customReadBufferTimeout; // @dynamic _customReadBufferTimeout;
@property(readonly, copy) NSURL *_directoryForDownloadedFiles; // @dynamic _directoryForDownloadedFiles;
@property(readonly) BOOL _duetPreauthorized; // @dynamic _duetPreauthorized;
@property(readonly) long long _expiredDNSBehavior; // @dynamic _expiredDNSBehavior;
@property(readonly) unsigned long long _forcedNetworkServiceType; // @dynamic _forcedNetworkServiceType;
@property(readonly) BOOL _forcesNewConnections; // @dynamic _forcesNewConnections;
@property(readonly, copy) NSNumber *_maximumWatchCellularTransferSize; // @dynamic _maximumWatchCellularTransferSize;
@property(readonly) unsigned long long _multipathAlternatePort; // @dynamic _multipathAlternatePort;
@property(readonly) BOOL _onBehalfOfPairedDevice; // @dynamic _onBehalfOfPairedDevice;
@property(readonly) BOOL _preventsAppSSO; // @dynamic _preventsAppSSO;
@property(readonly) BOOL _preventsIdleSleepOnceConnected; // @dynamic _preventsIdleSleepOnceConnected;
@property(readonly) BOOL _preventsSystemHTTPProxyAuthentication; // @dynamic _preventsSystemHTTPProxyAuthentication;
@property(readonly) BOOL _reportsDataStalls; // @dynamic _reportsDataStalls;
@property(readonly) BOOL _requiresPowerPluggedIn; // @dynamic _requiresPowerPluggedIn;
@property(readonly) BOOL _requiresSecureHTTPSProxyConnection; // @dynamic _requiresSecureHTTPSProxyConnection;
@property(readonly) BOOL _requiresSustainedDataDelivery; // @dynamic _requiresSustainedDataDelivery;
@property(readonly) BOOL _respectsAllowsCellularAccessForDiscretionaryTasks; // @dynamic _respectsAllowsCellularAccessForDiscretionaryTasks;
@property(readonly) BOOL _shouldSkipPreferredClientCertificateLookup; // @dynamic _shouldSkipPreferredClientCertificateLookup;
@property(readonly, copy) NSData *_sourceApplicationAuditTokenData; // @dynamic _sourceApplicationAuditTokenData;
@property(readonly, copy) NSString *_sourceApplicationBundleIdentifier; // @dynamic _sourceApplicationBundleIdentifier;
@property(readonly, copy) NSString *_sourceApplicationSecondaryIdentifier; // @dynamic _sourceApplicationSecondaryIdentifier;
@property(readonly, copy) NSSet *_suppressedAutoAddedHTTPHeaders; // @dynamic _suppressedAutoAddedHTTPHeaders;
@property(readonly, copy) NSString *_tcpConnectionPoolName; // @dynamic _tcpConnectionPoolName;
@property(readonly) long long _timingDataOptions; // @dynamic _timingDataOptions;
@property(readonly, copy) NSString *_tlsTrustPinningPolicyName; // @dynamic _tlsTrustPinningPolicyName;
@property(readonly) BOOL allowsCellularAccess; // @dynamic allowsCellularAccess;
@property(readonly) BOOL allowsConstrainedNetworkAccess; // @dynamic allowsConstrainedNetworkAccess;
@property(readonly) BOOL allowsExpensiveNetworkAccess; // @dynamic allowsExpensiveNetworkAccess;
@property(readonly, getter=isDiscretionary) BOOL discretionary; // @dynamic discretionary;
@property(readonly, copy) NSArray *protocolClasses; // @dynamic protocolClasses;
@property(readonly) BOOL shouldUseExtendedBackgroundIdleMode; // @dynamic shouldUseExtendedBackgroundIdleMode;
@property(readonly) double timeoutIntervalForResource; // @dynamic timeoutIntervalForResource;
@property(readonly) BOOL waitsForConnectivity; // @dynamic waitsForConnectivity;

@end

