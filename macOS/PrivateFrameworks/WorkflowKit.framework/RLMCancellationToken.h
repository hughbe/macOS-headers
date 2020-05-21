//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/RLMNotificationToken.h>

@class RLMRealm;

__attribute__((visibility("hidden")))
@interface RLMCancellationToken : RLMNotificationToken
{
    struct NotificationToken _token;
    RLMRealm *_realm;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invalidate;
- (void)suppressNextNotification;
- (id)realm;
- (id)initWithToken:(struct NotificationToken)arg1 realm:(id)arg2;

@end

