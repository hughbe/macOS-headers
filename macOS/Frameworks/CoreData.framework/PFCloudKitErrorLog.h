//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface PFCloudKitErrorLog : NSObject
{
    NSMutableArray *_entries;
}

@property(readonly, nonatomic) NSArray *entries;
- (void)logEncounteredError:(id)arg1 withAnnotation:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end

