//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSArrayController, NSPredicate;

@interface _NSArrayControllerExtensions : NSObject
{
    NSArrayController *_controller;
    NSArray *_automaticRearrangementKeyPaths;
    NSArray *_sortDescriptors;
    NSPredicate *_filterPredicate;
    id _suppressedContentObjectsObservingTracker;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopRearrangementObservingForSuppressedContentObjects;
- (void)_startRearrangementObservingForSuppressedContentObjects:(id)arg1;
- (id)_filterPredicate;
- (id)_setFilterPredicate:(id)arg1;
- (void)_setFilterPredicateNoCopy:(id)arg1;
- (id)_sortDescriptors;
- (id)_setSortDescriptors:(id)arg1;
- (void)_setSortDescriptorsNoCopy:(id)arg1;
- (id)_automaticRearrangementKeyPaths;
- (id)_setAutomaticRearrangementKeyPaths:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

