//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSDictionary;

@interface NSDirectoryEnumerator : NSEnumerator
{
}

@property(readonly) BOOL isEnumeratingDirectoryPostOrder;
- (void)skipDescendants;
- (void)skipDescendents;
@property(readonly) unsigned long long level;
@property(readonly, copy) NSDictionary *directoryAttributes;
@property(readonly, copy) NSDictionary *fileAttributes;
- (id)nextObject;

@end

