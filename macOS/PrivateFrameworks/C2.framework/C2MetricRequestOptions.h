//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class C2MetricOptions, NSString, NSUUID;

@interface C2MetricRequestOptions : NSObject
{
    unsigned char __allowsExpensiveAccess;
    unsigned char __allowsPowerNapScheduling;
    NSString *__sourceApplicationBundleIdentifier;
    NSString *__sourceApplicationSecondaryIdentifier;
    NSUUID *_metricUUID;
    C2MetricOptions *_metricOptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) C2MetricOptions *metricOptions; // @synthesize metricOptions=_metricOptions;
@property(retain, nonatomic) NSUUID *metricUUID; // @synthesize metricUUID=_metricUUID;
@property(retain, nonatomic) NSString *_sourceApplicationSecondaryIdentifier; // @synthesize _sourceApplicationSecondaryIdentifier=__sourceApplicationSecondaryIdentifier;
@property(retain, nonatomic) NSString *_sourceApplicationBundleIdentifier; // @synthesize _sourceApplicationBundleIdentifier=__sourceApplicationBundleIdentifier;
@property(nonatomic) unsigned char _allowsPowerNapScheduling; // @synthesize _allowsPowerNapScheduling=__allowsPowerNapScheduling;
@property(nonatomic) unsigned char _allowsExpensiveAccess; // @synthesize _allowsExpensiveAccess=__allowsExpensiveAccess;
- (id)metricRequestTransportOptions;
- (id)initWithRequestOptions:(id)arg1;
- (id)init;

@end

