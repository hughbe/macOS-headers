//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface ObjCObjectClassEntry : NSObject
{
    NSString *_clsName;
    NSMutableSet *_objects;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
@property(readonly) NSSet *objects;
@property(readonly) NSString *clsName;
- (id)initWithClass:(Class)arg1;

@end

