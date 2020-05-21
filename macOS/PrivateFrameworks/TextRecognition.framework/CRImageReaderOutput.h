//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextRecognition/NSCopying-Protocol.h>
#import <TextRecognition/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CRImageReaderOutput : NSObject <NSCopying, NSSecureCoding>
{
    int _confidence;
    float _baselineAngle;
    NSString *_type;
    NSString *_stringValue;
    NSArray *_candidates;
    NSArray *_components;
    struct CGPoint _topLeft;
    struct CGPoint _topRight;
    struct CGPoint _bottomRight;
    struct CGPoint _bottomLeft;
    struct CGRect _boundingBox;
}

+ (BOOL)supportsSecureCoding;
+ (int)confidenceLevelForConfidenceScore:(double)arg1 options:(id)arg2;
+ (id)outputWithType:(id)arg1 textFeature:(id)arg2 options:(id)arg3;
- (void).cxx_destruct;
@property float baselineAngle; // @synthesize baselineAngle=_baselineAngle;
@property(readonly) NSArray *components; // @synthesize components=_components;
@property(readonly) NSArray *candidates; // @synthesize candidates=_candidates;
@property(readonly) struct CGPoint bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(readonly) struct CGPoint bottomRight; // @synthesize bottomRight=_bottomRight;
@property(readonly) struct CGPoint topRight; // @synthesize topRight=_topRight;
@property(readonly) struct CGPoint topLeft; // @synthesize topLeft=_topLeft;
@property(readonly) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property int confidence; // @synthesize confidence=_confidence;
@property(retain) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly) NSString *type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGPoint)_rotatePointIfNeccessary:(struct CGPoint)arg1 anchor:(struct CGPoint)arg2 angle:(double)arg3;
- (id)cornersForCharacterRange:(struct _NSRange)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 textFeature:(id)arg2 withCandidates:(BOOL)arg3 options:(id)arg4;
- (id)initWithType:(id)arg1 textFeature:(id)arg2 options:(id)arg3;

@end

