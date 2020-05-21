//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLChooserKeyProperties-Protocol.h>
#import <PhotoLibraryServices/PLResourceDataStoreKey-Protocol.h>

@class NSString;

@interface PLSharedStreamsDataStoreKey : NSObject <PLResourceDataStoreKey, PLChooserKeyProperties>
{
    NSString *_relativePath;
    unsigned int _sharedStreamsResourceType;
}

+ (unsigned long long)dataLengthFromPreviewByte:(unsigned char)arg1;
+ (id)_keyDataWithRelativePath:(id)arg1 type:(unsigned int)arg2;
+ (id)_relativeFilePathForPersonID:(id)arg1 albumID:(id)arg2 dcimDirectory:(id)arg3 fileName:(id)arg4;
+ (id)_replacementPathExtensionForType:(unsigned int)arg1;
- (void).cxx_destruct;
- (id)fileURLForAssetID:(id)arg1;
- (id)descriptionForAssetID:(id)arg1;
- (unsigned int)recipeIDForAssetID:(id)arg1;
- (BOOL)isDerivative;
- (unsigned int)resourceVersion;
- (unsigned int)resourceType;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (id)uniformTypeIdentifier;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToKey:(id)arg1;
- (id)initWithKeyStruct:(const void *)arg1;
- (id)keyData;
- (id)initWithAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

