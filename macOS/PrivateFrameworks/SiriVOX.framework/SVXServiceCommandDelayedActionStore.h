//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SVXServiceCommandDelayedActionStore : NSObject
{
    NSMutableDictionary *_actionsByKey;
}

- (void).cxx_destruct;
- (void)removeAllActions;
- (void)removeActionForKey:(id)arg1;
- (void)setAction:(id)arg1 forKey:(id)arg2;
- (id)actionForKey:(id)arg1;
- (id)init;

@end

