//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSAccessibilityWeakReferenceContainer : NSObject <NSCopying>
{
    unsigned long long _hash;
    id _weakReference;
    id _danglingReference;
    BOOL _hasWeakReference;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly) __weak id object;
- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (id)init;

@end

