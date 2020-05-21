//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMUserDefaultsObserveToken-Protocol.h>

@class NSString, REMUserDefaults;

@interface REMUserDefaultsObserver : NSObject <REMUserDefaultsObserveToken>
{
    BOOL _removed;
    REMUserDefaults *_userDefaults;
    NSString *_userDefaultsKey;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL removed; // @synthesize removed=_removed;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) NSString *userDefaultsKey; // @synthesize userDefaultsKey=_userDefaultsKey;
@property(retain, nonatomic) REMUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)dealloc;
- (void)stopObserving;
- (id)initWithUserDefaults:(id)arg1 key:(id)arg2 block:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

