//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, NSString;

@interface HMDAccessoryNetworkProtectionGroupModel : HMDBackingStoreModelObject
{
}

+ (id)properties;
+ (id)modelIDForHome:(id)arg1 manufacturer:(id)arg2 category:(id)arg3;
+ (id)modelNamespace;

// Remaining properties
@property(retain, nonatomic) NSNumber *category; // @dynamic category;
@property(retain, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(retain, nonatomic) NSNumber *targetProtectionMode; // @dynamic targetProtectionMode;

@end

