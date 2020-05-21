//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, PLFaceRebuildHelper, PLManagedAsset;

@interface PLCPLFaceRebuildSupport : NSObject
{
    PLManagedAsset *_asset;
    NSManagedObjectContext *_context;
    PLFaceRebuildHelper *_rebuildHelper;
    int _detectedFaceCount;
    int _rejectedFaceCount;
    int _hiddenFaceCount;
}

+ (void)rebuildDeferredFacesForAsset:(id)arg1 inManagedObjectContext:(id)arg2;
- (void).cxx_destruct;
- (id)fetchPersonForDeferredFace:(id)arg1;
- (id)fetchDeferredFacesToRebuild;
- (void)rebuildHiddenFace:(id)arg1;
- (void)rebuildRejectedFace:(id)arg1;
- (void)rebuildDetectedFace:(id)arg1;
- (void)rebuildFace:(id)arg1;
- (void)rebuildAllFaces;
- (id)initWithAsset:(id)arg1 managedObjectContext:(id)arg2;

@end

