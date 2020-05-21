//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol NSFastEnumeration;

@protocol PXPerson <NSObject>
+ (void)px_loadRepresentativeFacesForPersons:(id <NSFastEnumeration>)arg1;
@property(readonly) BOOL isPersonModel;
@property(readonly) BOOL isVerified;
@property(readonly) NSString *px_localIdentifier;
@property(readonly) NSString *px_localizedName;
@property(readonly) NSString *px_displayName;
@property(readonly) NSString *name;
@property(readonly) unsigned long long numberOfAssets;
- (void)requestFaceTileImageWithTargetSize:(struct CGSize)arg1 cropFactor:(unsigned long long)arg2 style:(unsigned long long)arg3 cacheResult:(BOOL)arg4 boundFaceRect:(BOOL)arg5 completionBlock:(void (^)(NSImage *, struct CGRect, NSError *))arg6;

@optional
@property(readonly) NSDate *px_keyPhotoDate;
@end

