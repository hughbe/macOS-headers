//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSNumber, NSString;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDPCSKeySyncTracker : NSObject
{
    BOOL _manatee;
    NSString *_serviceName;
    NSObject<OS_dispatch_group> *_syncGroup;
    NSDate *_completionDate;
    NSNumber *_syncStatus;
    NSError *_syncError;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *syncError; // @synthesize syncError=_syncError;
@property(retain, nonatomic) NSNumber *syncStatus; // @synthesize syncStatus=_syncStatus;
@property(retain, nonatomic) NSDate *completionDate; // @synthesize completionDate=_completionDate;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *syncGroup; // @synthesize syncGroup=_syncGroup;
@property(nonatomic, getter=isManatee) BOOL manatee; // @synthesize manatee=_manatee;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)waitOnSyncWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long state;

@end

