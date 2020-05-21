//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/__NSURLSessionEffectiveConfiguration_Base.h>

@class NSArray, NSData, NSDictionary, NSHTTPCookieStorage, NSNumber, NSSet, NSString, NSURL, NSURLCache, NSURLCredentialStorage;
@protocol NSURLSessionAppleIDContext;

@interface NSURLSessionEffectiveConfiguration : __NSURLSessionEffectiveConfiguration_Base
{
}

+ (id)immutableEffectiveConfigurationFromConfig:(id)arg1;
+ (id)immutableEffectiveConfigurationFromSessionConfig:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy) NSDictionary *_socketStreamProperties; // @dynamic _socketStreamProperties;
@property double _connectionCacheCellPurgeTimeout; // @dynamic _connectionCacheCellPurgeTimeout;

// Remaining properties
@property(copy) NSDictionary *HTTPAdditionalHeaders; // @dynamic HTTPAdditionalHeaders;
@property(retain) NSHTTPCookieStorage *HTTPCookieStorage; // @dynamic HTTPCookieStorage;
@property(retain) NSURLCache *URLCache; // @dynamic URLCache;
@property(retain) NSURLCredentialStorage *URLCredentialStorage; // @dynamic URLCredentialStorage;
@property unsigned long long _TCPAdaptiveReadTimeout; // @dynamic _TCPAdaptiveReadTimeout;
@property unsigned long long _TCPAdaptiveWriteTimeout; // @dynamic _TCPAdaptiveWriteTimeout;
@property BOOL _allowsConstrainedNetworkAccess; // @dynamic _allowsConstrainedNetworkAccess;
@property BOOL _allowsExpensiveAccess; // @dynamic _allowsExpensiveAccess;
@property BOOL _allowsIndefiniteConnections; // @dynamic _allowsIndefiniteConnections;
@property BOOL _allowsMultipathTCP; // @dynamic _allowsMultipathTCP;
@property BOOL _allowsPowerNapScheduling; // @dynamic _allowsPowerNapScheduling;
@property BOOL _allowsResponseMonitoringDuringBodyTranmission; // @dynamic _allowsResponseMonitoringDuringBodyTranmission;
@property BOOL _allowsTCPFastOpen; // @dynamic _allowsTCPFastOpen;
@property BOOL _allowsTLSSessionResumption; // @dynamic _allowsTLSSessionResumption;
@property BOOL _allowsTLSSessionTickets; // @dynamic _allowsTLSSessionTickets;
@property BOOL _allowsWCA; // @dynamic _allowsWCA;
@property BOOL _alwaysPerformDefaultTrustEvaluation; // @dynamic _alwaysPerformDefaultTrustEvaluation;
@property(copy) id <NSURLSessionAppleIDContext> _appleIDContext; // @dynamic _appleIDContext;
@property(copy) NSSet *_authenticatorStatusCodes; // @dynamic _authenticatorStatusCodes;
@property BOOL _clientIsNotExplicitlyDiscretionary; // @dynamic _clientIsNotExplicitlyDiscretionary;
@property(copy) NSString *_companionAppBundleIdentifier; // @dynamic _companionAppBundleIdentifier;
@property(copy) NSString *_connectionPoolName; // @dynamic _connectionPoolName;
@property unsigned long long _customReadBufferSize; // @dynamic _customReadBufferSize;
@property double _customReadBufferTimeout; // @dynamic _customReadBufferTimeout;
@property(copy) NSURL *_directoryForDownloadedFiles; // @dynamic _directoryForDownloadedFiles;
@property BOOL _duetPreauthorized; // @dynamic _duetPreauthorized;
@property long long _expiredDNSBehavior; // @dynamic _expiredDNSBehavior;
@property unsigned long long _forcedNetworkServiceType; // @dynamic _forcedNetworkServiceType;
@property BOOL _forcesNewConnections; // @dynamic _forcesNewConnections;
@property(copy) NSNumber *_maximumWatchCellularTransferSize; // @dynamic _maximumWatchCellularTransferSize;
@property unsigned long long _multipathAlternatePort; // @dynamic _multipathAlternatePort;
@property BOOL _onBehalfOfPairedDevice; // @dynamic _onBehalfOfPairedDevice;
@property BOOL _preventsAppSSO; // @dynamic _preventsAppSSO;
@property BOOL _preventsIdleSleepOnceConnected; // @dynamic _preventsIdleSleepOnceConnected;
@property BOOL _preventsSystemHTTPProxyAuthentication; // @dynamic _preventsSystemHTTPProxyAuthentication;
@property BOOL _reportsDataStalls; // @dynamic _reportsDataStalls;
@property BOOL _requiresPowerPluggedIn; // @dynamic _requiresPowerPluggedIn;
@property BOOL _requiresSecureHTTPSProxyConnection; // @dynamic _requiresSecureHTTPSProxyConnection;
@property BOOL _requiresSustainedDataDelivery; // @dynamic _requiresSustainedDataDelivery;
@property BOOL _respectsAllowsCellularAccessForDiscretionaryTasks; // @dynamic _respectsAllowsCellularAccessForDiscretionaryTasks;
@property BOOL _shouldSkipPreferredClientCertificateLookup; // @dynamic _shouldSkipPreferredClientCertificateLookup;
@property(copy) NSData *_sourceApplicationAuditTokenData; // @dynamic _sourceApplicationAuditTokenData;
@property(copy) NSString *_sourceApplicationBundleIdentifier; // @dynamic _sourceApplicationBundleIdentifier;
@property(copy) NSString *_sourceApplicationSecondaryIdentifier; // @dynamic _sourceApplicationSecondaryIdentifier;
@property(copy) NSSet *_suppressedAutoAddedHTTPHeaders; // @dynamic _suppressedAutoAddedHTTPHeaders;
@property(copy) NSString *_tcpConnectionPoolName; // @dynamic _tcpConnectionPoolName;
@property long long _timingDataOptions; // @dynamic _timingDataOptions;
@property(copy) NSString *_tlsTrustPinningPolicyName; // @dynamic _tlsTrustPinningPolicyName;
@property BOOL allowsCellularAccess; // @dynamic allowsCellularAccess;
@property BOOL allowsConstrainedNetworkAccess; // @dynamic allowsConstrainedNetworkAccess;
@property BOOL allowsExpensiveNetworkAccess; // @dynamic allowsExpensiveNetworkAccess;
@property(getter=isDiscretionary) BOOL discretionary; // @dynamic discretionary;
@property(copy) NSArray *protocolClasses; // @dynamic protocolClasses;
@property BOOL shouldUseExtendedBackgroundIdleMode; // @dynamic shouldUseExtendedBackgroundIdleMode;
@property double timeoutIntervalForResource; // @dynamic timeoutIntervalForResource;
@property BOOL waitsForConnectivity; // @dynamic waitsForConnectivity;

@end

