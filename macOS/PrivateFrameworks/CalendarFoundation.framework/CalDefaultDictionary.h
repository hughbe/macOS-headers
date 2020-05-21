//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject <NSCopying>
{
    Class _defaultClass;
    NSMutableDictionary *_dict;
}

- (void).cxx_destruct;
- (id)finalDictionary;
- (void)setDictionary:(id)arg1;
- (unsigned long long)count;
- (id)keys;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (id)existingObjectForKey:(id)arg1;
- (id)_mutableCopyOfFinalDictionaryWithZone:(struct _NSZone *)arg1 isDeepCopy:(BOOL)arg2;
- (id)_copyWithZone:(struct _NSZone *)arg1 isDeepCopy:(BOOL)arg2;
- (id)deepCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDefaultClass:(Class)arg1;

@end

