//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDCollection.h>

__attribute__((visibility("hidden")))
@interface EDStylesCollection : EDCollection
{
    unsigned long long mDefaultWorkbookStyleIndex;
}

- (void)setDefaultWorkbookStyleIndex:(unsigned long long)arg1;
- (unsigned long long)defaultWorkbookStyleIndex;
- (id)defaultWorkbookStyle;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (unsigned long long)addObject:(id)arg1;
- (id)init;

@end

