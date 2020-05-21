//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSOutlineView;
@protocol NSOutlineViewDataSource;

__attribute__((visibility("hidden")))
@interface RenderLayerTree : NSWindowController
{
    NSOutlineView *outlineView;
    id <NSOutlineViewDataSource> dataSource;
    id _lifetimeExtender;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id lifetimeExtender; // @synthesize lifetimeExtender=_lifetimeExtender;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (void)_createTreeFromWKView:(id)arg1;
- (id)initWithWKView:(id)arg1;

@end

