//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NSDraggingItem : NSObject
{
    id _item;
    struct CGRect _frame;
    NSArray *_components;
    CDUnknownBlockType _componentsProvider;
}

@property(readonly) id item; // @synthesize item=_item;
@property(copy) CDUnknownBlockType imageComponentsProvider; // @synthesize imageComponentsProvider=_componentsProvider;
- (id)description;
@property(copy) NSArray *imageComponents;
- (void)setDraggingFrame:(struct CGRect)arg1 contents:(id)arg2;
@property struct CGRect draggingFrame;
- (void)dealloc;
- (id)initWithPasteboardWriter:(id)arg1 frame:(struct CGRect)arg2 contents:(id)arg3;
- (id)_initWithItem:(id)arg1;
- (id)initWithPasteboardWriter:(id)arg1;

@end

