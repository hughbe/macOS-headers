//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSScriptCommandConstructionContext : NSObject
{
}

+ (id)currentConstructionContext;
+ (void)setCurrentConstructionContext:(id)arg1;
+ (void)endConstruction;
+ (void)beginConstructionWithSuiteRegistry:(id)arg1;

@end

