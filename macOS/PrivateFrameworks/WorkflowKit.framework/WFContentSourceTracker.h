//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WFContentSourceTracker : NSObject
{
    NSMutableDictionary *_contentSources;
    NSObject<OS_dispatch_queue> *_trackingContentSourceQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *trackingContentSourceQueue; // @synthesize trackingContentSourceQueue=_trackingContentSourceQueue;
@property(readonly, nonatomic) NSMutableDictionary *contentSources; // @synthesize contentSources=_contentSources;
- (id)trackedContentSource;
- (id)contentSourceForParameter:(id)arg1;
- (void)addContentSource:(id)arg1 forParameter:(id)arg2;
- (id)init;

@end

