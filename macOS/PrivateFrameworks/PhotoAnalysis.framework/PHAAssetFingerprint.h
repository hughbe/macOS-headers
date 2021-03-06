//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAMutableFloatArray;

@interface PHAAssetFingerprint : NSObject
{
    PHAMutableFloatArray *_floatArray;
}

+ (id)fingerprintWithVersion:(long long)arg1 forAsset:(id)arg2 error:(id *)arg3;
+ (id)fingerprintsWithVersion:(long long)arg1 forAssets:(id)arg2 error:(id *)arg3;
+ (id)_fingerprintsWithVersion2048OfAssets:(id)arg1 error:(id *)arg2;
+ (id)_fingerprintsWithVersion256OfAssets:(id)arg1 error:(id *)arg2;
+ (id)_fingerprintsWithSceneprints:(id)arg1;
+ (id)_fingerprintWithSceneprint:(id)arg1;
+ (id)versionNameForVersion:(long long)arg1;
+ (long long)versionForVersionName:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) PHAMutableFloatArray *floatArray; // @synthesize floatArray=_floatArray;
- (BOOL)isEqual:(id)arg1;
- (id)initWithFloatArray:(id)arg1;

@end

