//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVPath : NSObject
{
}

+ (void)writePath:(id)arg1 toString:(id)arg2;
+ (void)readPath:(id)arg1 toGeometry:(id)arg2;
+ (struct EshComputedValue)parseParam:(const char **)arg1 first:(BOOL)arg2;
+ (int)parseCommand:(const char **)arg1;
+ (struct EshComputedValue)noneParam;

@end

