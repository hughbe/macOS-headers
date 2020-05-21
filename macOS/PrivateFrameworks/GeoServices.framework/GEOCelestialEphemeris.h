//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOCelestialRiseTransitSet, GEOEquatorialCelestialBodyData, GEOHorizontalCelestialBodyData, GEOSolarEclipticCelestialBodyData, NSDate;

@interface GEOCelestialEphemeris : NSObject
{
    GEOCelestialRiseTransitSet *_riseTransitSet;
    double _julianDay;
    CDStruct_2c43369c _coordinate;
    long long _body;
    GEOSolarEclipticCelestialBodyData *_eclipticCoord;
    GEOEquatorialCelestialBodyData *_equatorialCoord;
    GEOHorizontalCelestialBodyData *_horizontalCoord;
    double _phaseAngle;
    double _illuminatedFraction;
    double _elongation;
    double _parallacticAngle;
    BOOL _highPrecision;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double parallacticAngle; // @synthesize parallacticAngle=_parallacticAngle;
@property(readonly, nonatomic) double illuminatedFraction; // @synthesize illuminatedFraction=_illuminatedFraction;
@property(readonly, nonatomic) double phaseAngle; // @synthesize phaseAngle=_phaseAngle;
@property(readonly, nonatomic) double elongation; // @synthesize elongation=_elongation;
- (id)description;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 julianDay:(double)arg2 body:(long long)arg3 altitude:(double)arg4 useHighPrecision:(BOOL)arg5;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 body:(long long)arg3 useHighPrecision:(BOOL)arg4;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 body:(long long)arg3;
@property(readonly, nonatomic) GEOHorizontalCelestialBodyData *horizontalCoord;
@property(readonly, nonatomic) GEOEquatorialCelestialBodyData *equatorialCoord;
@property(readonly, nonatomic) GEOSolarEclipticCelestialBodyData *eclipticCoord;
@property(readonly, nonatomic) NSDate *set;
@property(readonly, nonatomic) BOOL isTransitAboveHorizon;
@property(readonly, nonatomic) NSDate *transit;
@property(readonly, nonatomic) NSDate *rise;

@end

