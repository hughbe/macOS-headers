//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupportUI/NUIArrangementContainer-Protocol.h>

@protocol _NUIGridArrangementContainer <NUIArrangementContainer>
- (void)populateGridArrangementDimension:(vector_b8a5df6e *)arg1 withCells:(const vector_f8404f95 *)arg2 axis:(long long)arg3;
- (void)populateGridArrangementCells:(vector_f8404f95 *)arg1;

@optional
- (BOOL)shouldCancelMeasurementForCompressionInAxis:(long long)arg1;
- (BOOL)canCancelMeasurementForCompression;
@end

