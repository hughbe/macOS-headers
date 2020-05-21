//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMKInputController, IMKUICandidateTouchBarController, IMKUIWindowBasedCandidateController;

@interface IMKUIInformation : NSObject
{
    IMKUICandidateTouchBarController *_touchBarController;
    IMKUIWindowBasedCandidateController *_visibleOnscreenController;
}

+ (double)maxWidthOfHandwritingCandidates;
+ (double)widthOfHandwritingCandidatesForTouchBarWidth:(double)arg1 candidateSurfaceWidth:(double)arg2;
+ (double)touchBarWidth;
+ (double)quickTypeBarWidth;
+ (double)candidateSurfaceWidth;
+ (id)sharedInformation;
+ (BOOL)isUsingSubclassingImplementation;
+ (BOOL)isAppleInternal;
+ (BOOL)isTouchBarAvailable;
@property(retain, nonatomic) IMKUIWindowBasedCandidateController *visibleOnscreenController; // @synthesize visibleOnscreenController=_visibleOnscreenController;
@property(retain, nonatomic) IMKUICandidateTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
- (void)dealloc;
@property(readonly, nonatomic) IMKInputController *inputController;
@property(readonly, nonatomic) id textClient;

@end

