//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMDSiriAccessoryInfo : NSObject
{
    BOOL _supportsDragonSiri;
    id _targetsAccessory;
}

+ (id)infoWithTargetableAccessory:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL supportsDragonSiri; // @synthesize supportsDragonSiri=_supportsDragonSiri;
@property(nonatomic) __weak id targetsAccessory; // @synthesize targetsAccessory=_targetsAccessory;
- (BOOL)isActiveAndSupportsDragonSiri;

@end

