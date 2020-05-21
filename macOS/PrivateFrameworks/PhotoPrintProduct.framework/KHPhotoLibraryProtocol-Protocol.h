//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSString;
@protocol KHAlbumInfoProtocol, KHEventInfoProtocol, KHPhotoGroupCollectionProtocol, KHPhotoGroupProtocol, KHPhotoInfoProtocol;

@protocol KHPhotoLibraryProtocol
- (NSArray *)pageLayoutPhotosWithPhotoIDs:(NSArray *)arg1;
- (id <KHPhotoInfoProtocol>)pageLayoutPhotoWithPhotoID:(NSString *)arg1;

@optional
- (void)pageLayoutRequestAccessWithCompletion:(void (^)(BOOL))arg1;
- (unsigned long long)pageLayoutAuthorizationStatus;
- (NSArray *)pageLayoutPhotos;
- (NSArray *)pageLayoutPhotoIDsForLibraryFilterKey:(id)arg1 sort:(unsigned long long)arg2;
- (NSArray *)pageLayoutPhotoIDsForLibraryFilterKey:(id)arg1;
- (NSArray *)pageLayoutOrderedLibraryFilterKeys;
- (NSDictionary *)pageLayoutLibraryFilterKeys;
- (NSArray *)pageLayoutFlaggedPhotoIDs;
- (NSArray *)pageLayoutPhotosWithLocationsIntersectingSouthwest:(struct CGPoint)arg1 northeast:(struct CGPoint)arg2;
- (NSArray *)pageLayoutPhotosContainingAnyPersonIDsIn:(NSArray *)arg1;
- (NSString *)pageLayoutPersonNameForPersonID:(NSString *)arg1;
- (NSArray *)pageLayoutAlbumIDs;
- (id <KHAlbumInfoProtocol>)pageLayoutAlbumWithAlbumID:(NSString *)arg1;
- (id <KHEventInfoProtocol>)pageLayoutEventWithEventID:(NSString *)arg1;
- (NSArray *)pageLayoutEventIDs;
- (id <KHPhotoGroupProtocol>)pageLayoutPhotoGroupWithUID:(NSString *)arg1;
- (id <KHPhotoGroupCollectionProtocol>)pageLayoutPhotoGroupCollectionAtIndex:(long long)arg1;
- (long long)pageLayoutNumberOfPhotoGroupCollections;
- (void)prefetchPageLayoutThumbnailsForPhotoIDs:(NSArray *)arg1 usingBlock:(void (^)(NSString *, KHImage *, char *))arg2;
- (void)emptyPageLayoutCache;
@end

