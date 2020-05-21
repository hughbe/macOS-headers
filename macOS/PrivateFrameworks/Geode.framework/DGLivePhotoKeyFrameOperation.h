//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Geode/DGOperation.h>

@interface DGLivePhotoKeyFrameOperation : DGOperation
{
    CDStruct_1b6d18a9 _time;
}

+ (id)attributes;
+ (id)outputKeys;
+ (id)inputKeys;
@property(readonly, nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
- (BOOL)isGeometricallyHashEquivalent:(id)arg1;
- (unsigned long long)geometryHash;
- (BOOL)changesGeometry;
- (id)settingsDictionary;
- (BOOL)applySettingsDictionary:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (BOOL)isMigratable;

@end

