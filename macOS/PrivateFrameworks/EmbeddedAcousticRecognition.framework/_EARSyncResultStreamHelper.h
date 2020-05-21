//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/_EARSpeechRecognitionResultStream-Protocol.h>

@class NSArray, NSError, NSString;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface _EARSyncResultStreamHelper : NSObject <_EARSpeechRecognitionResultStream>
{
    NSObject<OS_dispatch_semaphore> *_finishSemaphore;
    NSError *_error;
    NSArray *_results;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;
- (void)waitForCompletion;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

