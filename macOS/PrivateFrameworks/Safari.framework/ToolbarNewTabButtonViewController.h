//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTitlebarAccessoryViewController.h>

@class NewTabButton;

__attribute__((visibility("hidden")))
@interface ToolbarNewTabButtonViewController : NSTitlebarAccessoryViewController
{
    NewTabButton *_createTabButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NewTabButton *createTabButton; // @synthesize createTabButton=_createTabButton;
- (id)initWithButtonTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

