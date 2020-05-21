//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/AFSpeechServiceDelegate-Protocol.h>

@class NSData, NSError, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, SiriCoreLocalSpeechRecognizerDelegate;

@interface SiriCoreLocalSpeechRecognizer : NSObject <AFSpeechServiceDelegate>
{
    BOOL _recognitionActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_esConnection;
    BOOL _hasRecognizedAnything;
    unsigned char _instanceUUID[16];
    NSString *_currentLanguage;
    NSError *_recognitionError;
    NSString *_preheatedProfileAssetPath;
    NSData *_preheatedProfile;
    id <SiriCoreLocalSpeechRecognizerDelegate> _delegate;
}

+ (id)purgeInstalledAssetsWithError:(id *)arg1;
+ (id)installedAssetSizeWithError:(id *)arg1;
+ (id)dictionaryWithContentsProfilePathForLanguage:(id)arg1 errorOut:(id *)arg2;
+ (id)profilePathForLanguage:(id)arg1 errorOut:(id *)arg2;
+ (id)speechProfileDataLastModifiedDataForLanguage:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SiriCoreLocalSpeechRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchUserDataForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)arg1 error:(id)arg2;
- (oneway void)speechServiceDidRecognizePackage:(id)arg1;
- (oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)arg1;
- (oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
- (oneway void)speechServiceDidRecognizeTokens:(id)arg1;
- (void)writeDESRecord;
- (void)invalidate;
- (void)finishAudio;
- (void)addAudioPacket:(id)arg1;
- (void)fetchAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetDESWithCompletion:(CDUnknownBlockType)arg1;
- (void)readProfileAndUserDataWithLanguage:(id)arg1 allowOverride:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)runAdaptationRecipeEvaluation:(id)arg1 recordData:(id)arg2 attachments:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)getOfflineDictationStatusIgnoringCache:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateSpeechProfileWithLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createSpeechProfileWithLanguage:(id)arg1 JSONData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendSpeechCorrectionInfo:(id)arg1 interactionIdentifier:(id)arg2;
- (void)startSpeechRecognitionWithLanguage:(id)arg1 interactionIdentifier:(id)arg2 task:(id)arg3 context:(id)arg4 narrowband:(BOOL)arg5 detectUtterances:(BOOL)arg6 maximumRecognitionDuration:(double)arg7 farField:(BOOL)arg8 secureOfflineOnly:(BOOL)arg9 censorSpeech:(BOOL)arg10 originalAudioFileURL:(id)arg11 overrides:(id)arg12 modelOverrideURL:(id)arg13 didStartHandler:(CDUnknownBlockType)arg14;
- (void)preheatSpeechRecognitionWithLanguage:(id)arg1;
- (id)_synchronousServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_serviceWithFunctionName:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)_service;
- (id)_connection;
- (id)_newConnection;
- (id)init;
- (id)initWithDelegate:(id)arg1 instanceUUID:(unsigned char [16])arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

