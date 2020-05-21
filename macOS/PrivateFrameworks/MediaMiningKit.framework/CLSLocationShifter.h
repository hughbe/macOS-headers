//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocationShifter;
@protocol OS_dispatch_queue;

@interface CLSLocationShifter : NSObject
{
    NSObject<OS_dispatch_queue> *_locationShiftQueue;
    GEOLocationShifter *_locationShifter;
}

+ (BOOL)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
+ (id)sharedLocationShifter;
- (void).cxx_destruct;
@property(readonly, nonatomic) GEOLocationShifter *locationShifter; // @synthesize locationShifter=_locationShifter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *locationShiftQueue; // @synthesize locationShiftQueue=_locationShiftQueue;
- (CDStruct_c3b9c2ee)shiftedCoordinateForOriginalCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)init;

@end

