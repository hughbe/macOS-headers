//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSView;

@interface OSADictionaryHistoryItem : NSObject
{
    NSArray *_selectedObjects;
    NSView *_selectedView;
    NSString *_selectedPath;
}

- (void)setSelectedPath:(id)arg1;
- (id)selectedPath;
- (void)setSelectedView:(id)arg1;
- (id)selectedView;
- (void)setSelectedObjects:(id)arg1;
- (id)selectedObjects;
- (void)dealloc;
- (id)initWithSelectedObjects:(id)arg1 inView:(id)arg2;

@end

