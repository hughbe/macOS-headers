//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVMutableValueTiming.h>

__attribute__((visibility("hidden")))
@interface AVConcreteMutableValueTiming : AVMutableValueTiming
{
    double _value;
    double _timeStamp;
    double _rate;
}

- (CDStruct_c3b9c2ee)_timing;
- (void)setRate:(double)arg1;
- (void)setAnchorTimeStamp:(double)arg1;
- (void)setAnchorValue:(double)arg1;
- (double)rate;
- (double)anchorTimeStamp;
- (double)anchorValue;
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;

@end

