//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSString;
@protocol GEOTransitArtworkDataSource;

@protocol GEOTransitLabelItem <NSObject>
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> labelArtwork;
@property(readonly, nonatomic) NSString *labelString;
@property(readonly, nonatomic) unsigned long long type;
@end

