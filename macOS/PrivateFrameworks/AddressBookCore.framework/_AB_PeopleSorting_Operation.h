//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface _AB_PeopleSorting_Operation : NSOperation
{
    id *_people;
    struct _NSRange _range;
    struct _NSRange _mergeRange;
    unsigned long long _type;
    void *_context;
}

- (void)main;
- (id)initForCArray:(id *)arg1 withContext:(void *)arg2 andRange:(struct _NSRange)arg3 mergeWithRange:(struct _NSRange)arg4 withType:(unsigned long long)arg5;

@end

