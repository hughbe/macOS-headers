//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUImageReader : NSObject
{
}

+ (id)_privateImageMetadataDescriptors;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (BOOL)hasPrivateImageMetadata:(id)arg1;
- (id)_readDataFromTagAtPath:(id)arg1 inMetadata:(struct CGImageMetadata *)arg2;
- (id)_readBaseImageFromDataProvider:(struct CGDataProvider *)arg1 providerSource:(id)arg2 baseWasValid:(char *)arg3;
- (id)readBaseImageFromImageAtURL:(id)arg1 baseWasValid:(char *)arg2;
- (id)readBaseImageFromData:(id)arg1 baseWasValid:(char *)arg2;
- (id)_readAnnotationsFromDataProvider:(struct CGDataProvider *)arg1;
- (void)readAnnotationsFromArchivedModelData:(id)arg1 toController:(id)arg2;
- (id)readArchivedModelDataFromImageURL:(id)arg1;
- (id)readArchivedModelDataFromImageData:(id)arg1;
- (BOOL)readAnnotationsFromImageAtURL:(id)arg1 toController:(id)arg2;
- (BOOL)readAnnotationsFromData:(id)arg1 toController:(id)arg2;

@end

