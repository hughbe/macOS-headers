//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSArray, NSData, NSString;

@interface HMDMediaSystemModel : HMDBackingStoreModelObject
{
}

+ (id)modelWithMessage:(id)arg1 home:(id)arg2 changetype:(unsigned long long)arg3 outError:(id *)arg4;
+ (id)properties;
+ (id)schemaHashRoot;
- (id)dependentUUIDs;

// Remaining properties
@property(copy, nonatomic) NSString *configuredName; // @dynamic configuredName;
@property(copy, nonatomic) NSArray *mediaSystemComponents; // @dynamic mediaSystemComponents;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSData *symptoms; // @dynamic symptoms;

@end

