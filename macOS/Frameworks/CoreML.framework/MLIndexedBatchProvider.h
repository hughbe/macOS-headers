//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLBatchProvider-Protocol.h>

@class NSArray;
@protocol MLBatchProvider;

__attribute__((visibility("hidden")))
@interface MLIndexedBatchProvider : NSObject <MLBatchProvider>
{
    id <MLBatchProvider> _fullBatch;
    NSArray *_indices;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *indices; // @synthesize indices=_indices;
@property(retain, nonatomic) id <MLBatchProvider> fullBatch; // @synthesize fullBatch=_fullBatch;
- (id)featuresAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long count;
- (id)initWithBatch:(id)arg1 indices:(id)arg2 error:(id *)arg3;

@end

