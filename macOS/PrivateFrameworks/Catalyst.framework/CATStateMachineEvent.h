//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CATStateMachineEvent : NSObject
{
    id _trigger;
    id _context;
}

+ (id)eventWithTrigger:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) id trigger; // @synthesize trigger=_trigger;
- (id)initWithEventTrigger:(id)arg1 context:(id)arg2;
- (id)description;

@end

