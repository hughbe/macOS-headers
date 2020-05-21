//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest
{
    CDUnknownBlockType _serializedResultsCallback;
    NSString *_serviceName;
    NSString *_functionName;
    NSData *_serializedParameters;
    NSURL *_explicitBaseURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *explicitBaseURL; // @synthesize explicitBaseURL=_explicitBaseURL;
@property(retain, nonatomic) NSData *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) CDUnknownBlockType serializedResultsCallback; // @synthesize serializedResultsCallback=_serializedResultsCallback;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (Class)expectedResponseClass;
- (Class)requestMessageClass;
- (id)requestBodyStream;
- (BOOL)parsingStandaloneMessage;
- (BOOL)shouldCompressBody;
- (id)additionalHeaderValues;
- (id)url;
- (long long)serverType;
- (long long)partitionType;
- (BOOL)allowsAnonymousAccount;
- (BOOL)requestGETPreAuth;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 explicitBaseURL:(id)arg4;

@end

