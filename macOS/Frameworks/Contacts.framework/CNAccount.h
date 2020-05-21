//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNAccount : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_externalIdentifierString;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)requestAccountSyncWithOptions:(unsigned long long)arg1;
+ (BOOL)requestAccountSyncWithDefaultOptions;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)identifierProvider;
+ (id)localAccount;
+ (id)os_log;
+ (id)predicateForAccountsWithIdentifiers:(id)arg1;
+ (id)predicateForAccountForContainerWithIdentifier:(id)arg1;
+ (id)predicateForAccountWithExternalIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *externalIdentifierString; // @synthesize externalIdentifierString=_externalIdentifierString;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2;
- (id)initWithExternalIdentifier:(id)arg1;
- (id)init;

@end

