//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FTServices/FTIDSMessage.h>

@class NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface IDSWebTunnelRequestMessage : FTIDSMessage
{
    NSString *_messageRequestUUID;
    NSString *_messageURL;
    NSData *_messageRequestBodyData;
    NSDictionary *_messageRequestBodyDictionary;
    NSMutableDictionary *_messageHeaders;
    NSNumber *_maximumResponseSize;
    NSDictionary *_responseBodyDictionary;
    NSData *_responseBodyData;
    NSDictionary *_responseHeaders;
    NSNumber *_responseCode;
    NSNumber *_responseStatus;
    BOOL _disableIDSTranslation;
    NSString *_userAgentOverride;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL disableIDSTranslation; // @synthesize disableIDSTranslation=_disableIDSTranslation;
@property(copy, nonatomic) NSNumber *responseStatus; // @synthesize responseStatus=_responseStatus;
@property(copy, nonatomic) NSNumber *responseCode; // @synthesize responseCode=_responseCode;
@property(copy, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(copy, nonatomic) NSDictionary *responseBodyDictionary; // @synthesize responseBodyDictionary=_responseBodyDictionary;
@property(copy, nonatomic) NSData *responseBodyData; // @synthesize responseBodyData=_responseBodyData;
@property(copy, nonatomic) NSString *userAgentOverride; // @synthesize userAgentOverride=_userAgentOverride;
@property(copy, nonatomic) NSNumber *maximumResponseSize; // @synthesize maximumResponseSize=_maximumResponseSize;
@property(copy, nonatomic) NSMutableDictionary *messageHeaders; // @synthesize messageHeaders=_messageHeaders;
@property(copy, nonatomic) NSDictionary *messageRequestBodyDictionary; // @synthesize messageRequestBodyDictionary=_messageRequestBodyDictionary;
@property(copy, nonatomic) NSData *messageRequestBodyData; // @synthesize messageRequestBodyData=_messageRequestBodyData;
@property(copy, nonatomic) NSString *messageURL; // @synthesize messageURL=_messageURL;
@property(copy, nonatomic) NSString *messageRequestUUID; // @synthesize messageRequestUUID=_messageRequestUUID;
- (void)handleResponseHeaders:(id)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)additionalMessageHeadersForOutgoingPush;
- (BOOL)isIDSMessage;
- (BOOL)wantsIDSProtocolVersion;
- (BOOL)isWebTunnelMessage;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsBinaryPush;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessage:(id)arg1;

@end

