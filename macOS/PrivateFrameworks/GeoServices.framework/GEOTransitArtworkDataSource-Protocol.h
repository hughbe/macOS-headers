//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSString;
@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;

@protocol GEOTransitArtworkDataSource <NSObject>
@property(readonly, nonatomic) NSString *accessibilityText;
@property(readonly, nonatomic) BOOL hasRoutingIncidentBadge;
@property(readonly, nonatomic) id <GEOTransitTextDataSource> textDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property(readonly, nonatomic) id <GEOTransitIconDataSource> iconDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> shieldDataSource;
@property(readonly, nonatomic) int artworkUseType;
@property(readonly, nonatomic) int artworkSourceType;
@end

