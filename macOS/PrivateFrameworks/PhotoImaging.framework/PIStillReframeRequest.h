//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

@protocol NUScalePolicy;

@interface PIStillReframeRequest : NURenderRequest
{
    id <NUScalePolicy> _scalePolicy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
- (void)submit:(CDUnknownBlockType)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;

@end

