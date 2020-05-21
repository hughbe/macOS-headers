//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray;

@interface PKAppletSubcredentialSharingConfirguration : NSObject <NSSecureCoding>
{
    BOOL _sharingRequiresPassword;
    unsigned long long _maxNumberOfSharedCredentials;
    NSArray *_supportedEntitlements;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL sharingRequiresPassword; // @synthesize sharingRequiresPassword=_sharingRequiresPassword;
@property(copy, nonatomic) NSArray *supportedEntitlements; // @synthesize supportedEntitlements=_supportedEntitlements;
@property(nonatomic) unsigned long long maxNumberOfSharedCredentials; // @synthesize maxNumberOfSharedCredentials=_maxNumberOfSharedCredentials;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)supportedEntitlementWithValue:(unsigned long long)arg1;
- (id)asDictionary;
- (id)initWithDictionary:(id)arg1;

@end

