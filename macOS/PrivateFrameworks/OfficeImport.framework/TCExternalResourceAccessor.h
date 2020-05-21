//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, NSString, NSURL;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface TCExternalResourceAccessor : NSObject
{
    NSURL *mDocumentURL;
    NSString *mExtractorServiceName;
    NSArray *mExternalResourceURLs;
    NSDictionary *mAccessErrorsForExternalResourceURLs;
    NSError *mError;
    NSObject<OS_dispatch_queue> *mAccessorQueue;
    NSObject<OS_xpc_object> *mAccessorConnection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=mError;
@property(readonly, nonatomic) NSArray *externalResourceURLs; // @synthesize externalResourceURLs=mExternalResourceURLs;
- (BOOL)couldAccessExternalResourceURL:(id)arg1 error:(out id *)arg2;
- (id)p_localizedErrorWithError:(id)arg1 forURL:(id)arg2;
- (void)p_finishAccessingExternalResourcesWithExternalResourceURLs:(id)arg1 accessErrorsForExternalResourceURLs:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)accessExternalResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithDocumentURL:(id)arg1 extractorServiceName:(id)arg2;

@end

