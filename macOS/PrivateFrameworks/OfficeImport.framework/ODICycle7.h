//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/ODICycle.h>

__attribute__((visibility("hidden")))
@interface ODICycle7 : ODICycle
{
}

+ (BOOL)map2NodeWithState:(id)arg1;
+ (BOOL)map1NodeWithState:(id)arg1;
+ (void)mapTransition:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;
+ (void)addShapeForTransition:(id)arg1 relativeBounds:(struct CGRect)arg2 rotation:(float)arg3 state:(id)arg4;
+ (void)mapNode:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;
+ (void)addShapeForNode:(id)arg1 relativeBounds:(struct CGRect)arg2 state:(id)arg3;
+ (struct CGRect)mapGSpaceWithState:(id)arg1;
+ (struct CGSize)nodeSizeWithState:(id)arg1;

@end

