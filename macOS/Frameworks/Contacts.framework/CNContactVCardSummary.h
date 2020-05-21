//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNContactVCardSummary : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;
    NSString *_subtitle;
    unsigned long long _contactCount;
    NSArray *_avatarContacts;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isAvatarContacts:(id)arg1 equalTo:(id)arg2;
+ (id)localizedStringWithName:(id)arg1 andThisManyOthers:(unsigned long long)arg2;
+ (id)localizedStringWithName:(id)arg1 andOtherName:(id)arg2;
+ (id)makeFormatter;
+ (id)defaultNameFormatter;
+ (id)nameForContact:(id)arg1;
+ (id)namesForContact:(id)arg1;
+ (id)readingOptionsWithContactLimit:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *avatarContacts; // @synthesize avatarContacts=_avatarContacts;
@property(readonly, nonatomic) unsigned long long contactCount; // @synthesize contactCount=_contactCount;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *descriptiveLabel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 contactCount:(unsigned long long)arg3 avatarContacts:(id)arg4;
- (id)initWithData:(id)arg1 error:(id *)arg2;

@end

