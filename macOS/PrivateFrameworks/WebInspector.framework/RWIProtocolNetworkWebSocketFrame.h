//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolNetworkWebSocketFrame : RWIProtocolJSONObject
{
}

@property(nonatomic) double payloadLength;
@property(copy, nonatomic) NSString *payloadData;
@property(nonatomic) BOOL mask;
@property(nonatomic) double opcode;
- (id)initWithOpcode:(double)arg1 mask:(BOOL)arg2 payloadData:(id)arg3 payloadLength:(double)arg4;

@end

