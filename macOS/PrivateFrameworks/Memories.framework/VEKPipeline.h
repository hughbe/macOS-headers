//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, VEKResult;

@interface VEKPipeline : NSObject
{
    NSArray *_stages;
    VEKResult *_initialResult;
    CDUnknownBlockType _progressBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) VEKResult *initialResult; // @synthesize initialResult=_initialResult;
@property(copy) NSArray *stages; // @synthesize stages=_stages;
- (id)runPipeline;
- (void)runPipelineWithOptions:(long long)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithStages:(id)arg1;

@end

