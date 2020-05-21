//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/_GEOFailedTicket.h>

#import <GeoServices/GEOMapServiceSearchTicket-Protocol.h>

@class GEOCategorySearchResultSection, GEODirectionIntent, GEOMapRegion, GEOMapServiceTraits, GEOPDMerchantLookupResult, GEORelatedSearchSuggestion, GEOResolvedItem, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOFailedSearchTicket : _GEOFailedTicket <GEOMapServiceSearchTicket>
{
    NSString *searchQuery;
    NSString *_searchQuery;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
- (id)initWithError:(id)arg1 searchQuery:(id)arg2 traits:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSArray *browseCategories;
@property(nonatomic) unsigned long long cachePolicy;
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property(readonly, nonatomic) GEOCategorySearchResultSection *categorySearchResultSection;
@property(readonly, nonatomic, getter=isChainResultSet) BOOL chainResultSet;
@property(readonly, nonatomic) GEOResolvedItem *clientResolvedResult;
@property(readonly, nonatomic) CDStruct_d1a7ebee dataRequestKind;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) GEODirectionIntent *directionIntent;
@property(readonly, nonatomic) NSArray *displayHeaderSubstitutes;
@property(readonly, nonatomic) unsigned int dymSuggestionVisibleTime;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) GEOPDMerchantLookupResult *merchantLookupResult;
@property(readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, nonatomic) GEOMapRegion *resultBoundingRegion;
@property(readonly, nonatomic) NSString *resultDisplayHeader;
@property(readonly, nonatomic) NSString *resultSectionHeader;
@property(readonly, nonatomic) NSArray *retainedSearchMetadata;
@property(readonly, nonatomic) NSArray *searchResultSections;
@property(readonly, nonatomic) int searchResultType;
@property(readonly, nonatomic) BOOL shouldEnableRedoSearch;
@property(readonly, nonatomic) BOOL showDymSuggestionCloseButton;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

