//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreData/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _NSNoChangeToken : NSObject <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)defaultInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (id)_initPrivate;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

