//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/AVCPacketFilter.h>

@interface AVCPacketFilterRTP : AVCPacketFilter
{
    unsigned int _SSRC;
    unsigned char _type;
}

- (BOOL)isMatchedPacket:(const void *)arg1 size:(int)arg2;
- (BOOL)isPayloadTypeMatched:(BOOL)arg1;
- (BOOL)isRTCPPayload:(unsigned short)arg1;
- (id)initWithIncomingSSRC:(unsigned int)arg1 acceptPacketType:(unsigned char)arg2;

@end

