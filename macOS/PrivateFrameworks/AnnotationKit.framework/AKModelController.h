//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKSparseMutableControllerArray, NSArray;

@interface AKModelController : NSObject
{
    AKSparseMutableControllerArray *_mutablePageModelControllers;
}

- (void).cxx_destruct;
- (void)populateFromArchivedPageModelControllers:(id)arg1;
- (id)archivedPageModelControllers;
- (void)deselectAllAnnotations;
- (void)deleteAllSelectedAnnotations;
- (id)allSelectedAnnotations;
- (id)pageModelControllerForAnnotation:(id)arg1;
- (id)pageModelControllerForPage:(unsigned long long)arg1;
- (void)replacePageModelControllersAtIndexes:(id)arg1 withPageModelControllers:(id)arg2;
- (void)replaceObjectInPageModelControllersAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removePageModelControllersAtIndexes:(id)arg1;
- (void)removeObjectFromPageModelControllersAtIndex:(unsigned long long)arg1;
- (void)insertPageModelControllers:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inPageModelControllersAtIndex:(unsigned long long)arg2;
@property(readonly) NSArray *pageModelControllers;
- (id)init;

@end

