//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/NSLocking-Protocol.h>

@interface EFResource : NSObject <NSLocking>
{
    struct os_unfair_lock_s _unfair_lock;
    _Atomic long long _lockCount;
}

- (BOOL)returnResource;
- (void)holdResource;
- (void)unlock;
- (void)lock;
- (id)init;

@end

