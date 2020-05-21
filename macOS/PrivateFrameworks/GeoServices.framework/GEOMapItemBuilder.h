//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOAddress, GEOLatLng, GEOLocation, GEOMapRegion, NSString;

@interface GEOMapItemBuilder : NSObject
{
    struct {
        unsigned int referenceFrame:1;
    } _has;
    GEOLocation *_location;
    int _referenceFrame;
    GEOAddress *_address;
    GEOMapRegion *_mapRegion;
    GEOLatLng *_latlng;
    NSString *_name;
}

+ (id)buildWithSetterBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) GEOLatLng *latlng; // @synthesize latlng=_latlng;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) GEOAddress *address; // @synthesize address=_address;
@property(nonatomic) int referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
- (id)build;
- (id)init;

@end

