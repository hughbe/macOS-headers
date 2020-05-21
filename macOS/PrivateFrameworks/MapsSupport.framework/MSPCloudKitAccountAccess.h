//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, NSString;

@interface MSPCloudKitAccountAccess : NSObject
{
    CKContainer *_container;
    CKContainer *_containerWithZoneWidePCS;
    CKContainer *_secureContainer;
    CKContainer *_secureContainerWithZoneWidePCS;
    BOOL _useSecureContainer;
    BOOL _disableDeviceToDeviceEncryption;
    NSString *_accountIdentifier;
}

+ (void)fetchDeviceToDeviceEncryptionStatus:(CDUnknownBlockType)arg1;
+ (id)sharedAccess;
+ (long long)containerEnvironmentForAccessEnvironment:(long long)arg1;
+ (long long)defaultEnvironment;
+ (BOOL)hasCloudKitEntitlement;
+ (BOOL)useLongLivedOperations;
- (void).cxx_destruct;
@property(nonatomic) BOOL disableDeviceToDeviceEncryption; // @synthesize disableDeviceToDeviceEncryption=_disableDeviceToDeviceEncryption;
@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) BOOL useSecureContainer; // @synthesize useSecureContainer=_useSecureContainer;
- (id)description;
- (void)fetchDeviceToDeviceEncryptionStatus:(CDUnknownBlockType)arg1;
- (void)fetchAccountStatus:(CDUnknownBlockType)arg1;
- (void)fetchAccountIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (id)containerForAccount;
- (id)containerWithZoneWidePCS:(BOOL)arg1;
- (id)initWithEnvironment:(long long)arg1 createContainers:(BOOL)arg2;
- (id)initWithEnvironment:(long long)arg1;

@end

