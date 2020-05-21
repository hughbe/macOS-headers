//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MNTracePlayerTimelineStream : NSObject
{
    NSArray *_data;
    unsigned long long _nextIndex;
    double _nextUpdatePosition;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double nextUpdatePosition; // @synthesize nextUpdatePosition=_nextUpdatePosition;
@property(readonly, nonatomic) unsigned long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)jumpToPosition:(double)arg1;
- (void)triggerNextUpdate;
- (id)initWithData:(id)arg1;

@end

