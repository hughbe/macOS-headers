//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUserDefaults;

@interface SIUUserDefaults : NSObject
{
    BOOL _isSIUApplication;
    NSUserDefaults *_defaults;
}

+ (id)userDefaults;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
- (void)registerDefaults;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (long long)logLevel;
- (BOOL)liveUpdateInstallerQuery;
- (BOOL)internalLoggingEnabled;
- (BOOL)synchronize;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)init;

@end

