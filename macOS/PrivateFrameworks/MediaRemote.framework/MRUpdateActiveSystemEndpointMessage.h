//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRUpdateActiveSystemEndpointMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) NSString *reason;
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) long long operation;
@property(readonly, nonatomic) NSString *outputDeviceUID;
- (id)initWithOutputDeviceUID:(id)arg1 operation:(long long)arg2 changeType:(long long)arg3 reason:(id)arg4;

@end

