//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SiriUIPluginManager;

@interface SiriUISnippetManager : NSObject
{
    SiriUIPluginManager *_pluginManager;
}

+ (id)debugBundlePath;
+ (id)sharedInstance;
+ (void)_debugSetPluginDirectory:(id)arg1;
- (void).cxx_destruct;
- (id)speakableProviderForObject:(id)arg1;
- (id)listItemToPickInAutodisambiguationForListItems:(id)arg1;
- (id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2;
- (id)filteredDisambiguationListItems:(id)arg1;
- (id)transcriptItemForObject:(id)arg1;
- (BOOL)_compareObject:(id)arg1 toObject:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)_listItem:(id)arg1 isPreferredOverListItem:(id)arg2;
- (BOOL)_listItem:(id)arg1 isEqualToListItem:(id)arg2;
- (id)_createDebugViewControllerForAceObject:(id)arg1;
- (id)init;

@end

