//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class ACUISetupManagerViewController, NSButton;

@interface ACUIAccountTypeRowRadio : NSTableCellView
{
    ACUISetupManagerViewController *_setupManager;
    NSButton *_radioButton;
}

- (void).cxx_destruct;
@property(retain) NSButton *radioButton; // @synthesize radioButton=_radioButton;
@property __weak ACUISetupManagerViewController *setupManager; // @synthesize setupManager=_setupManager;
- (void)select:(id)arg1;
- (void)mouseDown:(id)arg1;

@end

