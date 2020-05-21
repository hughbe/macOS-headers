//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary;

@interface PGGraphEntityTranslator : NSObject
{
    PHPhotoLibrary *_photoLibrary;
}

+ (id)uuidsFromLocalIdentifiers:(id)arg1;
+ (id)uuidFromLocalIdentifier:(id)arg1;
+ (BOOL)includesRelationshipChanges;
+ (id)entityClassName;
- (void).cxx_destruct;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)graphChangesForDeletedIdentifiers:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)graphChangesForInsertedIdentifiers:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)initWithPhotoLibrary:(id)arg1;

@end

