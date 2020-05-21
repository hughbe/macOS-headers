//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioDSPManager/NSSecureCoding-Protocol.h>

@class ADNotificationBusStation;

__attribute__((visibility("hidden")))
@interface GraphState : NSObject <NSSecureCoding>
{
    unique_ptr_8b09088b mADMGraph;
    ADNotificationBusStation *mNotificationBusStation;
    struct DSPConfigSettings mDSPConfigSettings;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) ADNotificationBusStation *busStation;
@property(readonly, nonatomic) struct DSPConfigSettings *dspConfigSettings;
@property(readonly, nonatomic) struct Graph *admGraph;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGraph:(unique_ptr_8b09088b)arg1 dspConfigSettings:(struct DSPConfigSettings)arg2 busStation:(id)arg3;

@end

