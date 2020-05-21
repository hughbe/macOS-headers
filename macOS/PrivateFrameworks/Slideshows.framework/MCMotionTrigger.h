//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MCAction.h>

@class NSString;

@interface MCMotionTrigger : MCAction
{
    NSString *_key;
    double _duration;
    double _easeIn;
    double _easeOut;
}

+ (id)motionTriggerForTargetPlugObjectID:(id)arg1 withKey:(id)arg2 andDuration:(double)arg3;
@property(nonatomic) double easeOut; // @synthesize easeOut=_easeOut;
@property(nonatomic) double easeIn; // @synthesize easeIn=_easeIn;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy) NSString *key; // @synthesize key=_key;
- (id)description;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;

@end

