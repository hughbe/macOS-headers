//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

__attribute__((visibility("hidden")))
@interface __NSSingleObjectArrayI : NSArray
{
    id _object;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)objectEnumerator;
- (id)lastObject;
- (BOOL)isEqualToArray:(id)arg1;
- (id)firstObject;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;

@end

