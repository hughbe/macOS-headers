//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSMenuItem.h>

@class NSDictionary, RVDocumentContext, RVItem, RVPresenter, RVPresentingContext;

__attribute__((visibility("hidden")))
@interface RVMenuItem : NSMenuItem
{
    RVPresenter *_presenter;
    RVItem *_item;
    RVDocumentContext *_documentContext;
    RVPresentingContext *_presentingContext;
    NSDictionary *_options;
    BOOL _forceLookup;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL forceLookup; // @synthesize forceLookup=_forceLookup;
- (long long)tagForType;
- (void)_rvMenuItemAction;
- (id)initWithTitle:(id)arg1 presenter:(id)arg2 item:(id)arg3 documentContext:(id)arg4 presentingContext:(id)arg5 options:(id)arg6;

@end

