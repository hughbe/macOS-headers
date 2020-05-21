//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EFObservable;

@interface MCPowerSourceManager : NSObject
{
    struct __CFRunLoopSource *_runLoopSource;
    BOOL _powerSourceIsLimited;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)log;
@property(nonatomic) BOOL powerSourceIsLimited; // @synthesize powerSourceIsLimited=_powerSourceIsLimited;
@property(readonly, nonatomic) EFObservable *powerSourceIsLimitedObservable;
- (id)init;
- (void)dealloc;

@end

