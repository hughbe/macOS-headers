//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AutoBugCaptureCore/UploadSessionDelegate-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UploadManager : NSObject <UploadSessionDelegate>
{
    NSMutableArray *_uploadSessions;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)reportFailureAWDMetricWithIdentifier:(id)arg1 radar:(long long)arg2 urgency:(long long)arg3 requestTime:(id)arg4 preflightStatus:(short)arg5 userConsentStatus:(short)arg6 apnsIdentifier:(unsigned long long)arg7 fileInfo:(id)arg8;
- (void)reportAWDMetricForUploadSession:(id)arg1 requestState:(short)arg2 preflightStatus:(short)arg3 userConsentStatus:(short)arg4;
- (void)uploadSessionFailed:(id)arg1;
- (void)uploadSessionCompleted:(id)arg1;
- (void)uploadFiles:(id)arg1 toURL:(id)arg2 toRadar:(id)arg3 identifier:(id)arg4 urgency:(long long)arg5 extraHTTPHeaders:(id)arg6 context:(id)arg7;
- (void)uploadFiles:(id)arg1 toRadar:(id)arg2 identifier:(id)arg3 urgency:(long long)arg4 extraHTTPHeaders:(id)arg5 context:(id)arg6;
- (void)uploadFiles:(id)arg1 to:(id)arg2 identifier:(id)arg3 urgency:(long long)arg4 extraHTTPHeaders:(id)arg5 context:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

