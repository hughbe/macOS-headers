//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BookCoverUtility/NSObject-Protocol.h>

@class CALayer, NSDictionary, NSString;
@protocol BCUOperation;

@protocol BCUBookCoverEffectsFilter <NSObject>
@property(readonly, nonatomic) NSString *identifier;
- (CALayer *)shadowLayerWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3 kind:(unsigned long long)arg4;
- (CALayer *)coverLayerWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3;
- (id <BCUOperation>)newOperationWithImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 contentsScale:(double)arg3 priority:(float)arg4 options:(NSDictionary *)arg5 completion:(void (^)(id <BCUOperation>, id <BCUPurgeableImage>, struct NSEdgeInsets, id))arg6;
@end

