//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SOTimer : NSObject
{
    NSString *_group;
    unsigned long long _milliSeconds;
    id _listener;
    SEL _selector;
    NSString *_identifier;
}

+ (unsigned long long)milliSecondsIntervalForIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property SEL selector; // @synthesize selector=_selector;
@property __weak id listener; // @synthesize listener=_listener;
@property unsigned long long milliSeconds; // @synthesize milliSeconds=_milliSeconds;
@property(retain) NSString *group; // @synthesize group=_group;
- (id)initWithMiliSeconds:(unsigned long long)arg1 listener:(id)arg2 selector:(SEL)arg3 group:(id)arg4;
- (id)initWithMiliSeconds:(unsigned long long)arg1 listener:(id)arg2 selector:(SEL)arg3;
- (id)description;

@end

