//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreData/NSLocking-Protocol.h>

__attribute__((visibility("hidden")))
@interface _PFMutex : NSObject <NSLocking>
{
    struct _opaque_pthread_mutex_t _lock;
}

+ (void)initialize;
- (void)unlock;
- (BOOL)tryLock;
- (void)lock;
- (void)dealloc;
- (id)init;

@end

