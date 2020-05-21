//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/CDDCloudKitMessage.h>

@class NSFileHandle, NSString;

__attribute__((visibility("hidden")))
@interface CDDCloudKitRegistrationMessage : CDDCloudKitMessage
{
    NSString *_bundleIdentifier;
    NSFileHandle *_storeFileHandle;
    NSString *_storePath;
    NSString *_storeFileProtectionClass;
    NSString *_storeType;
    NSString *_storeConfigurationName;
    NSString *_containerIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(readonly, nonatomic) NSString *storeConfigurationName; // @synthesize storeConfigurationName=_storeConfigurationName;
@property(readonly, nonatomic) NSString *storeType; // @synthesize storeType=_storeType;
@property(readonly, nonatomic) NSString *storeFileProtectionClass; // @synthesize storeFileProtectionClass=_storeFileProtectionClass;
@property(readonly, nonatomic) NSString *storePath; // @synthesize storePath=_storePath;
@property(readonly, nonatomic) NSFileHandle *storeFileHandle; // @synthesize storeFileHandle=_storeFileHandle;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFileHandle:(id)arg1 forStoreWithDescription:(id)arg2 andBundleIdentifier:(id)arg3;

@end

