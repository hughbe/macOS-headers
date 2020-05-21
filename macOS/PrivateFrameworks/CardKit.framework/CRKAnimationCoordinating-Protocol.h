//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/NSObject-Protocol.h>

@class NSView;

@protocol CRKAnimationCoordinating <NSObject>
@property(nonatomic) double duration;
@property(copy, nonatomic) CDUnknownBlockType completion;
@property(copy, nonatomic) CDUnknownBlockType animations;
@property(copy, nonatomic) CDUnknownBlockType finalSetup;
@property(copy, nonatomic) CDUnknownBlockType initialSetup;
@property(readonly, nonatomic) NSView *containerView;
@property(readonly, nonatomic, getter=isAnimated) BOOL animated;
@end

