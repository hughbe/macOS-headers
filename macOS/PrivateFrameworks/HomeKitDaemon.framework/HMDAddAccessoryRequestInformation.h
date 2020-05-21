//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMDAccessory, HMFTimer, HMSetupAccessoryDescription, NSString, NSUUID;

@interface HMDAddAccessoryRequestInformation : NSObject <NSSecureCoding>
{
    NSString *_bundleID;
    NSString *_accessoryName;
    HMAccessoryCategory *_accessoryCategory;
    HMDAccessory *_accessory;
    HMSetupAccessoryDescription *_accessoryDescription;
    NSUUID *_identifier;
    HMFTimer *_cleanupTimer;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMFTimer *cleanupTimer; // @synthesize cleanupTimer=_cleanupTimer;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) HMSetupAccessoryDescription *accessoryDescription; // @synthesize accessoryDescription=_accessoryDescription;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) HMAccessoryCategory *accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
@property(readonly, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)storeIdentifierFromUnassociatedAccessory:(id)arg1 setupCode:(id)arg2;
- (void)cancelCleanupTimer;
- (void)startCleanupTimerForDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccessoryName:(id)arg1 category:(id)arg2 bundleID:(id)arg3 accessoryDescription:(id)arg4;

@end

