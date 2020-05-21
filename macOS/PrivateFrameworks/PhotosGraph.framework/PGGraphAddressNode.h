//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphLocationNode.h>

#import <PhotosGraph/PGGraphPortraitLocationNamedEntity-Protocol.h>

@class NSString, PPLocationNamedEntities;

@interface PGGraphAddressNode : PGGraphLocationNode <PGGraphPortraitLocationNamedEntity>
{
}

- (id)UUID;
- (void)enumeratePersonHomeOrWorkNodesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)isPersonHomeOrWorkAddress;
- (id)location;
- (struct CLLocationCoordinate2D)coordinate;
- (BOOL)isOcean;
- (BOOL)locationIsImproved;
- (void)addressEnumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAreaNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)countryNode;
- (id)stateNode;
- (id)cityNode;
- (id)districtNode;
- (id)streetNode;
- (id)momentNodes;
- (id)areaNodes;
@property(readonly, nonatomic) PPLocationNamedEntities *pg_locationNamedEntity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

