//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKEditAction : NSObject
{
    BOOL _destructive;
    NSString *_name;
    SEL _selector;
}

+ (id)deleteActionWithName:(id)arg1;
+ (id)actionWithName:(id)arg1 selector:(SEL)arg2;
@property(nonatomic) BOOL destructive; // @synthesize destructive=_destructive;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;

@end

