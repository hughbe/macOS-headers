//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _NSClassAndClassInfo : NSObject <NSCopying>
{
    Class _registryClass;
    Class _objectClass;
    unsigned long long _registryClassHash;
    unsigned long long _objectClassHash;
    unsigned long long _hash;
}

- (void)setObjectClass:(Class)arg1;
- (void)setRegistryClass:(Class)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRegistryClass:(Class)arg1 andObjectClass:(Class)arg2;

@end

