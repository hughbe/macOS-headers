//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSSliderAccessoryBehavior.h>

__attribute__((visibility("hidden")))
@interface _NSStandardSliderAccessoryBehavior : NSSliderAccessoryBehavior
{
    long long _behavior;
}

@property(readonly) long long behavior; // @synthesize behavior=_behavior;
- (BOOL)repeatsOnLongPressForAccessory:(id)arg1;
- (void)handleAction:(id)arg1;
- (BOOL)_hasStepBehaviorInContainer:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStandardBehavior:(long long)arg1;

@end

