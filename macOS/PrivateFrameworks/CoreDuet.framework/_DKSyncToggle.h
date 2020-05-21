//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _DKSyncToggle : NSObject
{
    BOOL _enabled;
    NSObject *_object;
    NSString *_name;
    SEL _enableSelector;
    SEL _disableSelector;
}

+ (id)toggleWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) SEL disableSelector; // @synthesize disableSelector=_disableSelector;
@property(readonly, nonatomic) SEL enableSelector; // @synthesize enableSelector=_enableSelector;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak NSObject *object; // @synthesize object=_object;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void)_setEnabled:(BOOL)arg1;
- (void)dealloc;
- (id)initWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4;

@end

