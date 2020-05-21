//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <C2/NSCopying-Protocol.h>
#import <C2/NSSecureCoding-Protocol.h>

@class C2MetricOptions, NSDictionary, NSString, NSURL;

@interface C2RequestOptions : NSObject <NSCopying, NSSecureCoding>
{
    BOOL __allowsExpensiveAccess;
    BOOL __allowsPowerNapScheduling;
    BOOL _useAdaptiveTimeouts;
    BOOL _tlsPinning;
    BOOL _allowRouting;
    BOOL _allowExpiredDNSBehavior;
    BOOL __allowsRetryForBackgroundDataTasks;
    BOOL _redactRemoteEndpointFromNetworkMetrics;
    BOOL _outOfProcessDiscretionary;
    BOOL _metricRequest;
    long long _qualityOfService;
    NSString *_outOfProcessPoolName;
    double __timeoutIntervalForRequest;
    double __timeoutIntervalForResource;
    NSString *__sourceApplicationBundleIdentifier;
    NSString *__sourceApplicationSecondaryIdentifier;
    NSString *__appleIDContextSessionIdentifier;
    unsigned long long _discretionaryNetworkBehavior;
    unsigned long long _duetPreClearedMode;
    NSString *_identifier;
    NSDictionary *_resolvedEndpointsWithHostname;
    C2MetricOptions *_metricOptions;
    NSURL *_c2MetricsEndpoint;
    unsigned long long _c2MetricsReportFrequency;
    unsigned long long _c2MetricsReportFrequencyBase;
    NSString *_originalHost;
    NSURL *_invokedURL;
    CDUnknownBlockType _testBehavior_sessionGroupCreated;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)triesteMetricsEnabled;
+ (id)stringForDuetPreClearedMode:(unsigned long long)arg1;
+ (id)stringForDiscretionaryNetworkBehavior:(unsigned long long)arg1;
+ (id)stringForQualityOfService:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType testBehavior_sessionGroupCreated; // @synthesize testBehavior_sessionGroupCreated=_testBehavior_sessionGroupCreated;
@property(copy, nonatomic) NSURL *invokedURL; // @synthesize invokedURL=_invokedURL;
@property(nonatomic) BOOL metricRequest; // @synthesize metricRequest=_metricRequest;
@property(copy, nonatomic) NSString *originalHost; // @synthesize originalHost=_originalHost;
@property(nonatomic) unsigned long long c2MetricsReportFrequencyBase; // @synthesize c2MetricsReportFrequencyBase=_c2MetricsReportFrequencyBase;
@property(nonatomic) unsigned long long c2MetricsReportFrequency; // @synthesize c2MetricsReportFrequency=_c2MetricsReportFrequency;
@property(copy, nonatomic) NSURL *c2MetricsEndpoint; // @synthesize c2MetricsEndpoint=_c2MetricsEndpoint;
@property(nonatomic) BOOL outOfProcessDiscretionary; // @synthesize outOfProcessDiscretionary=_outOfProcessDiscretionary;
@property(nonatomic) BOOL redactRemoteEndpointFromNetworkMetrics; // @synthesize redactRemoteEndpointFromNetworkMetrics=_redactRemoteEndpointFromNetworkMetrics;
@property(copy, nonatomic) C2MetricOptions *metricOptions; // @synthesize metricOptions=_metricOptions;
@property(copy, nonatomic) NSDictionary *resolvedEndpointsWithHostname; // @synthesize resolvedEndpointsWithHostname=_resolvedEndpointsWithHostname;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) BOOL _allowsRetryForBackgroundDataTasks; // @synthesize _allowsRetryForBackgroundDataTasks=__allowsRetryForBackgroundDataTasks;
@property(nonatomic) unsigned long long duetPreClearedMode; // @synthesize duetPreClearedMode=_duetPreClearedMode;
@property(nonatomic) unsigned long long discretionaryNetworkBehavior; // @synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior;
@property(nonatomic) BOOL allowExpiredDNSBehavior; // @synthesize allowExpiredDNSBehavior=_allowExpiredDNSBehavior;
@property(nonatomic) BOOL allowRouting; // @synthesize allowRouting=_allowRouting;
@property(nonatomic) BOOL tlsPinning; // @synthesize tlsPinning=_tlsPinning;
@property(copy, nonatomic) NSString *_appleIDContextSessionIdentifier; // @synthesize _appleIDContextSessionIdentifier=__appleIDContextSessionIdentifier;
@property(copy, nonatomic) NSString *_sourceApplicationSecondaryIdentifier; // @synthesize _sourceApplicationSecondaryIdentifier=__sourceApplicationSecondaryIdentifier;
@property(copy, nonatomic) NSString *_sourceApplicationBundleIdentifier; // @synthesize _sourceApplicationBundleIdentifier=__sourceApplicationBundleIdentifier;
@property(nonatomic) BOOL useAdaptiveTimeouts; // @synthesize useAdaptiveTimeouts=_useAdaptiveTimeouts;
@property(nonatomic) double _timeoutIntervalForResource; // @synthesize _timeoutIntervalForResource=__timeoutIntervalForResource;
@property(nonatomic) double _timeoutIntervalForRequest; // @synthesize _timeoutIntervalForRequest=__timeoutIntervalForRequest;
@property(nonatomic) BOOL _allowsPowerNapScheduling; // @synthesize _allowsPowerNapScheduling=__allowsPowerNapScheduling;
@property(nonatomic) BOOL _allowsExpensiveAccess; // @synthesize _allowsExpensiveAccess=__allowsExpensiveAccess;
@property(copy, nonatomic) NSString *outOfProcessPoolName; // @synthesize outOfProcessPoolName=_outOfProcessPoolName;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) double emptySessionExpiryInSeconds;
- (id)decorateTask:(id)arg1;
- (id)copyAndDecorateRequest:(id)arg1;
- (id)sessionConfigurationWithName:(id)arg1;
- (void)setOutOfProcess:(BOOL)arg1;
@property(readonly, nonatomic) BOOL outOfProcess;
- (id)defaultSessionConfigurationWithName:(id)arg1;
- (id)sessionConfigurationNameWithRouteHost:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

