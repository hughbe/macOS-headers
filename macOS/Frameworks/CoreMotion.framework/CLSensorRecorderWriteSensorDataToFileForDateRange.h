//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CLSensorRecorderWriteSensorDataToFileForDateRange : NSObject <NSSecureCoding>
{
    int _dataType;
    double _startTime;
    double _endTime;
}

+ (BOOL)supportsSecureCoding;
@property int dataType; // @synthesize dataType=_dataType;
@property double endTime; // @synthesize endTime=_endTime;
@property double startTime; // @synthesize startTime=_startTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

