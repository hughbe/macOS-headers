//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSUUID, TIKeyboardSecureCandidateRenderer;

@interface TIAppAutofillManager : NSObject
{
    TIKeyboardSecureCandidateRenderer *_secureCandidateRenderer;
    NSUUID *_documentIdentifierForLastAutofillGeneration;
    NSString *_clientIdentifierForLastAutofillGeneration;
    NSString *_clientIdentifierForLastKeyboardSync;
    NSDictionary *_queuedCustomInfo;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *queuedCustomInfo; // @synthesize queuedCustomInfo=_queuedCustomInfo;
@property(retain, nonatomic) NSString *clientIdentifierForLastKeyboardSync; // @synthesize clientIdentifierForLastKeyboardSync=_clientIdentifierForLastKeyboardSync;
@property(retain, nonatomic) NSString *clientIdentifierForLastAutofillGeneration; // @synthesize clientIdentifierForLastAutofillGeneration=_clientIdentifierForLastAutofillGeneration;
@property(retain, nonatomic) NSUUID *documentIdentifierForLastAutofillGeneration; // @synthesize documentIdentifierForLastAutofillGeneration=_documentIdentifierForLastAutofillGeneration;
- (void)shouldAcceptOneTimeCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shouldAcceptAutofill:(id)arg1 withPayload:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)shouldAuthenticateToAcceptAutofill;
- (id)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2;
- (id)generateAutofillFormCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2;
- (id)obtainBundleIdentifierFromConnection:(id)arg1;
- (id)obtainApplicationIdentifierFromConnection:(id)arg1;
- (BOOL)_simulatesAutofillCandidates;
- (id)customInfoFromCredential:(id)arg1;
- (BOOL)isValidedString:(id)arg1;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)arg1;
- (void)obtainCredential:(id)arg1;
@property(readonly, nonatomic) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer;
- (id)initPrivate;

@end

