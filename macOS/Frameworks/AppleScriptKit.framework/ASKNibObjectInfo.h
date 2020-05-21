//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleScriptKit/NSCoding-Protocol.h>

@class NSMutableArray, NSString;

@interface ASKNibObjectInfo : NSObject <NSCoding>
{
    long long _ID;
    NSString *_name;
    NSString *_scriptName;
    NSMutableArray *_eventHandlerNames;
    int _scope;
}

+ (void)initialize;
- (unsigned long long)indexOfEventHandlerName:(id)arg1;
- (void)removeEventHandlerName:(id)arg1;
- (void)addEventHandlerName:(id)arg1;
- (BOOL)hasInfo;
- (void)setScope:(int)arg1;
- (int)scope;
- (void)setEventHandlerNames:(id)arg1;
- (id)eventHandlerNames;
- (void)setScriptName:(id)arg1;
- (id)scriptName;
- (void)setID:(long long)arg1;
- (long long)ID;
- (void)setName:(id)arg1;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

