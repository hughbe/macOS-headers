//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPQueryResultsQueue;

@interface SPQueryJob : NSObject
{
    struct __SIJobRef *_siJob;
    NSString *_dataclass;
    SPQueryResultsQueue *_resultsQueue;
    CDUnknownBlockType _resultsHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
@property(nonatomic) __weak SPQueryResultsQueue *resultsQueue; // @synthesize resultsQueue=_resultsQueue;
@property(retain, nonatomic) NSString *dataclass; // @synthesize dataclass=_dataclass;
@property(nonatomic) struct __SIJobRef *siJob; // @synthesize siJob=_siJob;
- (void)cancel;
- (void)dealloc;
- (id)initWithSIJob:(struct __SIJobRef *)arg1 dataclass:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4;

@end

