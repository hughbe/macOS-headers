//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Suggestions/NSTableViewDelegate-Protocol.h>
#import <Suggestions/NSWindowDelegate-Protocol.h>

@class NSString, SGTSearchField;

__attribute__((visibility("hidden")))
@interface SGTSearchFieldDebugController : NSWindowController <NSWindowDelegate, NSTableViewDelegate>
{
    SGTSearchField *field;
}

- (void).cxx_destruct;
@property(retain) SGTSearchField *field; // @synthesize field;
- (id)windowFrameAutosaveName;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)showWindow:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (id)initWithSearchField:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

