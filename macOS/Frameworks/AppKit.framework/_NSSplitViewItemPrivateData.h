//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAppearance, NSNumber, NSViewController;

__attribute__((visibility("hidden")))
@interface _NSSplitViewItemPrivateData : NSObject
{
    NSViewController *_viewController;
    float _holdingPriority;
    NSNumber *_overrideHoldingPriority;
    id _animator;
    id _animationsDictionary;
    long long _currentAnimationCount;
    double _minimumThickness;
    double _maximumThickness;
    double _automaticMaximumThickness;
    double _preferredThicknessFraction;
    long long _behavior;
    long long _collapseBehavior;
    NSAppearance *_appearance;
    unsigned int _prefersCollapsesToOverlay:1;
    unsigned int _hasUserSetSize:1;
    unsigned int _canCollapseFromWindowResize:1;
    unsigned int _hasBaseVibrancyEffect:1;
    unsigned int _reserved:28;
}

- (void).cxx_destruct;
- (void)dealloc;

@end

