//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBDataString, _INPBImageValue;

@protocol _INPBShortcutOverview <NSObject>
+ (Class)stepsType;
@property(readonly, nonatomic) BOOL hasVoiceCommand;
@property(retain, nonatomic) _INPBDataString *voiceCommand;
@property(readonly, nonatomic) unsigned long long stepsCount;
@property(copy, nonatomic) NSArray *steps;
@property(readonly, nonatomic) BOOL hasName;
@property(retain, nonatomic) _INPBDataString *name;
@property(readonly, nonatomic) BOOL hasIcon;
@property(retain, nonatomic) _INPBImageValue *icon;
@property(readonly, nonatomic) BOOL hasDescriptiveText;
@property(retain, nonatomic) _INPBDataString *descriptiveText;
- (_INPBImageValue *)stepsAtIndex:(unsigned long long)arg1;
- (void)addSteps:(_INPBImageValue *)arg1;
- (void)clearSteps;
@end

