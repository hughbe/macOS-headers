//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject
{
    NSOperationQueue *_serviceThrottlingOperationQueue;
    NSXPCConnection *_serverConnection;
}

+ (id)sharedService;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain, nonatomic) NSOperationQueue *serviceThrottlingOperationQueue; // @synthesize serviceThrottlingOperationQueue=_serviceThrottlingOperationQueue;
- (void)sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

