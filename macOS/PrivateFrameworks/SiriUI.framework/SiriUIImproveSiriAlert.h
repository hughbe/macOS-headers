//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSTextField;

__attribute__((visibility("hidden")))
@interface SiriUIImproveSiriAlert : NSWindowController
{
    NSTextField *_messageText;
    NSTextField *_informativeText;
    NSButton *_aboutLinkButton;
    NSButton *_firstButton;
    NSButton *_secondButton;
}

- (void).cxx_destruct;
@property __weak NSButton *secondButton; // @synthesize secondButton=_secondButton;
@property __weak NSButton *firstButton; // @synthesize firstButton=_firstButton;
@property __weak NSButton *aboutLinkButton; // @synthesize aboutLinkButton=_aboutLinkButton;
@property __weak NSTextField *informativeText; // @synthesize informativeText=_informativeText;
@property __weak NSTextField *messageText; // @synthesize messageText=_messageText;
- (void)clickedAboutLink:(id)arg1;
- (void)clickedSecondButton:(id)arg1;
- (void)clickedFirstButton:(id)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)runModal;
- (void)windowDidLoad;
- (id)init;

@end

