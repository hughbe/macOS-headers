//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PFCoalescerActivityToken : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSString *_reason;
    NSArray *_callStackReturnAddresses;
    NSDate *_creationDate;
}

- (void).cxx_destruct;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) NSArray *callStackReturnAddresses; // @synthesize callStackReturnAddresses=_callStackReturnAddresses;
@property(retain) NSString *reason; // @synthesize reason=_reason;
@property(retain) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
@property(retain) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
- (id)description;
- (void)endActivity;
- (void)dealloc;
- (id)initWithDispatchGroup:(id)arg1 reason:(id)arg2;

@end

