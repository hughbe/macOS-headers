//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWDServerConnection;
@protocol OS_dispatch_queue;

@interface IDSHashPersistenceAWDLogging : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    AWDServerConnection *_AWDServerConnection;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)duplicateMessageEncounted;
- (id)_metricContainerForMetricType:(unsigned int)arg1;
- (void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2;
- (BOOL)shouldSubmit;
- (void)dealloc;
- (id)init;

@end

