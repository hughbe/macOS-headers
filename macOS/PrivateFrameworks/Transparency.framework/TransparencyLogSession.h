//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Transparency/NSURLSessionDelegate-Protocol.h>

@class NSString, NSURLSession;
@protocol OS_dispatch_workloop;

@interface TransparencyLogSession : NSObject <NSURLSessionDelegate>
{
    NSObject<OS_dispatch_workloop> *_workloop;
    unsigned long long _fetchCount;
    unsigned long long _downloadCount;
    NSURLSession *_backgroundSession;
    NSURLSession *_foregroundSession;
}

+ (id)createErrorFromURLResonse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void).cxx_destruct;
@property(retain) NSURLSession *foregroundSession; // @synthesize foregroundSession=_foregroundSession;
@property(retain) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property unsigned long long downloadCount; // @synthesize downloadCount=_downloadCount;
@property unsigned long long fetchCount; // @synthesize fetchCount=_fetchCount;
@property(retain) NSObject<OS_dispatch_workloop> *workloop; // @synthesize workloop=_workloop;
- (void)download:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)fetch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createAuthenticatedForegroundSession;
- (id)createAuthenticatedBackgroundSession:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithWorkloop:(id)arg1 sessionDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

