//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray;

@interface GEOComposedRouteLaneInfo : NSObject <NSSecureCoding>
{
    NSMutableArray *_directions;
    BOOL _good;
    BOOL _hov;
    BOOL _preferred;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isHOVLane;
@property(readonly, nonatomic) BOOL isPreferredLaneForManeuver;
@property(readonly, nonatomic) BOOL isLaneForManeuver;
@property(readonly, nonatomic) NSArray *directions;
@property(readonly, nonatomic) BOOL hasDirections;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLaneInfo:(id)arg1;

@end

