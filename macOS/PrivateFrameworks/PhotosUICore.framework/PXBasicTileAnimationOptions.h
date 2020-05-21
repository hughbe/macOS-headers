//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface PXBasicTileAnimationOptions : NSObject <NSCopying>
{
    BOOL _shouldNotifyTiles;
    BOOL _shouldSnapshotDynamicContents;
    double _delay;
    double _duration;
    long long _style;
    unsigned long long _flags;
}

+ (id)defaultAnimationOptions;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(nonatomic) BOOL shouldSnapshotDynamicContents; // @synthesize shouldSnapshotDynamicContents=_shouldSnapshotDynamicContents;
@property(nonatomic) BOOL shouldNotifyTiles; // @synthesize shouldNotifyTiles=_shouldNotifyTiles;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double delay; // @synthesize delay=_delay;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

