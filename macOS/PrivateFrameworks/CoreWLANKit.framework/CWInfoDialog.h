//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSString, NSTextField;

@interface CWInfoDialog : NSWindowController
{
    NSString *_title;
    NSString *_description;
    NSTextField *_titleTextField;
    NSTextField *_descriptionTextField;
    id _delegate;
}

@property(readonly, copy) NSString *description; // @synthesize description=_description;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
@property __weak id delegate; // @synthesize delegate=_delegate;
- (void)windowDidLoad;
- (void)onOKButton:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 description:(id)arg2;

@end

