//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPopover.h>

#import <DataDetectors/DDActionViewPresenter-Protocol.h>
#import <DataDetectors/NSPopoverDelegate-Protocol.h>

@class DDActionContext, NSString;

__attribute__((visibility("hidden")))
@interface DDPopover : NSPopover <NSPopoverDelegate, DDActionViewPresenter>
{
    DDActionContext *_ddcontext;
    BOOL _opened;
    BOOL _detaching;
    unsigned long long _ddEdge;
    struct CGRect _ddRect;
}

- (void).cxx_destruct;
@property(readonly) struct CGRect ddRect; // @synthesize ddRect=_ddRect;
@property(readonly) unsigned long long ddEdge; // @synthesize ddEdge=_ddEdge;
- (void)setAltPresentationBehavior:(BOOL)arg1;
- (void)presentationEndedForController:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)popoverDidDetach:(id)arg1;
- (BOOL)popoverShouldDetach:(id)arg1;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)presentRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)setContent:(id)arg1;
- (id)initDDContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

