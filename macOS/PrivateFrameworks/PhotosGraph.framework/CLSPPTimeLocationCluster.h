//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/CLSTimeLocationTuple-Protocol.h>

@class CLCircularRegion, NSDate, NSString, PHAssetCollection;

@interface CLSPPTimeLocationCluster : NSObject <CLSTimeLocationTuple>
{
    PHAssetCollection *_assetCollection;
    CLCircularRegion *_region;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_expandedEndDate;
    NSDate *_expandedStartDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *expandedStartDate; // @synthesize expandedStartDate=_expandedStartDate;
@property(readonly, nonatomic) NSDate *expandedEndDate; // @synthesize expandedEndDate=_expandedEndDate;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinates;
@property(readonly, nonatomic) NSString *timeLocationIdentifier;
- (id)initWithAssetCollection:(id)arg1 region:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

