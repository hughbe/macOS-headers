//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

#import <Automator/_AMSystemEventsGenericMethods-Protocol.h>

@class NSArray, NSDate, NSString;

@interface _AMSystemEventsTrack : SBObject <_AMSystemEventsGenericMethods>
{
}

- (void)moveTo:(id)arg1;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)printWithProperties:(id)arg1 printDialog:(BOOL)arg2;
- (void)saveIn:(id)arg1 as:(int)arg2;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property(readonly) BOOL visualCharacteristic;
@property(readonly) long long videoDepth;
@property(readonly, copy) NSString *typeClass;
@property(readonly, copy) NSString *type;
@property long long startTime;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSDate *modificationTime;
@property(readonly, copy) NSString *kind;
@property(readonly, copy) NSString *href;
@property BOOL highQuality;
@property BOOL enabled;
@property(readonly) long long duration;
@property(readonly, copy) NSArray *dimensions;
@property(readonly) long long dataSize;
@property(readonly) long long dataRate;
@property(readonly, copy) NSString *dataFormat;
@property(readonly, copy) NSDate *creationTime;
@property(readonly) long long audioSampleSize;
@property(readonly) double audioSampleRate;
@property(readonly) BOOL audioCharacteristic;
@property(readonly) long long audioChannelCount;
- (id)annotations;

@end

