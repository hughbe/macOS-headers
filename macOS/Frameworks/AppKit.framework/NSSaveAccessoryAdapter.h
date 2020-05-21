//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface NSSaveAccessoryAdapter : NSView
{
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
}

+ (struct CGSize)checkAllowedSize:(struct CGSize)arg1 atPriority:(float)arg2 ofView:(id)arg3;
+ (BOOL)_constraintAccessoryViewWantsCentering:(id)arg1 collapsePriority:(float)arg2 constraintsCreated:(id)arg3 forOpen:(BOOL)arg4;
+ (BOOL)_oldSchoolAccessoryViewWantsCentering:(id)arg1;
+ (BOOL)_accessoryViewIsOldSchool:(id)arg1;
+ (id)unwrapAccessoryIfNecessary:(id)arg1;
+ (id)adaptAccessoryIfNecessary:(id)arg1 collapsePriority:(float)arg2 forOpen:(BOOL)arg3;
@property(retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
- (void)_updateConstrainedSize:(struct CGSize)arg1;
- (id)_createHeightConstraint:(double)arg1;
- (id)_createWidthConstraint:(double)arg1;
- (void)dealloc;

@end

