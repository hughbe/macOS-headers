//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SCTGRL;

__attribute__((visibility("hidden")))
@interface SCTGRLTree : NSObject
{
    NSString *mKey;
    SCTGRL *mGRL;
    NSMutableArray *mChildren;
    SCTGRLTree *mParent;
}

- (void)dealloc;
- (id)toString;
- (id)children;
- (id)parent;
- (id)key;
- (id)addChild:(id)arg1;
- (id)setParent:(id)arg1;
- (id)grl;
- (id)setGRL:(id)arg1;
- (id)setKey:(id)arg1;
- (id)newChildWithKey:(id)arg1;
- (id)childWithKey:(id)arg1;
- (void)addGRLsInGRLIndex:(id)arg1;
- (void)addGRLToTree:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)initRootWithKey:(id)arg1 withGRLIndex:(id)arg2;
- (id)init;

@end

