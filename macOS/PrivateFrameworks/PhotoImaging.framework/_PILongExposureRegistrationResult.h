//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <PhotoImaging/PILongExposureRegistrationResult-Protocol.h>

@class NSString, VNImageHomographicAlignmentObservation;
@protocol NURenderStatistics;

@interface _PILongExposureRegistrationResult : _NURenderResult <PILongExposureRegistrationResult>
{
    VNImageHomographicAlignmentObservation *_observation;
    CDStruct_996ac03c _extent;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_996ac03c extent; // @synthesize extent=_extent;
@property(copy, nonatomic) VNImageHomographicAlignmentObservation *observation; // @synthesize observation=_observation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

