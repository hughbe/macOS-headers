//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DialogEngine/NSURLSessionDelegate-Protocol.h>

@class NSString, NSURLSession;

@interface DEInvalidateDelegate : NSObject <NSURLSessionDelegate>
{
    NSURLSession *_urlSession;
    NSString *_distribution;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *distribution; // @synthesize distribution=_distribution;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

