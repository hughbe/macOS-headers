//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@class NSData;

@interface PHAssetSceneprintProperties : PHAssetPropertySet
{
    NSData *_sceneprint;
}

+ (id)propertiesToFetch;
+ (id)propertySetName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *sceneprint; // @synthesize sceneprint=_sceneprint;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;

@end

