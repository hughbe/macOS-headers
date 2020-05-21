//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>
#import <CoreHandwriting/NSMutableCopying-Protocol.h>

@class NSDictionary, NSMutableDictionary;
@protocol CHStrokeIdentifier;

@interface CHNonTextCandidateStroke : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *_supportByStrokeIdentifier;
    double _support;
    id <CHStrokeIdentifier> _strokeIdentifier;
    long long _classificationAsNonText;
    long long _substrokesCount;
    double _lineError;
    double _containerScore;
    double _lineOrientationAngle;
    double _boundsDiagonal;
    struct CGRect _bounds;
    struct CGRect _enlargedBounds;
    struct CGRect _rotatedBounds;
}

@property(readonly, nonatomic) struct CGRect rotatedBounds; // @synthesize rotatedBounds=_rotatedBounds;
@property(readonly, nonatomic) struct CGRect enlargedBounds; // @synthesize enlargedBounds=_enlargedBounds;
@property(readonly, nonatomic) double boundsDiagonal; // @synthesize boundsDiagonal=_boundsDiagonal;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) double lineOrientationAngle; // @synthesize lineOrientationAngle=_lineOrientationAngle;
@property(readonly, nonatomic) double containerScore; // @synthesize containerScore=_containerScore;
@property(readonly, nonatomic) double lineError; // @synthesize lineError=_lineError;
@property(readonly, retain, nonatomic) NSDictionary *supportByStrokeIdentifier; // @synthesize supportByStrokeIdentifier=_supportByStrokeIdentifier;
@property(readonly, nonatomic) long long substrokesCount; // @synthesize substrokesCount=_substrokesCount;
@property(readonly, nonatomic) long long classificationAsNonText; // @synthesize classificationAsNonText=_classificationAsNonText;
@property(readonly, nonatomic) double support; // @synthesize support=_support;
@property(readonly, retain, nonatomic) id <CHStrokeIdentifier> strokeIdentifier; // @synthesize strokeIdentifier=_strokeIdentifier;
@property(readonly, nonatomic) long long effectiveClassification;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithStrokeIdentifier:(id)arg1 substrokesCount:(long long)arg2 classificationAsNonText:(long long)arg3 lineOrientation:(double)arg4 lineError:(double)arg5 containerScore:(double)arg6 bounds:(struct CGRect)arg7 boundsDiagonal:(double)arg8 enlargedBounds:(struct CGRect)arg9 rotatedBounds:(struct CGRect)arg10 supportByStrokeIdentifier:(id)arg11 support:(double)arg12;
- (id)initWithStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 classificationAsNonText:(long long)arg3 lineOrientation:(double)arg4 lineError:(double)arg5 containerScore:(double)arg6;

@end

