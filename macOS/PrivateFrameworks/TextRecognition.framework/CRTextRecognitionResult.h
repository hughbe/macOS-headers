//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CRTextRecognitionResult : NSObject
{
    NSArray *_candidates;
    struct CGPoint _topLeft;
    struct CGPoint _topRight;
    struct CGPoint _bottomRight;
    struct CGPoint _bottomLeft;
    struct CGRect _boundingBox;
}

- (void).cxx_destruct;
@property(readonly) struct CGPoint bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(readonly) struct CGPoint bottomRight; // @synthesize bottomRight=_bottomRight;
@property(readonly) struct CGPoint topRight; // @synthesize topRight=_topRight;
@property(readonly) struct CGPoint topLeft; // @synthesize topLeft=_topLeft;
@property(readonly) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(readonly) NSArray *candidates; // @synthesize candidates=_candidates;
- (id)initWithTextFeature:(id)arg1 options:(id)arg2;

@end

