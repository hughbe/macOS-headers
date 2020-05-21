//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHPhotoLibraryGenericCollection.h>

@class KHPhotoLibraryMLSource, MLMediaGroup, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_semaphore;

@interface KHPhotoLibraryMLCollection : KHPhotoLibraryGenericCollection
{
    NSMutableSet *_kvoKeysForGroup;
    NSMutableSet *_kvoBindingsForGroup;
    BOOL _isLoading;
    MLMediaGroup *_group;
    NSMutableArray *_arrangedPhotos;
    NSMutableDictionary *_photos;
    NSMutableDictionary *_subcollections;
    KHPhotoLibraryMLSource *_source;
    NSObject<OS_dispatch_semaphore> *_mediaObjectsHydrationSema;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *mediaObjectsHydrationSema; // @synthesize mediaObjectsHydrationSema=_mediaObjectsHydrationSema;
@property(nonatomic) __weak KHPhotoLibraryMLSource *source; // @synthesize source=_source;
@property BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, nonatomic) NSMutableDictionary *subcollections; // @synthesize subcollections=_subcollections;
@property(retain, nonatomic) NSMutableDictionary *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) NSMutableArray *arrangedPhotos; // @synthesize arrangedPhotos=_arrangedPhotos;
@property(readonly, nonatomic) MLMediaGroup *group; // @synthesize group=_group;
- (void)_hydrate;
- (id)photoWithURL:(id)arg1;
- (id)allPhotos;
- (id)photoAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPhotos;
- (id)subcollectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubcollections;
- (id)identifier;
- (void)_setupChildGroup:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)executeHydration;
- (void)dealloc;
- (id)initWithMediaGroup:(id)arg1 source:(id)arg2;

@end

