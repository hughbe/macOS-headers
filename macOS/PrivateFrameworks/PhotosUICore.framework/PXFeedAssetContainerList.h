//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PLAssetContainerList-Protocol.h>

@class NSOrderedSet, NSString;

@interface PXFeedAssetContainerList : NSObject <PLAssetContainerList>
{
    NSString *_transientIdentifier;
    NSOrderedSet *_sectionInfos;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSOrderedSet *sectionInfos; // @synthesize sectionInfos=_sectionInfos;
@property(readonly, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;
- (id)containersRelationshipName;
- (id)photoLibrary;
- (id)managedObjectContext;
- (BOOL)canEditContainers;
- (BOOL)isEmpty;
@property(readonly, nonatomic) unsigned long long containersCount;
- (id)containers;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

