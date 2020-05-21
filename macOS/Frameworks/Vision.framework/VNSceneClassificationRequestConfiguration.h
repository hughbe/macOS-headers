//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

@class VNClassificationCustomHierarchy, VNSceneObservation;

__attribute__((visibility("hidden")))
@interface VNSceneClassificationRequestConfiguration : VNImageBasedRequestConfiguration
{
    VNSceneObservation *_sceneObservation;
    VNClassificationCustomHierarchy *_customHierarchy;
    unsigned long long _maximumLeafObservations;
    unsigned long long _maximumHierarchicalObservations;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long maximumHierarchicalObservations; // @synthesize maximumHierarchicalObservations=_maximumHierarchicalObservations;
@property(nonatomic) unsigned long long maximumLeafObservations; // @synthesize maximumLeafObservations=_maximumLeafObservations;
@property(retain, nonatomic) VNClassificationCustomHierarchy *customHierarchy; // @synthesize customHierarchy=_customHierarchy;
@property(retain, nonatomic) VNSceneObservation *sceneObservation; // @synthesize sceneObservation=_sceneObservation;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end

