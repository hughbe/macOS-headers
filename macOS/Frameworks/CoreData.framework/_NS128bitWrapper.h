//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _NS128bitWrapper : NSObject <NSCopying>
{
    struct _double_quad_uint {
        unsigned long long high64;
        unsigned long long low64;
    } bits;
}

- (long long)compare:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBytes:(char *)arg1;

@end

