//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ScreenSaverDefaultsManager : NSObject
{
    NSMutableDictionary *_cache;
}

+ (id)defaultsManager;
- (void)_appWillTerminate:(id)arg1;
- (void)synchronize;
- (void)setDefaults:(id)arg1 forKey:(id)arg2;
- (id)defaultsForKey:(id)arg1;
- (id)init;

@end

