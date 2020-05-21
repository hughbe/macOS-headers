//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>

@class NPAverage, NSDate, NSNumber, NSString, NWEndpoint, NWTCPConnection;
@protocol OS_dispatch_source;

@interface NPEdgeLatency : NSObject <NSSecureCoding>
{
    BOOL _probeTFO;
    BOOL _probeNoTFOCookie;
    BOOL _probeUseTFOHeuristics;
    BOOL _passedReprobeThreshold;
    BOOL _needReprobe;
    BOOL _isObserving;
    unsigned long long _edgeIndex;
    NWEndpoint *_probeEndpoint;
    unsigned long long _roundTripTime;
    NPAverage *_roundTripAverage;
    NPAverage *_roundTripAverageObserved;
    NSNumber *_addressFamily;
    long long _interfaceType;
    long long _TFOStatus;
    long long _probeCount;
    NSDate *_creationDate;
    long long _reprobeCount;
    NSObject<OS_dispatch_source> *_probeTimer;
    NWTCPConnection *_probeConnection;
    CDUnknownBlockType _probeCompletionHandler;
    NSNumber *_currentTimeout;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property BOOL isObserving; // @synthesize isObserving=_isObserving;
@property BOOL needReprobe; // @synthesize needReprobe=_needReprobe;
@property(retain) NSNumber *currentTimeout; // @synthesize currentTimeout=_currentTimeout;
@property(copy) CDUnknownBlockType probeCompletionHandler; // @synthesize probeCompletionHandler=_probeCompletionHandler;
@property(retain) NWTCPConnection *probeConnection; // @synthesize probeConnection=_probeConnection;
@property(retain) NSObject<OS_dispatch_source> *probeTimer; // @synthesize probeTimer=_probeTimer;
@property long long reprobeCount; // @synthesize reprobeCount=_reprobeCount;
@property BOOL passedReprobeThreshold; // @synthesize passedReprobeThreshold=_passedReprobeThreshold;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property long long probeCount; // @synthesize probeCount=_probeCount;
@property long long TFOStatus; // @synthesize TFOStatus=_TFOStatus;
@property BOOL probeUseTFOHeuristics; // @synthesize probeUseTFOHeuristics=_probeUseTFOHeuristics;
@property BOOL probeNoTFOCookie; // @synthesize probeNoTFOCookie=_probeNoTFOCookie;
@property BOOL probeTFO; // @synthesize probeTFO=_probeTFO;
@property long long interfaceType; // @synthesize interfaceType=_interfaceType;
@property(retain) NSNumber *addressFamily; // @synthesize addressFamily=_addressFamily;
@property(retain) NPAverage *roundTripAverageObserved; // @synthesize roundTripAverageObserved=_roundTripAverageObserved;
@property(retain) NPAverage *roundTripAverage; // @synthesize roundTripAverage=_roundTripAverage;
@property unsigned long long roundTripTime; // @synthesize roundTripTime=_roundTripTime;
@property(retain) NWEndpoint *probeEndpoint; // @synthesize probeEndpoint=_probeEndpoint;
@property unsigned long long edgeIndex; // @synthesize edgeIndex=_edgeIndex;
- (BOOL)isComplete:(BOOL)arg1;
- (BOOL)isMatched:(id)arg1;
- (BOOL)isMatched:(id)arg1 parameters:(struct networkParameters *)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pingPong;
- (void)measureLatencyWithTimeout:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)fillTestLatency;
- (id)description;
@property(readonly) BOOL isTFOEnabled;
@property(readonly) NSString *connectionParametersString;
@property(readonly) NSString *TFOStatusString;
@property(readonly) NSString *addressFamilyString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addRoundTripSampleObserved:(unsigned long long)arg1;
- (unsigned long long)getRoundTripSample:(unsigned long long)arg1;
- (void)addRoundTripSamples:(id)arg1;
- (void)addRoundTripSample:(unsigned long long)arg1;
- (id)initWithProbeEndpoint:(id)arg1 probeTFO:(BOOL)arg2;

@end

