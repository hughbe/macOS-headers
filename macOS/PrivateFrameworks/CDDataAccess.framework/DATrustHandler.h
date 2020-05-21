//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol DATrustHandlerDelegate;

@interface DATrustHandler : NSObject
{
    id <DATrustHandlerDelegate> _delegate;
    NSMutableDictionary *_haveWarnedAboutCertDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *haveWarnedAboutCertDict; // @synthesize haveWarnedAboutCertDict=_haveWarnedAboutCertDict;
@property(nonatomic) __weak id <DATrustHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned int)evaluateTrust:(struct __SecTrust *)arg1;
- (BOOL)handleTrustChallenge:(id)arg1 forAccount:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)handleTrustChallenge:(id)arg1 forAccount:(id)arg2;
- (void)handleTrust:(struct __SecTrust *)arg1 forHost:(id)arg2 forAccount:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (id)_serverSuffixesToAlwaysFail;
- (BOOL)resetCertWarnings;
- (void)setHaveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (BOOL)haveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

