//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CHHapticDynamicParameter : NSObject
{
    NSString *_param;
    float _value;
    double _time;
}

- (void).cxx_destruct;
@property double relativeTime; // @synthesize relativeTime=_time;
@property float value; // @synthesize value=_value;
@property(readonly) NSString *parameterID; // @synthesize parameterID=_param;
- (id)initWithParameterID:(id)arg1 value:(float)arg2 relativeTime:(double)arg3;
- (id)init;

@end

