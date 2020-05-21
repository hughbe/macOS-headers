//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol NSSpeechRecognizerDelegate;

@interface NSSpeechRecognizer : NSObject
{
    id _privateNSSpeechRecognizerVars;
}

- (void)_updateCommandDisplayWithRecognizer;
@property BOOL blocksOtherRecognizers;
@property BOOL listensInForegroundOnly;
@property(copy) NSString *displayedCommandsTitle;
@property(copy) NSArray *commands;
@property __weak id <NSSpeechRecognizerDelegate> delegate;
- (void)stopListening;
- (void)startListening;
- (void)dealloc;
- (id)init;
- (void)_processRecognitionResult:(struct __RXLanguageObject *)arg1;

@end

