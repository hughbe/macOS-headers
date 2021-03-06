//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, _CDClientContext, _CDContextualChangeRegistration, _CDContextualKeyPath, _CDContextualPredicate;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SunriseSunsetProvider : NSObject
{
    _CDClientContext *_duetContextStore;
    _CDContextualKeyPath *_duetKeyPath;
    _CDContextualChangeRegistration *_duetRegistration;
    NSDictionary *_duetInfo;
    NSObject<OS_dispatch_semaphore> *_duetDispatchSemaphore;
    BOOL _sunriseSunsetNotificationEnabled;
    CDUnknownBlockType _callbackBlock;
    CDUnknownBlockType _duetCallback;
    _CDContextualPredicate *_predicate;
    int _logLevel;
}

@property int logLevel; // @synthesize logLevel=_logLevel;
- (void)updateSunriseSunsetInfo;
- (id)copySunriseSunsetInfo:(int)arg1;
- (void)dealloc;
- (void)cancel;
- (void)unregisterNotification;
- (void)unregisterBlock;
- (void)registerBlock:(CDUnknownBlockType)arg1;
- (id)initWithCallback:(CDUnknownBlockType)arg1;
- (id)copySunsetSunriseInfoFromContext;

@end

