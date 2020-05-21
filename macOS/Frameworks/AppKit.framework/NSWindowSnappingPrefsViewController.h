//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@interface NSWindowSnappingPrefsViewController : NSViewController
{
}

- (id)propertiesAsDictionary;
- (void)_reloadProperties;
- (void)_prefsChanged:(id)arg1;
@property BOOL snapToObscuredWindowEdges; // @dynamic snapToObscuredWindowEdges;
@property BOOL onlySmoothAnimateWhenNotInTheWindow; // @dynamic onlySmoothAnimateWhenNotInTheWindow;
@property double gapBetweenWindows; // @dynamic gapBetweenWindows;
@property BOOL smoothWindowWithAnimation; // @dynamic smoothWindowWithAnimation;
@property BOOL onlySnapWhenApproaching; // @dynamic onlySnapWhenApproaching;
@property BOOL instantUnsnap; // @dynamic instantUnsnap;
@property BOOL smoothWindowMovement; // @dynamic smoothWindowMovement;
@property BOOL allowWindowDocking; // @dynamic allowWindowDocking;
@property BOOL flashSnappedToWindow; // @dynamic flashSnappedToWindow;
@property BOOL showSnapTargets; // @dynamic showSnapTargets;
@property BOOL enableSnapping; // @dynamic enableSnapping;
@property BOOL shouldProvideVisualFeedback; // @dynamic shouldProvideVisualFeedback;
@property BOOL shouldProvideSoundFeedback; // @dynamic shouldProvideSoundFeedback;
@property BOOL shouldProvideHapticFeedback; // @dynamic shouldProvideHapticFeedback;
@property double unsnapDistanceMaxAnglePoint; // @dynamic unsnapDistanceMaxAnglePoint;
@property double resnapDistance; // @dynamic resnapDistance;
@property double unsnapDistanceMax; // @dynamic unsnapDistanceMax;
@property double unsnapDistanceMin; // @dynamic unsnapDistanceMin;
@property double unsnapDistance; // @dynamic unsnapDistance;
@property double unsnapVelocity; // @dynamic unsnapVelocity;
@property double snapVelocity; // @dynamic snapVelocity;
@property double magneticSnapDistance; // @dynamic magneticSnapDistance;
@property double snapDistance; // @dynamic snapDistance;
@property BOOL shouldLogSnapVelocity; // @dynamic shouldLogSnapVelocity;
@property BOOL shouldLogSnapping; // @dynamic shouldLogSnapping;
- (void)resetToDefaults:(id)arg1;
- (void)viewDidLoad;

@end

