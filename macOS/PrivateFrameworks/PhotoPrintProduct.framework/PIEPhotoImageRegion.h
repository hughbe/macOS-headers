//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol KHPhotoInfoProtocol;

@interface PIEPhotoImageRegion : NSObject
{
    id <KHPhotoInfoProtocol> mPhotoInfo;
    struct CGPoint mUnitTopLeft;
    struct CGPoint mUnitBottomRight;
    NSMutableDictionary *mProperties;
}

@property(readonly) struct CGPoint unitBottomRight; // @synthesize unitBottomRight=mUnitBottomRight;
@property(readonly) struct CGPoint unitTopLeft; // @synthesize unitTopLeft=mUnitTopLeft;
@property(readonly) id <KHPhotoInfoProtocol> photoInfo; // @synthesize photoInfo=mPhotoInfo;
- (void)dealloc;
@property(readonly) NSMutableDictionary *properties; // @synthesize properties=mProperties;
- (id)initWithUnitTopLeft:(struct CGPoint)arg1 unitBottomRight:(struct CGPoint)arg2 forPhoto:(id)arg3;

@end

