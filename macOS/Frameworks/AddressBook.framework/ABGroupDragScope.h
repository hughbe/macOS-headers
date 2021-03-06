//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABGroupListController, NSArray, NSPasteboard;

@interface ABGroupDragScope : NSObject
{
    ABGroupListController *_viewController;
    NSArray *_entries;
    NSPasteboard *_pasteboard;
}

@property(readonly) NSPasteboard *pasteboard; // @synthesize pasteboard=_pasteboard;
@property(readonly) NSArray *entries; // @synthesize entries=_entries;
@property(readonly) ABGroupListController *viewController; // @synthesize viewController=_viewController;
- (void)dealloc;
- (id)initWithListViewController:(id)arg1 entries:(id)arg2 pasteboard:(id)arg3;

@end

