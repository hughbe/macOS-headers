//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NSLayoutManagerTextBlockRowArrayCache : NSObject
{
    struct _NSRange _rowCharRange;
    double _containerWidth;
    NSArray *_rowArray;
    BOOL _collapseBorders;
}

- (void)dealloc;
- (id)initWithRowCharRange:(struct _NSRange)arg1 containerWidth:(double)arg2 rowArray:(id)arg3 collapseBorders:(BOOL)arg4;

@end

