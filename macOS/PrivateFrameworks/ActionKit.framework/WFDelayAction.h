//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@class NSObject;
@protocol OS_dispatch_source;

@interface WFDelayAction : WFAction
{
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

