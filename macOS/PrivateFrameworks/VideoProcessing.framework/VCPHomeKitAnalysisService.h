//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPHomeKitAnalysisService : NSObject
{
}

+ (id)analysisService;
- (void)cancelAllRequests;
- (void)cancelRequest:(int)arg1;
- (int)requestAnalysis:(unsigned long long)arg1 ofAssetSurface:(id)arg2 withProperties:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;
- (int)requestAnalysis:(unsigned long long)arg1 ofAssetData:(id)arg2 withProperties:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;
- (id)init;

@end

