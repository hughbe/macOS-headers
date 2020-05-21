//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, NWDeviceReport, NWL2Report, PBCodable;

@interface NWActivityStatistics : NSObject
{
    unsigned int _awdMetricID;
    NSUUID *_externallyVisibleActivityUUID;
    NSUUID *_externallyVisibleParentUUID;
    NWL2Report *_layer2Report;
    NWDeviceReport *_deviceReport;
    PBCodable *_awdReport;
    NSUUID *_activityUUID;
    NSUUID *_parentUUID;
    struct nw_activity_report_s _report;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
@property(retain, nonatomic) NSUUID *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(nonatomic) unsigned int awdMetricID; // @synthesize awdMetricID=_awdMetricID;
@property(retain, nonatomic) PBCodable *awdReport; // @synthesize awdReport=_awdReport;
@property(nonatomic) struct nw_activity_report_s report; // @synthesize report=_report;
@property(retain, nonatomic) NWDeviceReport *deviceReport; // @synthesize deviceReport=_deviceReport;
@property(retain, nonatomic) NWL2Report *layer2Report; // @synthesize layer2Report=_layer2Report;
@property(retain, nonatomic) NSUUID *externallyVisibleParentUUID; // @synthesize externallyVisibleParentUUID=_externallyVisibleParentUUID;
@property(retain, nonatomic) NSUUID *externallyVisibleActivityUUID; // @synthesize externallyVisibleActivityUUID=_externallyVisibleActivityUUID;
- (id)initWithPBCodableData:(id)arg1;
- (id)initWithNWActivityReport:(struct nw_activity_report_s *)arg1 length:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long investigation_identifier;
@property(readonly, nonatomic) BOOL retry;
@property(readonly, nonatomic) unsigned int label;
@property(readonly, nonatomic) unsigned int domain;

@end

