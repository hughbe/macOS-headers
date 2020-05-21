//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject
{
    GEOMapRequestManager *_requestManager;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _cancellationHandler;
    BOOL _isFinished;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(copy, nonatomic) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_finishAndCallHandler:(CDUnknownBlockType)arg1;
- (void)complete;
- (void)cancel;
- (void)dealloc;
- (id)initWithManager:(id)arg1;

@end

