//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMNetworking/_TtC12FMNetworking25FMNPushNotificatonHandler.h>

#import <FMNetworking/APSConnectionDelegate-Protocol.h>

@interface _TtC12FMNetworking25FMNPushNotificatonHandler (FMNetworking) <APSConnectionDelegate>
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
@end

