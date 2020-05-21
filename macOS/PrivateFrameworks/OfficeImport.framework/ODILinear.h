//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ODIState;

__attribute__((visibility("hidden")))
@interface ODILinear : NSObject
{
    BOOL mIsHorizontal;
    BOOL mWithConnectors;
    BOOL mStretch;
    float mPointHeight;
    float mConnectorWidth;
    float mPadding;
    BOOL mIsTextCenteredHorizontally;
    BOOL mIsTextCenteredVertically;
    unsigned int mMaxPointCount;
    ODIState *mState;
}

+ (void)mapUnknownWithState:(id)arg1;
+ (BOOL)mapIdentifier:(id)arg1 state:(id)arg2;
- (void).cxx_destruct;
- (void)mapStyleFromTransition:(id)arg1 shape:(id)arg2;
- (void)mapTransition:(id)arg1 pointBounds:(struct CGRect)arg2;
- (void)mapStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapPoint:(id)arg1 bounds:(struct CGRect)arg2;
- (void)nextPointBounds:(struct CGRect *)arg1;
- (void)setLogicalBounds;
- (void)map;
- (void)setMaxPointCount:(unsigned int)arg1;
- (void)setIsTextCenteredVertically:(BOOL)arg1;
- (void)setIsTextCenteredHorizontally:(BOOL)arg1;
- (void)setIsTextCentered:(BOOL)arg1;
- (void)setPadding:(float)arg1;
- (void)setConnectorWidth:(float)arg1;
- (void)setPointHeight:(float)arg1;
- (void)setStretch:(BOOL)arg1;
- (void)setWithConnectors:(BOOL)arg1;
- (void)setIsHorizontal:(BOOL)arg1;
- (id)initWithState:(id)arg1;

@end

