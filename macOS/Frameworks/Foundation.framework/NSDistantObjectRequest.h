//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConnection, NSInvocation;

@interface NSDistantObjectRequest : NSObject
{
}

- (void)replyWithException:(id)arg1;
@property(readonly, retain) id conversation;
@property(readonly, retain) NSConnection *connection;
@property(readonly, retain) NSInvocation *invocation;

@end

