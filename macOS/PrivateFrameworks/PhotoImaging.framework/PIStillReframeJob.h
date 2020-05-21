//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class PIReframeResult, PIStillReframeRequest;

@interface PIStillReframeJob : NURenderJob
{
    PIReframeResult *_reframeResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PIReframeResult *reframeResult; // @synthesize reframeResult=_reframeResult;
- (void)cleanUp;
- (id)result;
- (BOOL)render:(out id *)arg1;
- (id)cacheKey;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)scalePolicy;
@property(readonly, nonatomic) PIStillReframeRequest *stillReframeRequest;
- (id)initWithRequest:(id)arg1;
- (id)initWithStillReframeRequest:(id)arg1;

@end

