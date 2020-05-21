//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UINSEvent : NSObject
{
    BOOL _isDown;
    unsigned short _virtualKeyCode;
    long long _modifierFlags;
    id _nsEvent;
    NSString *_modifiedInput;
    NSString *_unmodifiedInput;
    NSString *_shiftModifiedInput;
    NSString *_commandModifiedInput;
    unsigned long long _timestampMachAbs;
    long long _hidUsageCode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long hidUsageCode; // @synthesize hidUsageCode=_hidUsageCode;
@property(readonly, nonatomic) unsigned short virtualKeyCode; // @synthesize virtualKeyCode=_virtualKeyCode;
@property(readonly, nonatomic) unsigned long long timestampMachAbs; // @synthesize timestampMachAbs=_timestampMachAbs;
@property(readonly, nonatomic) NSString *commandModifiedInput; // @synthesize commandModifiedInput=_commandModifiedInput;
@property(readonly, nonatomic) NSString *shiftModifiedInput; // @synthesize shiftModifiedInput=_shiftModifiedInput;
@property(readonly, nonatomic) NSString *unmodifiedInput; // @synthesize unmodifiedInput=_unmodifiedInput;
@property(readonly, nonatomic) NSString *modifiedInput; // @synthesize modifiedInput=_modifiedInput;
@property(readonly, nonatomic) id nsEvent; // @synthesize nsEvent=_nsEvent;
@property(nonatomic) long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(nonatomic) BOOL isDown; // @synthesize isDown=_isDown;
- (id)initWithNSEvent:(id)arg1;

@end

