//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPDistributedMessagingCallout : NSObject
{
    id _target;
    SEL _selector;
    BOOL _returnsVoid;
    BOOL _returnsVoidIsValid;
}

@property(readonly, nonatomic) BOOL returnsVoid; // @synthesize returnsVoid=_returnsVoid;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, retain, nonatomic) id target; // @synthesize target=_target;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

