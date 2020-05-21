//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageSecurity/MSCMSAttributeCoder-Protocol.h>

@class MSCMSSignerInfo, MSOID, NSArray, NSDate, NSURL;

__attribute__((visibility("hidden")))
@interface MSCMSTimestampAttribute : NSObject <MSCMSAttributeCoder>
{
    BOOL _certChainRequested;
    NSURL *_serverURL;
    MSCMSSignerInfo *_singerInfo;
    NSArray *_certificates;
    MSOID *_digestAlgorithm;
    NSDate *_timestampTime;
}

- (void).cxx_destruct;
@property(readonly) NSDate *timestampTime; // @synthesize timestampTime=_timestampTime;
@property(readonly) MSOID *digestAlgorithm; // @synthesize digestAlgorithm=_digestAlgorithm;
@property(readonly) NSArray *certificates; // @synthesize certificates=_certificates;
@property(readonly) MSCMSSignerInfo *singerInfo; // @synthesize singerInfo=_singerInfo;
@property BOOL certChainRequested; // @synthesize certChainRequested=_certChainRequested;
@property(retain) NSURL *serverURL; // @synthesize serverURL=_serverURL;
- (id)encodeAttributeWithError:(id *)arg1;
- (BOOL)verifyTimestamps:(id *)arg1;
- (id)initWithTimestampToken:(id)arg1;
- (id)initWithServerURL:(id)arg1;
- (id)initWithServerURL:(id)arg1 chainRequested:(BOOL)arg2;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;

@end

