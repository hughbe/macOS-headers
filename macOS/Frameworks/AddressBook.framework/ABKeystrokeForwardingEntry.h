//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABKeystrokeForwardingEntry : NSObject
{
    id _target;
    SEL _action;
    CDUnknownBlockType _test;
}

+ (id)entryWithTarget:(id)arg1 action:(SEL)arg2 test:(CDUnknownBlockType)arg3;
@property(readonly) CDUnknownBlockType test; // @synthesize test=_test;
@property(readonly) SEL action; // @synthesize action=_action;
@property(readonly) id target; // @synthesize target=_target;
- (void)dealloc;

@end

