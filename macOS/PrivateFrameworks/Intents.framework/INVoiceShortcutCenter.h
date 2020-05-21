//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol INVCVoiceShortcutClient;

@interface INVoiceShortcutCenter : NSObject
{
    id <INVCVoiceShortcutClient> _voiceShortcutClient;
}

+ (id)sharedCenter;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setVoiceShortcutClient:) id <INVCVoiceShortcutClient> voiceShortcutClient; // @synthesize voiceShortcutClient=_voiceShortcutClient;
- (void)setShortcutSuggestions:(id)arg1;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllVoiceShortcutsWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)_initWithVoiceShortcutClient:(id)arg1;

@end

