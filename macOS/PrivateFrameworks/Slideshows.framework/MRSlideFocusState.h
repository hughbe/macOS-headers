//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRAction, MRLayer, MRSlideInfo, NSString;

@interface MRSlideFocusState : NSObject
{
    BOOL _isTransitioning;
    BOOL _isGoingToNext;
    BOOL _delegateIsTransitioningToo;
    BOOL _isInZoomMode;
    MRLayer *_delegate;
    MRAction *_action;
    MRSlideInfo *_slideInfo;
    NSString *_slideID;
    MRSlideInfo *_previousSlideInfo;
    NSString *_previousSlideID;
    MRSlideInfo *_nextSlideInfo;
    NSString *_nextSlideID;
    unsigned long long _currentFocuserIndex;
}

@property(nonatomic) BOOL isInZoomMode; // @synthesize isInZoomMode=_isInZoomMode;
@property(nonatomic) BOOL delegateIsTransitioningToo; // @synthesize delegateIsTransitioningToo=_delegateIsTransitioningToo;
@property(nonatomic) BOOL isGoingToNext; // @synthesize isGoingToNext=_isGoingToNext;
@property(nonatomic) BOOL isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(nonatomic) unsigned long long currentFocuserIndex; // @synthesize currentFocuserIndex=_currentFocuserIndex;
@property(copy, nonatomic) NSString *nextSlideID; // @synthesize nextSlideID=_nextSlideID;
@property(retain, nonatomic) MRSlideInfo *nextSlideInfo; // @synthesize nextSlideInfo=_nextSlideInfo;
@property(copy, nonatomic) NSString *previousSlideID; // @synthesize previousSlideID=_previousSlideID;
@property(retain, nonatomic) MRSlideInfo *previousSlideInfo; // @synthesize previousSlideInfo=_previousSlideInfo;
@property(copy, nonatomic) NSString *slideID; // @synthesize slideID=_slideID;
@property(retain, nonatomic) MRSlideInfo *slideInfo; // @synthesize slideInfo=_slideInfo;
@property(retain, nonatomic) MRAction *action; // @synthesize action=_action;
@property(retain, nonatomic) MRLayer *delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

@end

