//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlacesKit/NSObject-Protocol.h>

@class NSOrderedSet;
@protocol PXPlacesMapRenderer, PXPlacesMapSelectionHandler;

@protocol PXPlacesMapRenderable <NSObject>
@property(nonatomic) long long index;
@property(retain) NSOrderedSet *geotaggables;
@property __weak id <PXPlacesMapSelectionHandler> selectionHandler;
@property __weak id <PXPlacesMapRenderer> renderer;
@end

