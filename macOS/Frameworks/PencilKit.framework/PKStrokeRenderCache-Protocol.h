//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class NSMutableSet;

@protocol PKStrokeRenderCache <NSObject>
- (BOOL)lockPurgeableResourcesAddToSet:(NSMutableSet *)arg1;
- (BOOL)needsCompute;
- (unsigned long long)cacheCost;
- (unsigned long long)inkVersion;
@end

