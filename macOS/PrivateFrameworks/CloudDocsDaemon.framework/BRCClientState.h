//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCClientState : NSObject
{
    NSMutableDictionary *_dict;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)description;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

