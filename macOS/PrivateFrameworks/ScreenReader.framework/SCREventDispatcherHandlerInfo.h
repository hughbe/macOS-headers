//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCREvent, SCROutputRequest;

__attribute__((visibility("hidden")))
@interface SCREventDispatcherHandlerInfo : NSObject
{
    BOOL _handled;
    SCREvent *_event;
    SCROutputRequest *_request;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL handled; // @synthesize handled=_handled;
@property(retain, nonatomic) SCROutputRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) SCREvent *event; // @synthesize event=_event;
- (id)initWithEvent:(id)arg1 outputRequest:(id)arg2;
- (id)init;

@end

