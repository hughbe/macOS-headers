//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface _PFResultObjectKeyEnumerator : NSEnumerator
{
    id _target;
    const id *_keys;
    unsigned long long *_referenceItems;
    struct _NSRange _range;
    unsigned long long _index;
}

- (id)nextObject;
- (void)dealloc;
- (void)_invalidate;
- (id)initWithArray:(const id *)arg1 forTarget:(id)arg2 withReferenceValues:(unsigned long long *)arg3 andRange:(struct _NSRange)arg4;

@end

