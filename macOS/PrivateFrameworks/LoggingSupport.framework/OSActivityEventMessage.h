//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoggingSupport/OSActivityEvent.h>

@class NSData, NSMutableArray, NSString;

@interface OSActivityEventMessage : OSActivityEvent
{
    NSData *_bufferPrivateData;
    NSData *_bufferData;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *format;
@property(readonly, nonatomic) NSMutableArray *arguments;
- (void)fillEventData:(const char *)arg1 length:(unsigned long long)arg2 privateBuffer:(const char *)arg3 length:(unsigned long long)arg4;

@end

