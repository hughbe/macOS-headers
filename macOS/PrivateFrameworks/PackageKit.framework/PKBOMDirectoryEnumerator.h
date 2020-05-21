//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDirectoryEnumerator.h>

@class PKBOM;

@interface PKBOMDirectoryEnumerator : NSDirectoryEnumerator
{
    PKBOM *_pkBom;
    struct _BOMBomEnumerator *_be;
    struct _BOMFSObject *_currentFSO;
}

- (id)fileAttributes;
- (BOOL)isDirectory;
- (void)skipDescendents;
- (void)skipDescendants;
- (id)nextObject;
- (void)dealloc;
- (id)initWithBOM:(id)arg1;

@end

