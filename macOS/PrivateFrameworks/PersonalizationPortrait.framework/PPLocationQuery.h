//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSDate, NSSet, NSString;

@interface PPLocationQuery : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _excludingWithoutSentiment;
    unsigned long long _limit;
    NSDate *_fromDate;
    NSDate *_toDate;
    NSDate *_scoringDate;
    NSSet *_matchingSourceBundleIds;
    NSSet *_excludingSourceBundleIds;
    unsigned long long _deviceFilter;
    double _perRecordDecayRate;
    double _decayRate;
    NSString *_fuzzyMatchingString;
    NSSet *_fuzzyMatchingFields;
    NSSet *_matchingCategories;
    NSSet *_matchingAlgorithms;
    NSSet *_excludingAlgorithms;
    unsigned long long _consumer;
}

+ (id)queryForMapsWithLimit:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3;
+ (id)_algorithmsDescription:(id)arg1;
+ (id)_matchingCategoriesDescription:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long consumer; // @synthesize consumer=_consumer;
@property(nonatomic) BOOL excludingWithoutSentiment; // @synthesize excludingWithoutSentiment=_excludingWithoutSentiment;
@property(retain, nonatomic) NSSet *excludingAlgorithms; // @synthesize excludingAlgorithms=_excludingAlgorithms;
@property(retain, nonatomic) NSSet *matchingAlgorithms; // @synthesize matchingAlgorithms=_matchingAlgorithms;
@property(retain, nonatomic) NSSet *matchingCategories; // @synthesize matchingCategories=_matchingCategories;
@property(retain, nonatomic) NSSet *fuzzyMatchingFields; // @synthesize fuzzyMatchingFields=_fuzzyMatchingFields;
@property(retain, nonatomic) NSString *fuzzyMatchingString; // @synthesize fuzzyMatchingString=_fuzzyMatchingString;
@property(nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property(nonatomic) double perRecordDecayRate; // @synthesize perRecordDecayRate=_perRecordDecayRate;
@property(nonatomic) unsigned long long deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property(retain, nonatomic) NSSet *excludingSourceBundleIds; // @synthesize excludingSourceBundleIds=_excludingSourceBundleIds;
@property(retain, nonatomic) NSSet *matchingSourceBundleIds; // @synthesize matchingSourceBundleIds=_matchingSourceBundleIds;
@property(retain, nonatomic) NSDate *scoringDate; // @synthesize scoringDate=_scoringDate;
@property(retain, nonatomic) NSDate *toDate; // @synthesize toDate=_toDate;
@property(retain, nonatomic) NSDate *fromDate; // @synthesize fromDate=_fromDate;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (id)customizedDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLocationQuery:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

