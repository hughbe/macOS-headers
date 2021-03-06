//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSMutableDictionary, NSSet, NSString;

@interface PPSettingsGuardedData : NSObject
{
    double _cachedWeightMultiplier;
    NSSet *_donationDisabledBundleIdentifiers;
    NSSet *_cloudKitDisabledBundleIdentifiers;
    NSMutableDictionary *_donationDisabledChangeHandlers;
    NSMutableDictionary *_queryPlanLoggingChangeHandlers;
    int _nextChangeHandlerToken;
    BOOL _appConnectionsLocationsEnabled;
    NSDate *_entitiesBackfillTimestamp;
    NSData *_entitiesMappingTrieSha256;
    NSString *_abGroupOverride;
}

- (void).cxx_destruct;

@end

