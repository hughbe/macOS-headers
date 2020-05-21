//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WBSCompletionListItem-Protocol.h>
#import <SafariSharedUI/WBSParsecSearchFlightsResult-Protocol.h>
#import <SafariSharedUI/WBSParsecSearchGenericResult-Protocol.h>
#import <SafariSharedUI/WBSParsecSearchMapsResult-Protocol.h>
#import <SafariSharedUI/WBSParsecSearchResult-Protocol.h>
#import <SafariSharedUI/WBSParsecSearchSimpleResult-Protocol.h>
#import <SafariSharedUI/WBSParsecSearchSportsResult-Protocol.h>

@class MKMapItem, NSArray, NSNumber, NSString, NSURL, SFFlight, SFSearchResult, WBSParsecActionButton, WBSParsecAuxiliaryInfo, WBSParsecImageRepresentation, WBSParsecLegacySearchResult, WBSParsecSearchMapsResultFeedbackSender, WBSParsecSearchSportsAttributionExtraCompletionItem, WBSQuerySuggestion, WBSSFSearchResultAdapter;
@protocol WBSParsecSearchSession;

@interface WBSParsecSearchResult : NSObject <WBSParsecSearchFlightsResult, WBSParsecSearchResult, WBSCompletionListItem, WBSParsecSearchGenericResult, WBSParsecSearchMapsResult, WBSParsecSearchSimpleResult, WBSParsecSearchSportsResult>
{
    WBSSFSearchResultAdapter *_sfSearchResultAdapter;
    WBSParsecLegacySearchResult *_legacySearchResult;
}

+ (long long)typeForSFSearchResult:(id)arg1 isOneLine:(BOOL)arg2;
+ (long long)typeForSFSearchResult:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) WBSParsecLegacySearchResult *legacySearchResult; // @synthesize legacySearchResult=_legacySearchResult;
- (id)_resultPresentedInCard;
- (id)_sportsResult;
- (id)_simpleResult;
- (id)_mapsResult;
- (id)_genericResult;
- (id)_flightResult;
- (id)_result;
@property(readonly, nonatomic) WBSParsecSearchSportsAttributionExtraCompletionItem *extraCompletionItem;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSArray *individualScores;
@property(readonly, copy, nonatomic) NSArray *images;
- (id)titleGlyphWithSession:(id)arg1;
@property(readonly, nonatomic) unsigned long long descriptionAlignment;
@property(readonly, nonatomic) BOOL hasSingleLineDescriptionAndTitle;
@property(readonly, nonatomic) BOOL descriptionTextCanWrap;
@property(readonly, nonatomic) NSNumber *descriptionMaximumNumberOfLines;
@property(readonly, nonatomic) NSString *descriptionLeadInText;
@property(readonly, nonatomic) NSNumber *titleMaximumNumberOfLines;
@property(retain, nonatomic) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender;
@property(retain, nonatomic) id <WBSParsecSearchSession> parsecSearchSession;
- (id)thumbnailWithSession:(id)arg1;
@property(readonly, nonatomic) WBSParsecImageRepresentation *thumbnail;
@property(readonly, nonatomic) WBSParsecAuxiliaryInfo *auxiliaryInfo;
@property(readonly, nonatomic) WBSParsecImageRepresentation *secondaryTitleGlyph;
@property(readonly, copy, nonatomic) NSString *secondaryTitle;
@property(readonly, copy, nonatomic) NSString *footnote;
@property(readonly, copy, nonatomic) NSArray *descriptionRichTexts;
@property(readonly, nonatomic) NSNumber *titleMaximumLines;
- (void)getFlight:(id *)arg1 selectedLegIndex:(unsigned long long *)arg2;
@property unsigned long long selectedLegIndex; // @dynamic selectedLegIndex;
@property(readonly) SFFlight *sfFlight; // @dynamic sfFlight;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (id)completionIconWithSession:(id)arg1;
- (id)iconWithSession:(id)arg1;
@property(readonly, nonatomic) WBSParsecImageRepresentation *completionIcon;
@property(readonly, nonatomic) WBSParsecImageRepresentation *icon;
@property(nonatomic) long long parsecQueryID;
@property(readonly, copy, nonatomic) NSString *sectionBundleIdentifier;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
- (BOOL)canBecomeTopHitForQuery:(id)arg1;
@property(readonly, nonatomic) unsigned long long displayOptions;
@property(readonly, nonatomic) long long placementHint;
@property(readonly, copy, nonatomic) NSString *alternateSectionHeader;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) WBSParsecActionButton *actionButton;
@property(readonly, copy, nonatomic) NSString *referrerForLoadingResult;
@property(readonly, copy, nonatomic) NSString *mediaKind;
@property(readonly, nonatomic) NSURL *appPunchoutURL;
@property(readonly, nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(readonly, copy, nonatomic) NSString *query;
@property(readonly, nonatomic) NSString *completion;
@property(readonly, nonatomic) NSString *sectionHeader;
@property(readonly, nonatomic) NSString *urlString;
@property(readonly, nonatomic) NSString *feedbackIdentifier;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) long long subtype;
@property(readonly, nonatomic) long long type;
- (id)initWithSFSearchResult:(id)arg1;
- (id)initWithLegacySearchResult:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly) Class superclass;

@end

