//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CUIPerformanceMeasurement : NSObject
{
    NSString *measurementName;
    NSString *measurementComment;
    double measurementValue;
}

+ (id)performanceMeasurementWithName:(id)arg1 comment:(id)arg2 value:(double)arg3;
@property(readonly) double measurementValue; // @synthesize measurementValue;
@property(readonly) NSString *measurementComment; // @synthesize measurementComment;
@property(readonly) NSString *measurementName; // @synthesize measurementName;
- (id)XMLElement;
- (void)dealloc;
- (id)initWithName:(id)arg1 comment:(id)arg2 value:(double)arg3;

@end

