//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC8FMClient24VoiceAssistantDeviceName : NSObject
{
    MISSING_TYPE *deviceName;
    MISSING_TYPE *ownerFirstName;
    MISSING_TYPE *ownerLastName;
    MISSING_TYPE *$__lazy_storage_$_syncAnchor;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, copy) NSString *syncAnchor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDeviceName:(id)arg1 ownerFirstName:(id)arg2 ownerLastName:(id)arg3;
@property(nonatomic, readonly) NSString *ownerLastName;
@property(nonatomic, readonly) NSString *ownerFirstName;
@property(nonatomic, readonly) NSString *deviceName;

@end

