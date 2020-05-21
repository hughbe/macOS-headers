//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, NSObject, PLManagedObject;
@protocol PLAlbumProtocol, PLAssetContainer;

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification
{
    BOOL _titleDidChange;
    BOOL _keyAssetDidChange;
    NSDictionary *_userInfo;
}

+ (id)notificationWithContainer:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3;
- (void).cxx_destruct;
- (void)_calculateDiffs;
- (BOOL)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (id)_contentRelationshipName;
@property(readonly, nonatomic) id <PLAssetContainer> assetContainer;
- (BOOL)hasDeletes;
@property(readonly, nonatomic) BOOL keyAssetDidChange;
@property(readonly, nonatomic) BOOL titleDidChange;
@property(readonly, nonatomic) NSObject<PLAlbumProtocol> *album;
@property(readonly, nonatomic) PLManagedObject *container;
- (id)description;
- (id)userInfo;
- (id)name;
- (void)dealloc;

@end

