//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFCopyOnWriteHolder : NSObject
{
    int _interestCount;
    id _object;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (id)description;
- (BOOL)hasMultipleInterests;
- (void)endInterest;
- (void)beginInterest;
- (id)initWithObject:(id)arg1;

@end

