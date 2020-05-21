//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

#import <Automator/_AMSystemEventsGenericMethods-Protocol.h>

@class _AMSystemEventsInsertionPreference;

@interface _AMSystemEventsCDAndDVDPreferencesObject : SBObject <_AMSystemEventsGenericMethods>
{
}

- (void)moveTo:(id)arg1;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)printWithProperties:(id)arg1 printDialog:(BOOL)arg2;
- (void)saveIn:(id)arg1 as:(int)arg2;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property(readonly, copy) _AMSystemEventsInsertionPreference *videoBD;
@property(readonly, copy) _AMSystemEventsInsertionPreference *videoDVD;
@property(readonly, copy) _AMSystemEventsInsertionPreference *pictureCD;
@property(readonly, copy) _AMSystemEventsInsertionPreference *musicCD;
@property(readonly, copy) _AMSystemEventsInsertionPreference *blankBD;
@property(readonly, copy) _AMSystemEventsInsertionPreference *blankDVD;
@property(readonly, copy) _AMSystemEventsInsertionPreference *blankCD;

@end

