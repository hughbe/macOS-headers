//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface UXCollectionViewAnimationContext : NSObject
{
    NSArray *_viewAnimations;
    long long _animationCount;
    id _completionHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
@property(retain, nonatomic) NSArray *viewAnimations; // @synthesize viewAnimations=_viewAnimations;
- (void)dealloc;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

