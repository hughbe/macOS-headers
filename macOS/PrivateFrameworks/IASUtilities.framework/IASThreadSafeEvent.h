//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IASThreadSafeEvent : NSObject
{
    BOOL _flag;
    BOOL _initialized;
    struct _opaque_pthread_cond_t _condition;
    struct _opaque_pthread_mutex_t _mutex;
}

@property struct _opaque_pthread_cond_t condition; // @synthesize condition=_condition;
@property struct _opaque_pthread_mutex_t mutex; // @synthesize mutex=_mutex;
@property BOOL initialized; // @synthesize initialized=_initialized;
@property BOOL flag; // @synthesize flag=_flag;
- (BOOL)waitForTimeInterval:(double)arg1;
- (void)wait;
- (void)clear;
- (void)set;
@property(readonly) BOOL isSet;
- (void)withLock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

