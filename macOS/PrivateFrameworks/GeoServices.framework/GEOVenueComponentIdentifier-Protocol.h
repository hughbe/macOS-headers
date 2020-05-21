//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray;
@protocol GEOVenueFloorInfo;

@protocol GEOVenueComponentIdentifier <NSObject>
@property(readonly, nonatomic) unsigned long long fixtureID;
@property(readonly, nonatomic, getter=_hasFixtureID) BOOL hasFixtureID;
@property(readonly, nonatomic) unsigned long long unitID;
@property(readonly, nonatomic, getter=_hasUnitID) BOOL hasUnitID;
@property(readonly, nonatomic) NSArray *sectionIDs;
@property(readonly, nonatomic) id <GEOVenueFloorInfo> floorInfo;
@property(readonly, nonatomic) unsigned long long buildingID;
@property(readonly, nonatomic, getter=_hasBuildingID) BOOL hasBuildingID;
@end

