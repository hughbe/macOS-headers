//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class NSArray, NSString, PHPhotoLibrary;
@protocol PHBatchFetchingArrayElement;

@protocol PHBatchFetchingArrayDataSource <NSObject>
- (PHPhotoLibrary *)bfa_photoLibrary;
- (id <PHBatchFetchingArrayElement>)bfa_tombstoneObjectForOID:(id)arg1 uuid:(NSString *)arg2 propertyHint:(unsigned long long)arg3;
- (NSArray *)bfa_fetchedObjectsForOIDs:(NSArray *)arg1 objectClass:(Class)arg2;
- (NSArray *)bfa_fetchObjectsForOIDs:(NSArray *)arg1 propertyHint:(unsigned long long)arg2;
@end

