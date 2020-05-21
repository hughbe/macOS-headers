//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSCopying-Protocol.h>
#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSString, _CDContactStatistics;

@interface _CDContact : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _type;
    NSString *_identifier;
    NSString *_customIdentifier;
    NSString *_personId;
    unsigned long long _personIdType;
    NSString *_displayName;
    unsigned long long _displayType;
    _CDContactStatistics *_statistics;
}

+ (BOOL)supportsSecureCoding;
+ (id)contactWithIdentifier:(id)arg1 type:(unsigned long long)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned long long)arg5;
+ (unsigned long long)convertDisplayType:(long long)arg1;
+ (unsigned long long)convertHandleType:(long long)arg1;
+ (id)predicateForContact:(id)arg1;
+ (id)predicateForContactWithPersonId:(id)arg1 personIdType:(unsigned long long)arg2;
+ (id)predicateForContactWithDisplayName:(id)arg1;
+ (id)predicateForContactWithIdentifier:(id)arg1;
+ (id)predicateForContactWithType:(unsigned long long)arg1;
+ (id)_CDValueForContactProperty:(id)arg1;
+ (id)_contactPropertiesForContacts:(id)arg1 mechanismHints:(id)arg2;
+ (id)contactPropertiesForContacts:(id)arg1 mechanismHints:(id)arg2;
+ (id)contactPropertiesForContacts:(id)arg1;
+ (id)typeAsCNContactPropertyKey:(unsigned long long)arg1;
+ (unsigned long long)typeFromString:(id)arg1;
+ (id)normalizedStringKey:(id)arg1;
+ (id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned long long)arg5;
+ (id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 personId:(id)arg3 personIdType:(unsigned long long)arg4;
+ (id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2;
- (void).cxx_destruct;
@property(retain) _CDContactStatistics *statistics; // @synthesize statistics=_statistics;
@property unsigned long long displayType; // @synthesize displayType=_displayType;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property unsigned long long personIdType; // @synthesize personIdType=_personIdType;
@property(retain) NSString *personId; // @synthesize personId=_personId;
@property(retain) NSString *customIdentifier; // @synthesize customIdentifier=_customIdentifier;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property unsigned long long type; // @synthesize type=_type;
- (BOOL)mayContainPrefix:(id)arg1;
- (void)mergeWithContact:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)mayRepresentSamePersonAs:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly) NSString *handle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 customIdentifier:(id)arg3 displayName:(id)arg4 displayType:(unsigned long long)arg5 personId:(id)arg6 personIdType:(unsigned long long)arg7;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned long long)arg5;
- (id)initWithINPerson:(id)arg1;
- (id)contactPropertyWithOptionalMechanismHint:(long long *)arg1;
- (id)contactPropertyWithMechanismHint:(long long)arg1;
- (id)contactProperty;
- (id)initWithContactProperty:(id)arg1;
@property(retain) NSString *identifierType;

@end

