//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

__attribute__((visibility("hidden")))
@interface NSCFError : NSError
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (Class)classForCoder;
- (id)userInfo;
- (id)domain;
- (long long)code;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

