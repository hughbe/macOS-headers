//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, NSMutableDictionary;

@interface HMFClassRegistry : HMFObject
{
    HMFUnfairLock *_lock;
    NSMutableDictionary *_classes;
    Class _defaultClass;
}

- (void).cxx_destruct;
@property(readonly) Class defaultClass; // @synthesize defaultClass=_defaultClass;
- (void)setClass:(Class)arg1 forKey:(id)arg2;
- (Class)classForKey:(id)arg1;
- (id)initWithDefaultClass:(Class)arg1;
- (id)init;

@end

