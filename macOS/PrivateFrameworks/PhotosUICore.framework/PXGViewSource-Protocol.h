//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGLayoutContentSource-Protocol.h>

@class PXGLayout;
@protocol PXGViewUserData;

@protocol PXGViewSource <PXGLayoutContentSource>
- (id <PXGViewUserData>)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
@end

