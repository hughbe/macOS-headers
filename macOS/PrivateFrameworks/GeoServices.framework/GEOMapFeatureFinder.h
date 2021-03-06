//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureFinder : GEOMapRequest
{
    CDStruct_2c43369c _coordinate;
    GEOMapTileFinder *_tileFinder;
    CDUnknownBlockType _roadHandler;
    CDUnknownBlockType _pointHandler;
    CDUnknownBlockType _polygonHandler;
    BOOL _ignoreUnnamedFeatures;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL ignoreUnnamedFeatures; // @synthesize ignoreUnnamedFeatures=_ignoreUnnamedFeatures;
@property(copy, nonatomic) CDUnknownBlockType polygonHandler; // @synthesize polygonHandler=_polygonHandler;
@property(copy, nonatomic) CDUnknownBlockType pointHandler; // @synthesize pointHandler=_pointHandler;
@property(copy, nonatomic) CDUnknownBlockType roadHandler; // @synthesize roadHandler=_roadHandler;
- (void)findFeatures:(CDUnknownBlockType)arg1 pointHandler:(CDUnknownBlockType)arg2 polygonHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_pickRoadInTile:(id)arg1 tileRect:(const CDStruct_90e2a262 *)arg2 localPoint:(const Matrix_8746f91e *)arg3;
@property(readonly, nonatomic) GEOMapAccess *map;
- (void)cancel;
- (id)initWithMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2;

@end

