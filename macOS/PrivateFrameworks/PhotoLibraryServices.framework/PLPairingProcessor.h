//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface PLPairingProcessor : NSObject
{
    NSPredicate *_locatedInUsersPhotoLibrary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSPredicate *locatedInUsersPhotoLibrary; // @synthesize locatedInUsersPhotoLibrary=_locatedInUsersPhotoLibrary;
- (void)_deleteResourceOfType:(unsigned int)arg1 forAsset:(id)arg2 verifyInserted:(BOOL)arg3 deleteFile:(BOOL)arg4;
- (BOOL)updatePrimaryAsset:(id)arg1 andRemoveAssetIfPossible:(id)arg2;
- (BOOL)_copyFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)_copyResourceOfType:(unsigned int)arg1 onAsset:(id)arg2 toType:(unsigned int)arg3 onAsset:(id)arg4 error:(id *)arg5;
- (id)combinePairs:(id)arg1 error:(id *)arg2;
- (id)firstGroupFromAssets:(id)arg1;
- (id)fetchRequestForSortedGroupIDs:(id)arg1;
- (id)fetchRequestForLibrary;
- (id)groupIDForAsset:(id)arg1;
- (BOOL)processPairingForFetchRequest:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)init;

@end

