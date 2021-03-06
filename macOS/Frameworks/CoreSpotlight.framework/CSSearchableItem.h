//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/CSIndexQueuableItem-Protocol.h>
#import <CoreSpotlight/NSCopying-Protocol.h>
#import <CoreSpotlight/NSSecureCoding-Protocol.h>

@class CSSearchableItemAttributeSet, MISSING_TYPE, NSDate, NSString;

@interface CSSearchableItem : NSObject <CSIndexQueuableItem, NSSecureCoding, NSCopying>
{
    NSString *_filePath;
    BOOL _shouldSetSpotlightMailMessageAttributes;
    CSSearchableItemAttributeSet *_attributeSet;
    unsigned long long _machTime;
    MISSING_TYPE *_score;
}

+ (BOOL)supportsSecureCoding;
+ (id)searchableItemFromUserActivity:(id)arg1 bundleID:(id)arg2;
- (void).cxx_destruct;
@property unsigned long long machTime; // @synthesize machTime=_machTime;
@property BOOL shouldSetSpotlightMailMessageAttributes; // @synthesize shouldSetSpotlightMailMessageAttributes=_shouldSetSpotlightMailMessageAttributes;
@property MISSING_TYPE *score; // @synthesize score=_score;
- (void)setAttributes:(id)arg1;
- (id)attributes;
@property BOOL noIndex;
@property BOOL isUpdate;
@property(copy) NSDate *expirationDate;
@property(copy) NSString *protection;
@property(copy) NSString *bundleID;
@property(copy) NSString *domainIdentifier;
@property(copy) NSString *uniqueIdentifier;
@property(retain) CSSearchableItemAttributeSet *attributeSet; // @synthesize attributeSet=_attributeSet;
- (BOOL)_hasAttributesOfType:(id)arg1;
- (BOOL)_isFullyFormed;
- (id)debugDescription;
- (id)description;
- (id)_propertiesDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributeSet:(id)arg3;
- (id)init;
- (id)filePath;
- (void)markAsUsed;
- (void)_updateWithSearchableItem:(id)arg1;
- (id)filteredSpotlightAttributes;
- (void)_standardizeSiriShortcuts:(id)arg1;
- (void)_standardizeMarkAs:(id)arg1;
- (void)_standardizeHTML:(id)arg1;
- (void)_standardizeDeprecatedProperties:(id)arg1;
- (void)_populateMissingPeopleWithNames:(id)arg1 emailAddresses:(id)arg2 allItemPersons:(id)arg3 primaryItemPersons:(id)arg4 additionalItemPersons:(id)arg5 hiddenAdditionalItemPersons:(id)arg6 personDictionary:(id)arg7 contactProperties:(id)arg8 nameKey:(id)arg9 emailKey:(id)arg10 contactIdentifierKey:(id)arg11 personKey:(id)arg12 attributeSet:(id)arg13;
- (void)breakOutPersonInformationInSet:(id)arg1 withName:(id)arg2 emails:(id)arg3 contactIdentifiers:(id)arg4 nameKey:(id)arg5 emailKey:(id)arg6 contactIdentifierKey:(id)arg7 emailAddressKey:(id)arg8 attributeSet:(id)arg9;
- (void)_fixBrokenAuthorNames:(id)arg1;
- (void)_standardizePeople:(id)arg1;
- (void)_standardizeFileProvider:(id)arg1;
- (void)_parseEmailHeadersForFeatures:(id)arg1;
- (void)standardizeAttributes;
- (id)initWithAttributeSet:(id)arg1;
- (id)initWithMDItem:(struct __MDItem *)arg1 attributes:(id)arg2;
- (id)searchableItem;

@end

