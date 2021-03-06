//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, ISPlayerOutputContent;

@protocol ISPlayerOutput <NSObject>
@property(nonatomic) double photoScale;
@property(retain, nonatomic) ISPlayerOutputContent *content;
@property(readonly, nonatomic) CALayer *crossfadeLayer;
@property(readonly, nonatomic) CALayer *photoLayer;
@property(readonly, nonatomic) CALayer *videoLayer;
- (void)playerDidPlayVideoToEnd;
- (void)playerWillPlayVideoToEnd;
- (void)playerDidEndTransitionToPlaybackState:(long long)arg1;
- (void)playerWillBeginTransitionToPlaybackState:(long long)arg1;
@end

