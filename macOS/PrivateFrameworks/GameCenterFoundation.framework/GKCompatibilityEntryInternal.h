//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSNumber, NSSet, NSString;

@interface GKCompatibilityEntryInternal : GKInternalRepresentation
{
    NSString *_bundleID;
    NSNumber *_adamID;
    long long _platform;
    NSSet *_versions;
    NSSet *_shortVersions;
}

+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) NSSet *shortVersions; // @synthesize shortVersions=_shortVersions;
@property(retain, nonatomic) NSSet *versions; // @synthesize versions=_versions;
@property(nonatomic) long long platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

