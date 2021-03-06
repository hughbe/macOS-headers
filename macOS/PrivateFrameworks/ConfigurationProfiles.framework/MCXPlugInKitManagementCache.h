//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MCXPlugInKitManagementCache : NSObject
{
    _Bool _haveAppLaunchRestrictions;
    int _ourPlugInKitPayloadChangeCount;
    int _ourFamilyControlsChangeCount;
    NSArray *_allLSPlugIns;
    NSArray *_rules;
    NSDate *_lastLSPlugInQueryDate;
    NSMutableDictionary *_localizedNamesByExtensionID;
}

+ (id)sharedObject;
@property(retain) NSMutableDictionary *localizedNamesByExtensionID; // @synthesize localizedNamesByExtensionID=_localizedNamesByExtensionID;
@property(copy) NSDate *lastLSPlugInQueryDate; // @synthesize lastLSPlugInQueryDate=_lastLSPlugInQueryDate;
@property _Bool haveAppLaunchRestrictions; // @synthesize haveAppLaunchRestrictions=_haveAppLaunchRestrictions;
@property int ourFamilyControlsChangeCount; // @synthesize ourFamilyControlsChangeCount=_ourFamilyControlsChangeCount;
@property(copy) NSArray *rules; // @synthesize rules=_rules;
@property int ourPlugInKitPayloadChangeCount; // @synthesize ourPlugInKitPayloadChangeCount=_ourPlugInKitPayloadChangeCount;
- (_Bool)denyExtensionID:(id)arg1 extensionPoint:(id)arg2;
- (_Bool)denyExtensionID:(id)arg1 extensionPoint:(id)arg2 basedOnRule:(id)arg3;
- (id)implicitDeniedExtensionPointsForRule:(id)arg1;
- (id)explicitDeniedExtensionPointsForRule:(id)arg1;
- (id)extensionPointForExtensionIdentifier:(id)arg1;
- (id)debugEffectiveSettings;
- (void)reloadIfNeeded;
- (void)reloadPlugInKitSettings;
- (void)reloadFamilyControls;
- (id)localizedNameForExtensionID:(id)arg1;
- (id)findLSPlugInByExtensionID:(id)arg1;
@property(copy) NSArray *allLSPlugIns; // @synthesize allLSPlugIns=_allLSPlugIns;
- (void)dealloc;
- (id)init;

@end

