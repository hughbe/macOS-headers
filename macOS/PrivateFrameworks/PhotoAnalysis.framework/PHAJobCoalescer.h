//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PHAJobCoalescerDelegate;

@interface PHAJobCoalescer : NSObject
{
    id <PHAJobCoalescerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PHAJobCoalescerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addJob:(id)arg1;
- (id)init;

@end

