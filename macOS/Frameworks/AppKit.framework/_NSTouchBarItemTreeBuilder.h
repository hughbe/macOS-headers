//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSTouchBarItemTree;

__attribute__((visibility("hidden")))
@interface _NSTouchBarItemTreeBuilder : NSObject
{
    NSArray *_touchBars;
    CDUnknownBlockType _itemsMap;
    BOOL _requireUniqueItemIdentifiers;
    NSArray *_filteredBars;
    long long _maxVisitedResponderBarIndex;
    long long _currentResponderBarIndex;
    NSMutableDictionary *_itemIdentifiersToParentNodes;
}

@property BOOL requireUniqueItemIdentifiers; // @synthesize requireUniqueItemIdentifiers=_requireUniqueItemIdentifiers;
@property(copy) CDUnknownBlockType itemsMap; // @synthesize itemsMap=_itemsMap;
- (id)_expandItem:(id)arg1 itemCenteredNode:(id *)arg2;
- (id)_expandBarChildren:(id)arg1 inNode:(id)arg2 centeredNode:(id *)arg3;
- (id)_expandResponderBarAtIndex:(long long)arg1 centerNode:(id *)arg2;
- (void)_performWithResponderBarIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_expandNextResponderBarWithCenterNode:(id *)arg1;
@property(readonly) NSTouchBarItemTree *itemTree;
- (void)dealloc;
- (id)initWithTouchBars:(id)arg1;

@end

