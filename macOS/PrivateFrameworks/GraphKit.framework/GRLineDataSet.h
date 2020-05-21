//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GraphKit/GRXYDataSet.h>

#import <GraphKit/NSCoding-Protocol.h>
#import <GraphKit/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface GRLineDataSet : GRXYDataSet <NSCoding, NSCopying>
{
    void *_reservedGRLineDataSet;
    NSMutableDictionary *_markerTextAttributes;
}

+ (void)setDefaultMarkers:(id)arg1;
+ (id)defaultMarkers;
+ (void)initialize;
- (unsigned long long)indexOfXvalue:(double)arg1 yValue:(double)arg2 exactMatch:(BOOL)arg3;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)drawDataSetRect:(struct CGRect)arg1;
- (void)drawLegendSampleInRect:(struct CGRect)arg1;
- (void)_updateTextProperties;
- (BOOL)supportsRangesOnAxis:(unsigned short)arg1;
- (void)axes:(id)arg1 propertyChangedForKey:(id)arg2 from:(id)arg3 to:(id)arg4;
- (void)chart:(id)arg1 propertyChangedForKey:(id)arg2 from:(id)arg3 to:(id)arg4;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)didSetProperty:(id)arg1 forKey:(id)arg2 replacingOldValue:(id)arg3 andShouldReload:(char *)arg4 andRelayout:(char *)arg5 andRedisplay:(char *)arg6;
- (id)propertyForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithOwnerChart:(id)arg1;

@end

