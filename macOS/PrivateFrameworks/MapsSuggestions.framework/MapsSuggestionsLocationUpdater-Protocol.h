//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class CLLocation;
@protocol MapsSuggestionsLocationUpdaterDelegate;

@protocol MapsSuggestionsLocationUpdater <MapsSuggestionsObject>
- (CLLocation *)restartLocationUpdatesForDelegate:(id <MapsSuggestionsLocationUpdaterDelegate>)arg1;
- (void)stopLocationUpdatesForDelegate:(id <MapsSuggestionsLocationUpdaterDelegate>)arg1;
- (CLLocation *)startLocationUpdatesForDelegate:(id <MapsSuggestionsLocationUpdaterDelegate>)arg1;
@end

