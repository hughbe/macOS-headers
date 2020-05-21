//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/NSCopying-Protocol.h>

@interface PXPlacesMapViewPort : NSObject <NSCopying>
{
    double _zoomLevel;
    double _pitch;
    double _scale;
    struct CGSize _viewSize;
    CDStruct_02837cd9 _mapRect;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) CDStruct_02837cd9 mapRect; // @synthesize mapRect=_mapRect;
- (id)viewPortsBySplitingAt180thMerdian;
- (BOOL)isSpanning180thMerdian;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithMapRect:(CDStruct_02837cd9)arg1 andViewSize:(struct CGSize)arg2 zoomLevel:(double)arg3 pitch:(double)arg4;

@end

