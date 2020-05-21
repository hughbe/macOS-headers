//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetCollectionActionManager.h>

@class NSDictionary, PXAssetCollectionActionPerformer;

@interface PXPhotoKitAssetCollectionActionManager : PXAssetCollectionActionManager
{
    NSDictionary *__performerClassesByType;
    PXAssetCollectionActionPerformer *__activePerformer;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setActivePerformer:) PXAssetCollectionActionPerformer *_activePerformer; // @synthesize _activePerformer=__activePerformer;
@property(readonly, nonatomic) NSDictionary *_performerClassesByType; // @synthesize _performerClassesByType=__performerClassesByType;
- (Class)_firstPossiblePerformerForActionType:(id)arg1;
- (id)systemImageNameForActionType:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)actionPerformerForActionType:(id)arg1;
- (BOOL)canPerformActionType:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2;

@end

