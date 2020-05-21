//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWDServerConnection : NSObject
{
    struct AWDServerConnection *fServerConnection;
}

- (void)flushToQueue:(struct dispatch_queue_s *)arg1 block:(CDUnknownBlockType)arg2;
- (unsigned long long)getAWDTimestamp;
- (void)registerComponentParametersChangeCallback:(CDUnknownBlockType)arg1;
- (id)getComponentConfigurationParameters;
- (BOOL)registerConfigChangeCallback:(CDUnknownBlockType)arg1;
- (BOOL)registerQueriableMetricCallback:(CDUnknownBlockType)arg1 forIdentifier:(unsigned int)arg2;
- (BOOL)registerQueriableMetric:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (BOOL)submitMetric:(id)arg1;
- (id)newMetricContainerWithIdentifier:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithComponentId:(unsigned int)arg1 andBlockOnConfiguration:(BOOL)arg2;
- (id)initWithComponentId:(unsigned int)arg1;

@end

