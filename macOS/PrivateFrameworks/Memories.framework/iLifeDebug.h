//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface iLifeDebug : NSObject
{
}

+ (void)loadOnce;
+ (void)evaluateDebugAssertBehaviorSettings;
+ (BOOL)handledAsDebugAssertBehaviorURL:(id)arg1;
+ (void)readDebugAssertBehaviorFromDisk;
+ (void)writeDebugAssertBehaviorStringToDisk:(id)arg1;
+ (void)writeDebugAssertBehaviorValueToDisk:(int)arg1;
+ (void)removeDebugAssertBehaviorFile;
+ (id)debugAssertBehaviorFilePath;

@end

