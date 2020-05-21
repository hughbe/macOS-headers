//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGAbstractSuggester.h>

#import <PhotosGraph/PGCoordinatableSuggester-Protocol.h>

@class NSArray, NSDictionary, NSEnumerator, NSMutableDictionary, NSString, PGSuggestionOptions;

@interface PGLivePhotoVariationSuggester : PGAbstractSuggester <PGCoordinatableSuggester>
{
    PGSuggestionOptions *_options;
    NSArray *_suggestedAssets;
    NSEnumerator *_suggestedAssetEnumerator;
    NSDictionary *_variationResults;
    NSMutableDictionary *_recipeReasonByAssetLocalIdentifier;
    BOOL _doLoop;
    BOOL _doLongExposure;
}

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;
- (void).cxx_destruct;
- (id)reasonsForSuggestion:(id)arg1;
- (id)suggestionWithAsset:(id)arg1;
- (id)suggestedAssetsInAssets:(id)arg1 options:(id)arg2;
- (id)suggestedAssetsInAssets:(id)arg1;
- (id)livePhotosBetweenStartDate:(id)arg1 andEndDate:(id)arg2;
- (id)recipeForVariationWithLivePhoto:(id)arg1 inResults:(id)arg2 suggestionSubtype:(unsigned short *)arg3;
- (void)_setDoFlagsWithOptions:(id)arg1;
- (void)reset;
- (id)nextSuggestion;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

