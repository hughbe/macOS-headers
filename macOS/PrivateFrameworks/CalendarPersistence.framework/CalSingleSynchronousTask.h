//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface CalSingleSynchronousTask : NSObject
{
    BOOL _completed;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL completed; // @synthesize completed=_completed;
- (void)executeTask:(id)arg1 usingTaskManager:(id)arg2;
- (void)_setCompletionBlockOnTask:(id)arg1;

@end

