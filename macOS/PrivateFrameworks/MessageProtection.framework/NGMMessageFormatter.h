//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NGMMessageFormatter : NSObject
{
}

+ (id)formatOutgoingInnerMessageWithPayload:(id)arg1 destinationIdentity:(id)arg2 sendingIdentity:(id)arg3 error:(id *)arg4;
+ (id)formatOutgoingMessageWithEncryptedPayload:(id)arg1 ephemeral:(id)arg2 signature:(id)arg3 keyValidator:(id)arg4;

@end

