//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSMMessageHandler : NSObject
{
    struct __CFMessagePort *fLocalPort;
    struct __CFRunLoopSource *fRunLoopSourceForPort;
}

+ (BOOL)messageTIMCore:(int)arg1 dictionary:(id)arg2 withReply:(id)arg3;
+ (BOOL)_sendMessageOnPort:(struct __CFString *)arg1 messageID:(int)arg2 dictionary:(id)arg3;
+ (void)messageTouchBarInputMenu:(int)arg1 dictionary:(id)arg2;
+ (BOOL)messageSwitcher:(int)arg1 dictionary:(id)arg2;
+ (BOOL)nowSending;
+ (BOOL)send:(int)arg1 contents:(id)arg2 target:(struct ProcessSerialNumber *)arg3 withReply:(id)arg4;
+ (BOOL)send:(int)arg1 contents:(id)arg2 target:(struct ProcessSerialNumber *)arg3;
+ (id)localMessagePortWithReceiver:(id)arg1;
- (void)freeLocalPort;
- (void)dealloc;
- (id)initLocalMessagePortWithReceiver:(id)arg1;

@end

