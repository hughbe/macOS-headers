//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPTextLineMaker : NSObject
{
    NSMutableArray *textLines;
}

- (unsigned int)makeTextLines:(id)arg1;
- (void)zOrderSplitLines:(id)arg1;
- (void)splitByGraphic:(id)arg1 with:(struct CPPDFContext *)arg2;
- (id)textLines;
- (void)dealloc;

@end

