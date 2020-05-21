//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFSearchResult.h>

#import <SpotlightServices/QLSeamlessOpenerDelegate-Protocol.h>

@class LSApplicationProxy, MISSING_TYPE, NSArray, NSDate, NSNumber, NSString, NSURL, PRSRankingItem;
@protocol NSPasteboardWriting;

@interface SFSearchResult_SpotlightExtras : SFSearchResult <QLSeamlessOpenerDelegate>
{
    unsigned long long _matchBits;
    BOOL _lastRestrictionStatus;
    BOOL _needsPreviewUpdate;
    BOOL _autoLaunch;
    BOOL _isFirstTopHit;
    BOOL _isAnyTopHit;
    BOOL _isShowAllInFinder;
    BOOL _isSynthetic;
    BOOL _isFolderQuery;
    BOOL _supportsSubView;
    BOOL _isUsed;
    BOOL _hasUsage;
    float _l2score;
    NSNumber *_groupId;
    NSString *_groupName;
    PRSRankingItem *_rankingItem;
    NSString *_relatedIdentifier;
    NSString *_uniqueIdentifier;
    NSNumber *_documentIdentifier;
    NSString *_displayName;
    NSURL *_fastLaunchURL;
    NSArray *_otherTypes;
    NSArray *_otherNames;
    NSDate *_lastUsedDate;
    NSString *_distinguishPathString;
    NSURL *_altPath;
    long long _dpos;
    NSString *_NLPConfidence;
    NSString *_NLPCategory;
    double _cep;
    long long _feedbackBlockId;
    MISSING_TYPE *_rank;
}

+ (void)initialize;
- (void).cxx_destruct;
@property BOOL hasUsage; // @synthesize hasUsage=_hasUsage;
@property(nonatomic) long long feedbackBlockId; // @synthesize feedbackBlockId=_feedbackBlockId;
@property BOOL isUsed; // @synthesize isUsed=_isUsed;
@property(nonatomic) double cep; // @synthesize cep=_cep;
@property(retain) NSString *NLPCategory; // @synthesize NLPCategory=_NLPCategory;
@property(retain) NSString *NLPConfidence; // @synthesize NLPConfidence=_NLPConfidence;
@property(nonatomic) long long dpos; // @synthesize dpos=_dpos;
@property(retain) NSURL *altPath; // @synthesize altPath=_altPath;
@property BOOL supportsSubView; // @synthesize supportsSubView=_supportsSubView;
@property(nonatomic) float l2score; // @synthesize l2score=_l2score;
@property(nonatomic) MISSING_TYPE *rank; // @synthesize rank=_rank;
@property(retain) NSString *distinguishPathString; // @synthesize distinguishPathString=_distinguishPathString;
@property BOOL isFolderQuery; // @synthesize isFolderQuery=_isFolderQuery;
@property(readonly) NSDate *lastUsedDate; // @synthesize lastUsedDate=_lastUsedDate;
@property(readonly) NSArray *otherNames; // @synthesize otherNames=_otherNames;
@property(readonly) NSArray *otherTypes; // @synthesize otherTypes=_otherTypes;
@property(nonatomic) BOOL isSynthetic; // @synthesize isSynthetic=_isSynthetic;
@property(nonatomic) BOOL isShowAllInFinder; // @synthesize isShowAllInFinder=_isShowAllInFinder;
@property(nonatomic) BOOL isAnyTopHit; // @synthesize isAnyTopHit=_isAnyTopHit;
@property(nonatomic) BOOL isFirstTopHit; // @synthesize isFirstTopHit=_isFirstTopHit;
@property(getter=isAutoLaunch) BOOL autoLaunch; // @synthesize autoLaunch=_autoLaunch;
@property(readonly) NSURL *fastLaunchURL; // @synthesize fastLaunchURL=_fastLaunchURL;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSNumber *documentIdentifier; // @synthesize documentIdentifier=_documentIdentifier;
@property(readonly) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly) NSString *relatedIdentifier; // @synthesize relatedIdentifier=_relatedIdentifier;
@property(retain, nonatomic) PRSRankingItem *rankingItem; // @synthesize rankingItem=_rankingItem;
- (void)prepareIcons;
- (void)setCategory:(id)arg1;
@property(readonly) NSString *category;
- (id)valueForAttribute:(id)arg1;
@property(nonatomic) MISSING_TYPE *score;
- (unsigned long long)matchQuality;
@property(readonly) BOOL isExactMatch;
@property(readonly) BOOL isPrefixMatch;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSNumber *groupId; // @synthesize groupId=_groupId;
- (void)updateRenderOrEngagementCountsForKey:(id)arg1 date:(id)arg2;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToResult:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL allowsCPRecording;
- (void)cacheImage:(id)arg1 forKey:(id)arg2;
- (id)cachedImageForKey:(id)arg1;
- (void)prepare;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFastLaunchURL:(id)arg1 contentType:(id)arg2 displayName:(id)arg3 groupId:(id)arg4;
- (id)initWithFastLaunchURL:(id)arg1 contentType:(id)arg2 displayName:(id)arg3;
- (id)initWithContentType:(id)arg1 displayName:(id)arg2;
- (id)initWithContentType:(id)arg1 displayName:(id)arg2 groupId:(id)arg3;
- (id)initWithResult:(id)arg1;
- (id)initWithResult:(id)arg1 groupId:(id)arg2;
@property(readonly, nonatomic) id <NSPasteboardWriting> pasteboardObject;
@property(readonly, nonatomic) NSURL *URL;
- (id)fastURL;
@property(readonly) NSString *filePath;
@property(readonly) LSApplicationProxy *appProxy;
@property(readonly) BOOL isLocalResult;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

