//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSDate, NSSet, NSString;

@interface PPTopicQuery : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _scoreWithBiases;
    BOOL _scoreWithStrictFiltering;
    BOOL _excludeWithoutSentiment;
    BOOL _scoreWithCalibration;
    BOOL _orderByIdentifier;
    unsigned long long _limit;
    NSDate *_fromDate;
    NSDate *_toDate;
    NSDate *_scoringDate;
    NSSet *_matchingSourceBundleIds;
    NSSet *_excludingSourceBundleIds;
    unsigned long long _deviceFilter;
    double _decayRate;
    NSSet *_matchingTopicIds;
    unsigned long long _minimumComponentCount;
    NSSet *_matchingAlgorithms;
    NSSet *_excludingAlgorithms;
    NSString *_matchingTopicTrie;
}

+ (id)_algorithmsDescription:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL orderByIdentifier; // @synthesize orderByIdentifier=_orderByIdentifier;
@property(retain, nonatomic) NSString *matchingTopicTrie; // @synthesize matchingTopicTrie=_matchingTopicTrie;
@property(retain, nonatomic) NSSet *excludingAlgorithms; // @synthesize excludingAlgorithms=_excludingAlgorithms;
@property(retain, nonatomic) NSSet *matchingAlgorithms; // @synthesize matchingAlgorithms=_matchingAlgorithms;
@property(nonatomic) unsigned long long minimumComponentCount; // @synthesize minimumComponentCount=_minimumComponentCount;
@property(nonatomic) BOOL scoreWithCalibration; // @synthesize scoreWithCalibration=_scoreWithCalibration;
@property(nonatomic) BOOL excludeWithoutSentiment; // @synthesize excludeWithoutSentiment=_excludeWithoutSentiment;
@property(nonatomic) BOOL scoreWithStrictFiltering; // @synthesize scoreWithStrictFiltering=_scoreWithStrictFiltering;
@property(retain, nonatomic) NSSet *matchingTopicIds; // @synthesize matchingTopicIds=_matchingTopicIds;
@property(nonatomic) BOOL scoreWithBiases; // @synthesize scoreWithBiases=_scoreWithBiases;
@property(nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property(nonatomic) unsigned long long deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property(retain, nonatomic) NSSet *excludingSourceBundleIds; // @synthesize excludingSourceBundleIds=_excludingSourceBundleIds;
@property(retain, nonatomic) NSSet *matchingSourceBundleIds; // @synthesize matchingSourceBundleIds=_matchingSourceBundleIds;
@property(retain, nonatomic) NSDate *scoringDate; // @synthesize scoringDate=_scoringDate;
@property(retain, nonatomic) NSDate *toDate; // @synthesize toDate=_toDate;
@property(retain, nonatomic) NSDate *fromDate; // @synthesize fromDate=_fromDate;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (id)customizedDescription;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTopicQuery:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) BOOL overrideDecayRate;

@end

