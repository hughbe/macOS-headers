//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

@class _AMFinderColumnViewOptions, _AMFinderIconViewOptions, _AMFinderListViewOptions, _AMFinderPreferencesWindow;

@interface _AMFinderPreferences : SBObject
{
}

- (void)updateNecessity:(BOOL)arg1 registeringApplications:(BOOL)arg2;
- (void)reveal;
- (void)erase;
- (void)emptySecurity:(BOOL)arg1;
- (void)eject;
- (void)select;
- (id)moveTo:(id)arg1 replacing:(BOOL)arg2 positionedAt:(id)arg3 routingSuppressed:(BOOL)arg4;
- (BOOL)exists;
- (id)duplicateTo:(id)arg1 replacing:(BOOL)arg2 routingSuppressed:(BOOL)arg3;
- (id)delete;
- (long long)dataSizeAs:(id)arg1;
- (void)close;
- (void)activate;
- (void)printWithProperties:(id)arg1;
- (void)openUsing:(id)arg1 withProperties:(id)arg2;
@property BOOL allNameExtensionsShowing;
@property BOOL newWindowsOpenInColumnView;
@property BOOL foldersOpenInNewWindows;
@property(copy) SBObject *newWindowTarget;
@property BOOL desktopShowsConnectedServers;
@property BOOL desktopShowsRemovableMedia;
@property BOOL desktopShowsExternalHardDisks;
@property BOOL desktopShowsHardDisks;
@property double delayBeforeSpringing;
@property BOOL foldersSpringOpen;
@property(readonly, copy) _AMFinderColumnViewOptions *columnViewOptions;
@property(readonly, copy) _AMFinderListViewOptions *listViewOptions;
@property(readonly, copy) _AMFinderIconViewOptions *iconViewOptions;
@property(readonly, copy) _AMFinderPreferencesWindow *window;

@end

