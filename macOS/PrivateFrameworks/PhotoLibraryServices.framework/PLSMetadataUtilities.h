//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLSMetadataUtilities : NSObject
{
}

+ (id)allAlbumsDetailsWriteToPath:(id)arg1 inLibrary:(id)arg2;
+ (id)_detailsForAlbum:(id)arg1;
+ (id)allAssetsDetailsWriteToPath:(id)arg1 includingLocal:(BOOL)arg2 includingFingerprints:(BOOL)arg3 forAlbumTitled:(id)arg4 library:(id)arg5;
+ (void)serializeJSONFromObjectDetails:(id)arg1 ToPath:(id)arg2;
+ (BOOL)initializeJSONFileAtPath:(id)arg1;
+ (void)_writeJSONForObjectDetails:(id)arg1 toFile:(id)arg2;
+ (void)writeJSONData:(id)arg1 toFile:(id)arg2;
+ (id)_detailsForAsset:(id)arg1 includingLocal:(BOOL)arg2 includingFingerprints:(BOOL)arg3;
+ (id)_normalizeObjectForJSON:(id)arg1;
+ (id)dictionaryFromManagedObject:(id)arg1 excludeAttributes:(id)arg2 includingRelationships:(id)arg3 excludeRelationshipAttributes:(id)arg4 andSubRelationships:(id)arg5;
+ (id)_allAlbumsInPhotoLibrary:(id)arg1;
+ (BOOL)_writeDetails:(id)arg1 forEntityNamed:(id)arg2 toFilepath:(id)arg3 withDefaultFilename:(id)arg4;

@end

