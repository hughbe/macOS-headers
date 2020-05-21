//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INIntentExecutionResult, INSpeakableString, INVoiceCommandDeviceInformation, NSString;

@protocol INRunVoiceCommandIntentExport <NSObject, JSExport>
@property(copy) NSString *previousIntentIdentifier;
@property(copy) INIntentExecutionResult *executionResult;
@property(copy) INVoiceCommandDeviceInformation *originDevice;
@property(copy) INSpeakableString *voiceCommand;
- (id)init;
@end

