//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FMAlertManager : NSObject
{
    NSMutableDictionary *_activeAlerts;
    NSMutableDictionary *_activeCFNotificationsByCategory;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *activeCFNotificationsByCategory; // @synthesize activeCFNotificationsByCategory=_activeCFNotificationsByCategory;
@property(retain, nonatomic) NSMutableDictionary *activeAlerts; // @synthesize activeAlerts=_activeAlerts;
- (id)_xpcTransactionNameFor:(id)arg1;
- (void)activateAlert:(id)arg1;
- (id)initSingleton;
- (id)init;

@end

