//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class CLGeocoder, LPMapCollectionMetadata, LPMapMetadata, MKURLParser;

__attribute__((visibility("hidden")))
@interface LPAppleMapsMetadataProviderSpecialization : LPMetadataProviderSpecialization
{
    BOOL _cancelled;
    CLGeocoder *_geocoder;
    MKURLParser *_parser;
    LPMapMetadata *_mapMetadata;
    LPMapCollectionMetadata *_collectionMetadata;
}

+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;
+ (unsigned long long)specialization;
- (void).cxx_destruct;
- (void)complete;
- (void)completeWithCollection;
- (void)completeWithDirections;
- (void)completeWithPlacemark:(id)arg1;
- (void)completeWithMapItem:(id)arg1;
- (void)completeWithSearchQuery:(id)arg1;
- (void)fail;
- (void)cancel;
- (void)continueWithBaseSnapshotOptions:(id)arg1 mapItems:(id)arg2;
- (void)start;
- (id)geocoder;
- (void)resolveMapRegionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

