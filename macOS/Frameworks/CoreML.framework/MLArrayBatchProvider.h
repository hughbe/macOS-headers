//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLBatchProvider-Protocol.h>

@class NSArray;

@interface MLArrayBatchProvider : NSObject <MLBatchProvider>
{
    NSArray *_array;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *array; // @synthesize array=_array;
- (id)featuresAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long count;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithFeatureProviderArray:(id)arg1;

@end

