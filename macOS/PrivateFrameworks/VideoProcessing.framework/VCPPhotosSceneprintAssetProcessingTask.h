//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoProcessing/VCPMADTaskProtocol-Protocol.h>

@class NSArray;

@interface VCPPhotosSceneprintAssetProcessingTask : NSObject <VCPMADTaskProtocol>
{
    CDUnknownBlockType _completionHandler;
    NSArray *_assets;
    struct atomic<bool> _started;
    struct atomic<bool> _cancel;
}

+ (id)taskWithAssets:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (int)run;
- (BOOL)run:(id *)arg1;
- (void)cancel;
- (float)resourceRequirement;
- (void)dealloc;
- (id)initWithAssets:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;

@end

