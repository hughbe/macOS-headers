//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNVGGCheeringModel8Output : NSObject <MLFeatureProvider>
{
    MLMultiArray *_output1;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MLMultiArray *output1; // @synthesize output1=_output1;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithOutput1:(id)arg1;

@end

