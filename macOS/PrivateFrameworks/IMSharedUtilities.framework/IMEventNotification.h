//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMFoundation/IMDoubleLinkedListNode.h>

@interface IMEventNotification : IMDoubleLinkedListNode
{
    id _target;
    id _sender;
    CDUnknownBlockType _eventNotificationWithSenderBlock;
    CDUnknownBlockType _eventNotificationBlock;
}

+ (id)eventNotification:(id)arg1;
+ (id)eventNotification:(id)arg1 sender:(id)arg2 eventNotificationBlock:(CDUnknownBlockType)arg3;
+ (id)eventNotification:(id)arg1 eventNotificationBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType eventNotificationBlock; // @synthesize eventNotificationBlock=_eventNotificationBlock;
@property(copy) CDUnknownBlockType eventNotificationWithSenderBlock; // @synthesize eventNotificationWithSenderBlock=_eventNotificationWithSenderBlock;
@property __weak id sender; // @synthesize sender=_sender;
@property __weak id target; // @synthesize target=_target;
- (void)cache;
- (BOOL)wasCancelled;
- (void)cancel;
- (BOOL)invoke;

@end

