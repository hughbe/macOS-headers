//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapAccessLine.h>

#import <GeoServices/GEOMapTransitLink-Protocol.h>

@class NSString;
@protocol GEOMapTransitStop;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitLink : GEOMapAccessLine <GEOMapTransitLink>
{
    shared_ptr_24ebf3c0 _transitEdge;
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D>> _coords;
    id <GEOMapTransitStop> _stopFrom;
    id <GEOMapTransitStop> _stopTo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <GEOMapTransitStop> stopTo; // @synthesize stopTo=_stopTo;
@property(readonly, nonatomic) id <GEOMapTransitStop> stopFrom; // @synthesize stopFrom=_stopFrom;
- (double)distanceInMetersFrom:(CDStruct_c3b9c2ee)arg1 outClosestCoordinateOnLine:(CDStruct_c3b9c2ee *)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned int minimumTravelTime;
@property(readonly, nonatomic) NSString *internalLineName;
@property(readonly, nonatomic) unsigned long long transitLineID;
- (id)initWithMap:(id)arg1 transitEdge:(shared_ptr_24ebf3c0)arg2;

// Remaining properties
@property(readonly, nonatomic) unsigned long long coordinateCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *coordinates;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double length;
@property(readonly) Class superclass;

@end

