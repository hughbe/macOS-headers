//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiPolicy/TBTile-Protocol.h>

@class NSDate, NSString;

@interface TBGloriaTile : NSObject <TBTile>
{
    unsigned char _zoom;
    unsigned long long _key;
    double _lat;
    double _lng;
    NSString *_WKTString;
    double _tileSize;
    double _north;
    double _south;
    double _east;
    double _west;
}

+ (unsigned char)defaultZoomLevel;
+ (id)gloriaTileWithLat:(double)arg1 lng:(double)arg2 zoom:(unsigned char)arg3;
- (void).cxx_destruct;
@property(nonatomic) double west; // @synthesize west=_west;
@property(nonatomic) double east; // @synthesize east=_east;
@property(nonatomic) double south; // @synthesize south=_south;
@property(nonatomic) double north; // @synthesize north=_north;
@property(nonatomic) double tileSize; // @synthesize tileSize=_tileSize;
@property(copy, nonatomic) NSString *WKTString; // @synthesize WKTString=_WKTString;
@property(nonatomic) unsigned char zoom; // @synthesize zoom=_zoom;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;
- (id)neighborTileKeysWithRadius:(double)arg1;
- (id)adjacentTileKeysWithLevel:(unsigned int)arg1;
- (id)initWithLat:(double)arg1 lng:(double)arg2 zoom:(unsigned char)arg3;
- (id)initWithLat:(double)arg1 lng:(double)arg2;
- (id)initWithEncodedKey:(unsigned long long)arg1 zoom:(unsigned char)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSDate *created;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *etag;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

