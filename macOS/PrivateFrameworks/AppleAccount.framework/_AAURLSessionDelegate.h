//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccount/NSURLSessionDataDelegate-Protocol.h>
#import <AppleAccount/NSURLSessionDelegate-Protocol.h>
#import <AppleAccount/NSURLSessionTaskDelegate-Protocol.h>

@class NSString;
@protocol NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate;

@interface _AAURLSessionDelegate : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    id <NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

