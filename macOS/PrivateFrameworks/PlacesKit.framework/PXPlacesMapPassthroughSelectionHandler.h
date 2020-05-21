//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapSelectionHandler-Protocol.h>

@class NSString;
@protocol PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapPassthroughSelectionHandler : NSObject <PXPlacesMapSelectionHandler>
{
    id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; // @synthesize pipelineComponentProvider;
- (void)reset;
- (id)selectedGeotaggablesForRenderable:(id)arg1 mapView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

