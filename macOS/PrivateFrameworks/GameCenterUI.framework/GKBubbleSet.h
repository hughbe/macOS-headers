//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKBubbleFlowBubbleControl, NSArray, NSString;

@interface GKBubbleSet : NSObject
{
    GKBubbleFlowBubbleControl *_bubbleControls[12];
    long long _supportedBubbles;
    NSString *_debuggingTag;
}

+ (id)setWithBubbleControls:(id)arg1;
+ (id)setWithBubbleTypes:(long long)arg1;
@property(retain, nonatomic) NSString *debuggingTag; // @synthesize debuggingTag=_debuggingTag;
@property(nonatomic) long long supportedBubbles; // @synthesize supportedBubbles=_supportedBubbles;
- (void)setAllContentAlpha:(double)arg1;
- (void)hideAllBubbleControls;
- (void)updateBubbleVisibilityAccordingToSupportedBubblesMask;
- (void)syncBubbleMeshAnimationStateFromSet:(id)arg1;
@property(readonly, nonatomic) NSArray *bubbleControls;
- (id)bubbleForType:(long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)subsetWithBubbleTypes:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;

@end

