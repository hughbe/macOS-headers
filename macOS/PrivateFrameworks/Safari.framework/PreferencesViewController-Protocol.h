//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSWindow;

@protocol PreferencesViewController

@optional
+ (void)registerDefaults;
@property(readonly, nonatomic) double minimumPaneHeight;
- (void)focusDefaultViewWithHostWindow:(NSWindow *)arg1;
- (void)hostModuleWillBeRemoved;
- (void)hostModuleWillBeDisplayed;
- (void)hostModuleWasInitializedFromDefaults;
@end

