//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ADNotificationDarwinNotificationClientList : NSObject
{
    int mRegistrationToken;
    NSString *_notificationName;
    NSMutableArray *_clientList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *clientList; // @synthesize clientList=_clientList;
@property(retain, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void)signal;
- (id)initWithName:(id)arg1;

@end

