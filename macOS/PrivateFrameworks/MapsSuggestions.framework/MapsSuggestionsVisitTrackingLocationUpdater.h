//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsLocationUpdater-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsLocationVisitUpdaterDelegate-Protocol.h>

@class CLLocation, MapsSuggestionsObservers, NSString;
@protocol MapsSuggestionsLocationUpdater;

@interface MapsSuggestionsVisitTrackingLocationUpdater : NSObject <MapsSuggestionsLocationUpdater, MapsSuggestionsLocationVisitUpdaterDelegate>
{
    struct unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue>> _queue;
    id <MapsSuggestionsLocationUpdater> _wrappedLocationUpdater;
    CLLocation *_latestLocation;
    MapsSuggestionsObservers *_locationObservers;
    MapsSuggestionsObservers *_visitObservers;
    double _distanceBuffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateLocation:(id)arg1;
- (void)stopLocationUpdatesForDelegate:(id)arg1;
- (id)startLocationUpdatesForDelegate:(id)arg1;
- (id)restartLocationUpdatesForDelegate:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)dealloc;
- (id)initDecoratingLocationUpdater:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

