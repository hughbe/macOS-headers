//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/UserNotificationPolicyData.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LocalNotificationPolicyData : UserNotificationPolicyData
{
    NSString *_originString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *originString; // @synthesize originString=_originString;
- (void)updatePermission:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOrigin:(id)arg1 policy:(int)arg2;

@end

