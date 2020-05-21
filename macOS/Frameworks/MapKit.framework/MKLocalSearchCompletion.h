//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODirectionIntent, GEOResolvedItem, GEORetainedSearchMetadata, GEOSearchCategory, GEOServerResultScoreMetadata, MKMapItem, NSArray, NSString;
@protocol GEOCompletionItem;

@interface MKLocalSearchCompletion : NSObject
{
    id <GEOCompletionItem> _item;
    unsigned long long _serverSectionIndex;
    unsigned long long _serverItemIndexInSection;
    NSString *_sourceID;
    NSString *_localizedSectionHeader;
    MKMapItem *_mapItem;
    BOOL _alreadySentFeedback;
    BOOL _shouldDisplayNoResults;
    BOOL _shouldEnableRAPForNoResults;
    MKLocalSearchCompletion *_directionIntentOrigin;
    MKLocalSearchCompletion *_directionIntentDestination;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MKLocalSearchCompletion *directionIntentDestination; // @synthesize directionIntentDestination=_directionIntentDestination;
@property(retain, nonatomic) MKLocalSearchCompletion *directionIntentOrigin; // @synthesize directionIntentOrigin=_directionIntentOrigin;
@property(readonly, nonatomic, getter=_alreadySentFeedback) BOOL alreadySentFeedback; // @synthesize alreadySentFeedback=_alreadySentFeedback;
@property(copy, nonatomic) NSString *localizedSectionHeader; // @synthesize localizedSectionHeader=_localizedSectionHeader;
@property(copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(readonly, nonatomic) unsigned long long serverItemIndexInSection; // @synthesize serverItemIndexInSection=_serverItemIndexInSection;
@property(readonly, nonatomic) unsigned long long serverSectionIndex; // @synthesize serverSectionIndex=_serverSectionIndex;
- (id)icon;
- (id)highlightsForLine:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *displayLines;
@property(readonly, nonatomic, getter=_hasDisambiguationRadiusMeters) BOOL hasDisambiguationRadiusMeters;
@property(readonly, nonatomic, getter=_disambiguationRadiusMeters) float disambiguationRadiusMeters;
@property(readonly, nonatomic, getter=_placeType) int placeType;
@property(readonly, nonatomic, getter=_type) long long type;
- (void)sendFeedback;
- (id)copyStorage;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)_geoCompletionItem;
@property(readonly, nonatomic) NSString *queryAcceleratorCompletionString;
@property(readonly, nonatomic) BOOL hasQueryAcceleratorAffordanceEnabled;
@property(readonly, nonatomic) GEOServerResultScoreMetadata *serverResultScoreMetadata;
@property(readonly, nonatomic) long long autocompleteCellType;
@property(readonly, nonatomic) long long entryTapBehavior;
@property(readonly, nonatomic) long long sortPriority;
@property(readonly, nonatomic) BOOL hasSortPriority;
@property(readonly, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata;
@property(readonly, nonatomic) GEODirectionIntent *directionIntent;
@property(readonly, nonatomic) GEOResolvedItem *clientResolved;
@property(readonly, nonatomic) GEOSearchCategory *category;
@property(readonly, nonatomic) MKMapItem *mapItem;
- (id)calloutTitle;
- (id)queryLine;
- (BOOL)getCoordinate:(struct CLLocationCoordinate2D *)arg1;
@property(readonly, nonatomic) NSArray *subtitleHighlightRanges;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSArray *titleHighlightRanges;
@property(readonly, nonatomic) NSString *title;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)initWithGeoCompletionItem:(id)arg1 serverSectionIndex:(unsigned long long)arg2 serverItemIndexInSection:(unsigned long long)arg3;
@property(readonly, nonatomic) id <GEOCompletionItem> geoCompletionItem;

@end

