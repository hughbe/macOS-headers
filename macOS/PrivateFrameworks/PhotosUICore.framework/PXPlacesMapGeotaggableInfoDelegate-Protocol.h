//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXPlacesGeotaggable;

@protocol PXPlacesMapGeotaggableInfoDelegate <NSObject>

@optional
- (void)imageForGeotaggable:(id <PXPlacesGeotaggable>)arg1 ofSize:(struct CGSize)arg2 networkAccessAllowed:(BOOL)arg3 andCompletion:(void (^)(id <PXPlacesGeotaggable>, struct CGImage *, NSError *, NSDictionary *))arg4;
@end

