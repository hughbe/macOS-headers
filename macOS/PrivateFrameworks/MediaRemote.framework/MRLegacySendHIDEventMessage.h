//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@interface MRLegacySendHIDEventMessage : MRProtocolMessage
{
    struct __IOHIDEvent *_event;
}

- (id)description;
- (unsigned long long)type;
@property(readonly, nonatomic) struct _MRHIDButtonEvent buttonEvent;
- (void)dealloc;
- (id)initWithHIDEvent:(struct __IOHIDEvent *)arg1;

@end

