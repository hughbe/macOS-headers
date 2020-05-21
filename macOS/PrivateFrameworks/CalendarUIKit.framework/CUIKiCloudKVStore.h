//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol NSObject><NSCopying><NSCoding;

@interface CUIKiCloudKVStore : NSObject
{
    BOOL _hasConnectedToCarBluetooth;
    NSDate *_lastCarConnectionDate;
    id <NSObject><NSCopying><NSCoding> _ubiquityIdentityToken;
}

+ (BOOL)_haveiCloudKVStoreEntitlement;
+ (id)sharediCloudKVStore;
- (void).cxx_destruct;
@property(retain) id <NSObject><NSCopying><NSCoding> ubiquityIdentityToken; // @synthesize ubiquityIdentityToken=_ubiquityIdentityToken;
@property(retain, nonatomic) NSDate *lastCarConnectionDate; // @synthesize lastCarConnectionDate=_lastCarConnectionDate;
@property(nonatomic) BOOL hasConnectedToCarBluetooth; // @synthesize hasConnectedToCarBluetooth=_hasConnectedToCarBluetooth;
- (void)_storeDidChange:(id)arg1;
- (void)_identityChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)_canAccessiCloudKVStore;

@end

