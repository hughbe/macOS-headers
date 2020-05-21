//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

#import <Automator/_AMSystemEventsGenericMethods-Protocol.h>

@class NSString, _AMSystemEventsAlias;

@interface _AMSystemEventsScreenSaver : SBObject <_AMSystemEventsGenericMethods>
{
}

- (void)moveTo:(id)arg1;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)printWithProperties:(id)arg1 printDialog:(BOOL)arg2;
- (void)saveIn:(id)arg1 as:(int)arg2;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
- (void)stop;
- (void)start;
@property(copy) NSString *pictureDisplayStyle;
@property(readonly, copy) _AMSystemEventsAlias *path;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSString *displayedName;

@end

