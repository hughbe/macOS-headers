//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <login/LFListener.h>

@protocol LFSessionLogoutListenerInterface><LFSessionLogoutListenerMessageHandler;

@interface LFSessionLogoutListener : LFListener
{
}

- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithMessageHandler:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) id <LFSessionLogoutListenerInterface><LFSessionLogoutListenerMessageHandler> messageHandler; // @dynamic messageHandler;

@end

