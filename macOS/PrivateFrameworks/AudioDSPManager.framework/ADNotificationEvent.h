//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface ADNotificationEvent : NSObject
{
    NSDate *_timestamp;
    id <NSObject> _payload;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <NSObject> payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithTimestamp:(id)arg1;

@end

