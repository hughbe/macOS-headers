//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class NSImmediateActionGestureRecognizer;

@protocol NSImmediateActionAnimationController <NSObject>

@optional
- (void)recognizerDidDismissAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerDidCompleteAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerDidCancelAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerDidUpdateAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerWillBeginAnimation:(NSImmediateActionGestureRecognizer *)arg1;
@end

