//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface PKActivityEvent : NSObject
{
    BOOL _unread;
    NSString *_eventType;
    NSString *_identifier;
    NSDate *_date;
}

+ (id)eventsWithTransactions:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isUnread) BOOL unread; // @synthesize unread=_unread;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (BOOL)isEqualToActivityEvent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 date:(id)arg2 unread:(BOOL)arg3;

@end

