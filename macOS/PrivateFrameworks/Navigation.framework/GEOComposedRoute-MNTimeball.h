//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOComposedRoute.h>

@class NSMapTable;

@interface GEOComposedRoute (MNTimeball)
+ (id)_stringForPoint:(const Matrix_2bdd42a3 *)arg1;
+ (void)_addPointsToArray:(id)arg1 forMapPoints:(CDStruct_c3b9c2ee *)arg2 pointCount:(unsigned long long)arg3 isPolylineA:(BOOL)arg4;
+ (unsigned long long)_startIndexForPoints:(Matrix_2bdd42a3)arg1 withPoints:(Matrix_2bdd42a3 *)arg2 pointCount:(unsigned long long)arg3 toleranceSquared:(double)arg4;
+ (void)_findDivergenceAndConvergence:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 divergenceTolerance:(double)arg5 convergenceTolerance:(double)arg6 outDivergenceCoordinateA:(out struct PolylineCoordinate *)arg7 outDivergenceCoordinateB:(out struct PolylineCoordinate *)arg8 outConvergenceCoordinateA:(out struct PolylineCoordinate *)arg9 outConvergenceCoordinateB:(out struct PolylineCoordinate *)arg10;
+ (void)findDivergenceAndConvergence:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 outDivergenceCoordinateA:(out struct PolylineCoordinate *)arg5 outDivergenceCoordinateB:(out struct PolylineCoordinate *)arg6 outConvergenceCoordinateA:(out struct PolylineCoordinate *)arg7 outConvergenceCoordinateB:(out struct PolylineCoordinate *)arg8;
+ (void)findDivergenceAndConvergence:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherCoordinates:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 distanceInMeters:(double)arg5 outDivergenceCoordinateA:(out struct PolylineCoordinate *)arg6 outDivergenceCoordinateB:(out struct PolylineCoordinate *)arg7 outConvergenceCoordinateA:(out struct PolylineCoordinate *)arg8 outConvergenceCoordinateB:(out struct PolylineCoordinate *)arg9;
+ (void)findDivergenceAndConvergence:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 divergenceTolerance:(double)arg5 convergenceTolerance:(double)arg6 outCoordinatesA:(out id *)arg7 outCoordinatesB:(out id *)arg8;
+ (BOOL)_pointsConverge:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 tolerance:(double)arg5 outCoordinatesA:(out id *)arg6 outCoordinatesB:(out id *)arg7;
+ (BOOL)_pointsConverge:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 tolerance:(double)arg5 outCoordinateA:(out struct PolylineCoordinate *)arg6 outCoordinateB:(out struct PolylineCoordinate *)arg7;
+ (BOOL)pointsConverge:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 outCoordinateA:(out struct PolylineCoordinate *)arg5 outCoordinateB:(out struct PolylineCoordinate *)arg6;
+ (BOOL)_pointsDiverge:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 tolerance:(double)arg5 outCoordinateA:(out struct PolylineCoordinate *)arg6 outCoordinateB:(out struct PolylineCoordinate *)arg7;
+ (BOOL)pointsDiverge:(CDStruct_c3b9c2ee *)arg1 pointCount:(unsigned long long)arg2 otherPoints:(CDStruct_c3b9c2ee *)arg3 pointCount:(unsigned long long)arg4 outCoordinateA:(out struct PolylineCoordinate *)arg5 outCoordinateB:(out struct PolylineCoordinate *)arg6;
- (BOOL)_timeball_isEqualToRoute:(id)arg1;
- (id)_mapPoints;
- (id)divergenceAndConvergenceWithRoute:(id)arg1 outOtherRoutePoints:(out id *)arg2;
- (id)divergenceAndConvergenceWithRoute:(id)arg1;
- (void)findDivergenceAndConvergenceWithRoute:(id)arg1 distanceInMeters:(double)arg2 outDivergenceCoordinate:(out struct PolylineCoordinate *)arg3 outConvergenceCoordinate:(out struct PolylineCoordinate *)arg4;
- (void)findDivergenceAndConvergenceWithRoute:(id)arg1 outDivergenceCoordinate:(out struct PolylineCoordinate *)arg2 outConvergenceCoordinate:(out struct PolylineCoordinate *)arg3;
- (double)remainingTimeFromRouteMatch:(id)arg1 etaRoute:(id)arg2 outRemainingDistance:(out double *)arg3 outDistanceToManeuverStart:(out double *)arg4 outDistanceToManeuverEnd:(out double *)arg5;
- (double)remainingTimeFromLocation:(id)arg1 etaRoute:(id)arg2 outRemainingDistance:(out double *)arg3 outDistanceToManeuverStart:(out double *)arg4 outDistanceToManeuverEnd:(out double *)arg5;
- (double)remainingTimeFromLocation:(id)arg1 etaRoute:(id)arg2;
- (double)remainingTimeFromLocation:(id)arg1;
- (int)cameraFocusStyleForStep:(id)arg1;
@property(retain, nonatomic) NSMapTable *turnAnglesLookup;
@end

