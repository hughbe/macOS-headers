//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VKObjectBoundsContext : NSObject
{
    vector_554e3200 _points;
    struct VKEdgeInsets _edgePadding;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct VKEdgeInsets edgePadding; // @synthesize edgePadding=_edgePadding;
- (CDStruct_02837cd9)boundingRect;
- (BOOL)isEmpty;
- (void)addPoints:(const vector_554e3200 *)arg1;

@end

