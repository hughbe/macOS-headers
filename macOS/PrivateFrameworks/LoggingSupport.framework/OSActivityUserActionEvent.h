//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityUserActionEvent : OSActivityEvent
{
    unsigned long long _senderProgramCounter;
}

@property(readonly, nonatomic) unsigned long long senderProgramCounter; // @synthesize senderProgramCounter=_senderProgramCounter;
- (void)_addProperties:(id)arg1;
- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;

@end

