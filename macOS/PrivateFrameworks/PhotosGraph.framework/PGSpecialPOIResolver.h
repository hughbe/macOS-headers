//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface PGSpecialPOIResolver : NSObject
{
    NSArray *_momentNodes;
    NSMutableDictionary *_countBySpecialPOI;
}

+ (id)_nameBySpecialPOI;
+ (id)_regionsBySpecialPOI;
+ (unsigned long long)specialPOIsWithNameInString:(id)arg1;
+ (BOOL)specialPOINameIsInString:(id)arg1;
+ (unsigned long long)specialPOIsContainingCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (BOOL)specialPOIContainsCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *countBySpecialPOI; // @synthesize countBySpecialPOI=_countBySpecialPOI;
@property(readonly, nonatomic) NSArray *momentNodes; // @synthesize momentNodes=_momentNodes;
- (unsigned long long)_numberOfMomentsInRegions:(id)arg1 containingAOIName:(id)arg2;
- (unsigned long long)_numberOfMomentsMatchingSpecialPOI:(unsigned long long)arg1;
- (BOOL)anyMomentHasPOIAmusementPark;
- (unsigned long long)specialPOIsWithMomentRatio:(double)arg1;
- (unsigned long long)specialPOIsInAnyMoment;
- (BOOL)momentsContainSpecialPOI:(unsigned long long)arg1 withMomentRatio:(double)arg2;
- (BOOL)anyMomentContainsSpecialPOI:(unsigned long long)arg1;
- (id)initWithMomentNodes:(id)arg1;

@end

