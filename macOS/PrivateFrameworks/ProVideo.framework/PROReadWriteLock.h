//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProVideo/NSLocking-Protocol.h>

@interface PROReadWriteLock : NSObject <NSLocking>
{
    struct _opaque_pthread_rwlock_t lock;
}

- (void)unlock;
- (void)lockForReading;
- (void)lockForWriting;
- (void)lock;
- (void)dealloc;
- (id)init;

@end

