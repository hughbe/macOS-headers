//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AppKit/NSCollectionViewElement-Protocol.h>

@class NSButton, NSString;

__attribute__((visibility("hidden")))
@interface _NSTouchBarCustomizationPreviewDoneButton : NSView <NSCollectionViewElement>
{
    NSButton *_doneButton;
    id _target;
    SEL _action;
}

- (void).cxx_destruct;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
- (void)prepareForReuse;
- (void)done:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *identifier;
@property(readonly) Class superclass;

@end

