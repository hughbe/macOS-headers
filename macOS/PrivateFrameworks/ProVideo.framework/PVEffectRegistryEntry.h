//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PVEffectRegistryEntry : NSObject
{
    Class _effectClass;
    NSDictionary *_effectProperties;
}

- (void).cxx_destruct;
- (id)effectProperties;
- (Class)effectClass;
- (oneway void)dealloc;
- (id)initWithClass:(Class)arg1 andProperties:(id)arg2;

@end

