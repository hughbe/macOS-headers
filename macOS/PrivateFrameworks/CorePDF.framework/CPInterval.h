//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPInterval : NSObject
{
    double left;
    double right;
}

- (BOOL)contains:(id)arg1;
- (double)right;
- (double)left;
- (void)add:(id)arg1;
- (BOOL)intersects:(id)arg1;
- (id)initLeft:(double)arg1 right:(double)arg2;

@end

