//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerFaceObservationGrouping : NSObject
{
    NSMutableDictionary *_observationGroupsToRequestMapping;
}

- (void).cxx_destruct;
- (id)requestsForGroup:(id)arg1;
- (id)addToGroupingsRequest:(id)arg1 withFaceObservations:(id)arg2;

@end

