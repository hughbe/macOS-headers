//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPopover.h>

@class SidecarRequest;

@interface SidecarPopover : NSPopover
{
    SidecarRequest *_request;
}

+ (id)sidecarPopoverWithRequest:(id)arg1;
- (void).cxx_destruct;
- (long long)runModal;
- (void)popoverWillClose:(id)arg1;
- (void)performClose:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_stopEventMonitor:(id)arg1;
- (id)_startEventMonitor;
- (id)window;
- (id)initWithRequest:(id)arg1;

@end

