//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSCopying-Protocol.h>

@interface CLSFeederPrefetchOptions : NSObject <NSCopying>
{
    unsigned long long _personCountPrefetchMode;
    unsigned long long _personsPrefetchMode;
    unsigned long long _scenesPrefetchMode;
    unsigned long long _faceInformationPrefetchMode;
    unsigned long long _locationPrefetchMode;
}

+ (id)feederPrefetchOptionsWithDefaultMode:(unsigned long long)arg1;
@property(nonatomic) unsigned long long locationPrefetchMode; // @synthesize locationPrefetchMode=_locationPrefetchMode;
@property(nonatomic) unsigned long long faceInformationPrefetchMode; // @synthesize faceInformationPrefetchMode=_faceInformationPrefetchMode;
@property(nonatomic) unsigned long long scenesPrefetchMode; // @synthesize scenesPrefetchMode=_scenesPrefetchMode;
@property(nonatomic) unsigned long long personsPrefetchMode; // @synthesize personsPrefetchMode=_personsPrefetchMode;
@property(nonatomic) unsigned long long personCountPrefetchMode; // @synthesize personCountPrefetchMode=_personCountPrefetchMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

