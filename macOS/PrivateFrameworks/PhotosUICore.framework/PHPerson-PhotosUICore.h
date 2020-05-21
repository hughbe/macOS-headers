//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHPerson.h>

#import <PhotosUICore/PXPerson-Protocol.h>

@class NSDate, NSString;

@interface PHPerson (PhotosUICore) <PXPerson>
+ (id)px_localizedNameFromContact:(id)arg1;
+ (void)px_loadRepresentativeFacesForPersons:(id)arg1;
+ (id)px_fetchPersonsForSuggestion:(id)arg1 options:(id)arg2;
@property(readonly) NSString *px_displayName;
@property(readonly) NSString *px_localizedName;
@property(readonly) NSDate *px_keyPhotoDate;
@property(readonly) BOOL isPersonModel;
@property(readonly) NSString *px_localIdentifier;
@property(readonly) unsigned long long numberOfAssets;
- (void)requestFaceTileImageWithTargetSize:(struct CGSize)arg1 cropFactor:(unsigned long long)arg2 style:(unsigned long long)arg3 cacheResult:(BOOL)arg4 boundFaceRect:(BOOL)arg5 completionBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) BOOL isVerified;
@property(readonly) NSString *name;
@property(readonly) Class superclass;
@end

