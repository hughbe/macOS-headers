//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSMutableCopying-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface ASDLogConfig : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_category;
    unsigned long long _environment;
    NSString *_subsystem;
    NSObject<OS_os_log> *_backingOSLogObject;
    NSObject<OS_dispatch_queue> *_propertyAccessQueue;
}

+ (BOOL)_deviceIsRunningSeedBuild;
+ (BOOL)_deviceIsRunningInternalOrSeedBuild;
+ (BOOL)_deviceIsRunningInternalBuild;
+ (BOOL)_debugLogsEnabled:(id)arg1;
+ (id)sharedFrameworkConfig;
+ (id)sharedDaemonConfigOversize;
+ (id)sharedDaemonConfig;
+ (id)sharedConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue; // @synthesize propertyAccessQueue=_propertyAccessQueue;
@property(retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject; // @synthesize backingOSLogObject=_backingOSLogObject;
@property(copy, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
@property(nonatomic) unsigned long long environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) BOOL shouldLog;
@property(readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;
@property(readonly, nonatomic) BOOL debugLogsEnabled;
- (id)init;

@end

