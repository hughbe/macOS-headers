//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMGestureManager : NSObject
{
    id _internal;
}

+ (void)setGestureServiceEnabled:(BOOL)arg1;
+ (BOOL)isGestureServiceAvailable;
+ (BOOL)isGestureServiceEnabled;
@property(copy) CDUnknownBlockType gestureHandler;
- (void)dealloc;
- (id)initWithPriority:(int)arg1;
- (id)init;

@end

