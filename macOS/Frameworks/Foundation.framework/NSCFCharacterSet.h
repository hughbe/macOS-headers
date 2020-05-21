//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableCharacterSet.h>

__attribute__((visibility("hidden")))
@interface NSCFCharacterSet : NSMutableCharacterSet
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForKeyedArchiver;
- (Class)classForArchiver;
- (void)makeCharacterSetFast;
- (void)makeCharacterSetCompact;
- (void)invert;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (void)removeCharactersInString:(id)arg1;
- (void)addCharactersInString:(id)arg1;
- (void)removeCharactersInRange:(struct _NSRange)arg1;
- (void)addCharactersInRange:(struct _NSRange)arg1;
- (id)invertedSet;
- (id)bitmapRepresentation;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (BOOL)isSupersetOfSet:(id)arg1;
- (BOOL)longCharacterIsMember:(unsigned int)arg1;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

