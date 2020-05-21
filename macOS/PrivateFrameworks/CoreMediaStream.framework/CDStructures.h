//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CFURLConnectionClient_V1;

struct CGSize {
    double _field1;
    double _field2;
};

struct _CFURLConnection;

struct _MSDSPCContext {
    struct __MSSPCContext _super;
    CDUnknownFunctionPointerType finishedCallback;
    CDUnknownFunctionPointerType authFailedCallback;
    CDUnknownFunctionPointerType didReceiveServerSideConfigurationVersionCallback;
    CDUnknownFunctionPointerType didReceiveRetryAfterCallback;
};

struct __CFData;

struct __CFDictionary;

struct __CFString;

struct __MSSPCContext {
    void *owner;
    struct __CFString *personID;
    struct __CFString *authToken;
    struct __CFDictionary *deviceInfo;
    struct __CFDictionary *clientHeadersRef;
    double connectionTimeout;
    CDUnknownFunctionPointerType __didReceiveDataCallback;
    CDUnknownFunctionPointerType __didFinishCallback;
    CDUnknownFunctionPointerType __didFailAuthenticationCallback;
    CDUnknownFunctionPointerType __didReceiveServerSideConfigVersionCallback;
    CDUnknownFunctionPointerType __didReceiveRetryAfterCallback;
    struct CFURLConnectionClient_V1 *__client;
    struct _CFURLConnection *__connection;
    struct __CFData *__responseData;
    struct __CFHTTPMessage *__response;
    struct __CFError *__error;
};

