//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OCDDelayedNodeContext;

__attribute__((visibility("hidden")))
@interface OCDDelayedNode : NSObject
{
    id <OCDDelayedNodeContext> mDelayedContext;
    _Bool mLoaded;
}

- (void).cxx_destruct;
- (_Bool)load;
- (void)setLoaded:(_Bool)arg1;
- (_Bool)isLoaded;
- (id)delayedContext;
- (void)setDelayedContext:(id)arg1;

@end

