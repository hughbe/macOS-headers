//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBModelField.h>

@class HMFVersion;

@interface HMBMutableModelField : HMBModelField
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(retain, nonatomic) id defaultValue; // @dynamic defaultValue;
@property(nonatomic) unsigned long long loggingVisibility; // @dynamic loggingVisibility;
@property(nonatomic, getter=isOptional) BOOL optional; // @dynamic optional;
@property(copy, nonatomic) HMFVersion *readonlyVersion; // @dynamic readonlyVersion;
@property(copy, nonatomic) HMFVersion *unavailableVersion; // @dynamic unavailableVersion;

@end

