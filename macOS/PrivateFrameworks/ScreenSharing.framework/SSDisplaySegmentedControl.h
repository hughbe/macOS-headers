//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@class NSArray, NSString, SSScreenInfo;

@interface SSDisplaySegmentedControl : NSSegmentedControl
{
    NSArray *_screens;
    BOOL _touchBarStyle;
    struct CGColor *_grayColor;
    id _boundObjectForSelectedScreen;
    NSString *_boundKeyPathForSelectedScreen;
    struct CGRect _globalScreenRect;
}

@property(copy) NSString *boundKeyPathForSelectedScreen; // @synthesize boundKeyPathForSelectedScreen=_boundKeyPathForSelectedScreen;
@property id boundObjectForSelectedScreen; // @synthesize boundObjectForSelectedScreen=_boundObjectForSelectedScreen;
@property struct CGRect globalScreenRect; // @synthesize globalScreenRect=_globalScreenRect;
@property struct CGColor *grayColor; // @synthesize grayColor=_grayColor;
- (struct CGImage *)newImageForSegment:(unsigned long long)arg1 size:(struct CGSize)arg2 scaleFactor:(double)arg3;
- (struct CGImage *)newImageForSegment:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (void)screenImageSize:(struct CGSize *)arg1 andScaleFactor:(double *)arg2;
- (double)scaleFactorForFixedSize:(struct CGSize)arg1;
- (id)getImageForSegment:(unsigned long long)arg1 size:(struct CGSize)arg2 scaleFactor:(double)arg3;
- (id)getImageForMenuItemAtIndex:(unsigned long long)arg1;
@property(retain) SSScreenInfo *selectedScreen;
@property(copy) NSArray *screens;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
@property BOOL touchBarStyle; // @synthesize touchBarStyle=_touchBarStyle;
- (void)dealloc;
- (id)init;

@end

