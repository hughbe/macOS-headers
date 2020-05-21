//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABGroupEntry;
@protocol NSDraggingInfo;

@interface ABGroupDropScope : NSObject
{
    id <NSDraggingInfo> _draggingInfo;
    ABGroupEntry *_droppedEntry;
    long long _childIndex;
    ABGroupEntry *_selectedEntry;
}

@property(readonly) ABGroupEntry *selectedEntry; // @synthesize selectedEntry=_selectedEntry;
@property(readonly) long long childIndex; // @synthesize childIndex=_childIndex;
@property(readonly) ABGroupEntry *droppedEntry; // @synthesize droppedEntry=_droppedEntry;
@property(readonly) id <NSDraggingInfo> draggingInfo; // @synthesize draggingInfo=_draggingInfo;
- (id)description;
- (void)dealloc;
- (id)initWithDraggingInfo:(id)arg1 droppedEntry:(id)arg2 childIndex:(long long)arg3 selectedEntry:(id)arg4;

@end

