//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADPath : NSObject
{
    struct CGSize mSize;
    NSMutableArray *mElements;
    int mFillMode;
    BOOL mStroked;
}

- (void).cxx_destruct;
- (id)description;
- (void)setStroked:(BOOL)arg1;
- (BOOL)stroked;
- (void)setFillMode:(int)arg1;
- (int)fillMode;
- (id)elementAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementCount;
- (void)addElement:(id)arg1;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (id)init;

@end

