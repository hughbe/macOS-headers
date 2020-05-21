//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <ScreenTimeCore/STSyncableSubObject-Protocol.h>

@class NSSet, NSString, STUserDeviceState;
@protocol STSerializableManagedObject;

@interface STCoreDevice : NSManagedObject <STSyncableSubObject>
{
}

+ (id)fetchRequestForOrphanedDevices;
+ (id)fetchOrCreateLocalDeviceInContext:(id)arg1 error:(id *)arg2;
+ (id)fetchOrCreateDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
@property(readonly) id <STSerializableManagedObject> syncableRootObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) STUserDeviceState *localUserDeviceState; // @dynamic localUserDeviceState;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) short platform; // @dynamic platform;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSSet *usages; // @dynamic usages;
@property(retain, nonatomic) NSSet *userDeviceAddresses; // @dynamic userDeviceAddresses;
@property(retain, nonatomic) NSSet *userDeviceStates; // @dynamic userDeviceStates;

@end

