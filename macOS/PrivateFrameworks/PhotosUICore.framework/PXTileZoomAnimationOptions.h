//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface PXTileZoomAnimationOptions : NSObject <NSCopying>
{
    BOOL _shouldCrossfade;
    long long _transformType;
    unsigned long long _flags;
}

@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(nonatomic) BOOL shouldCrossfade; // @synthesize shouldCrossfade=_shouldCrossfade;
@property(nonatomic) long long transformType; // @synthesize transformType=_transformType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

