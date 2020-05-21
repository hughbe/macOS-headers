//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>

@class HMAccessory, NSArray, NSString, NSUUID, _HMAccessoryProfile;

@interface HMAccessoryProfile : NSObject <HMObjectMerge>
{
    _HMAccessoryProfile *_accessoryProfile;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _HMAccessoryProfile *accessoryProfile; // @synthesize accessoryProfile=_accessoryProfile;
- (void)handleRuntimeStateUpdate:(id)arg1;
@property(readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // @dynamic profileUniqueIdentifier;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) __weak HMAccessory *accessory;
@property(readonly, nonatomic) NSArray *services;
- (id)initWithAccessoryProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

