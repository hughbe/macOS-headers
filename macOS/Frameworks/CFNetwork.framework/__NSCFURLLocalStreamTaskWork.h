//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface __NSCFURLLocalStreamTaskWork : NSObject
{
    const char *_static_description;
    double _timeout;
    double _timeoutTime;
    NSError *_recvdError;
    BOOL _hasBeenCalledBack;
    BOOL _timerStarted;
}

- (id)description;
- (const char *)_static_description;
- (id)initWithDescription:(const char *)arg1;

@end

