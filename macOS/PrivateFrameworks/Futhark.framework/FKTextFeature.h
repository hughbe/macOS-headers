//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FKTextFeature : NSObject
{
    CDUnion_a5814135 _backingIndex;
    struct FKSession *_session;
    int _scale;
    float _confidence;
    NSArray *_candidates;
    long long _featureID;
    NSArray *_corners;
    long long _type;
    NSString *_text;
    NSArray *_subFeatures;
    struct CGRect _boundingBox;
}

+ (id)featureFromSequenceIndex:(int)arg1 session:(struct FKSession *)arg2 scaling:(CDStruct_67c9bb48 *)arg3 createConcompFeatures:(BOOL)arg4 createDiacriticFeatures:(BOOL)arg5 featureID:(long long *)arg6;
+ (id)featureFromConcompIndex:(int)arg1 session:(struct FKSession *)arg2 scaling:(CDStruct_67c9bb48 *)arg3 type:(long long)arg4 createDiacriticFeatures:(BOOL)arg5 featureID:(long long *)arg6;
@property(retain, nonatomic) NSArray *subFeatures; // @synthesize subFeatures=_subFeatures;
@property float confidence; // @synthesize confidence=_confidence;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, retain, nonatomic) NSArray *corners; // @synthesize corners=_corners;
@property(readonly, nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(readonly, nonatomic) long long featureID; // @synthesize featureID=_featureID;
@property(readonly) NSArray *candidates; // @synthesize candidates=_candidates;
- (void)dealloc;
- (id)initWithType:(long long)arg1 boundingBox:(struct CGRect *)arg2 corners:(id)arg3 featureID:(long long)arg4 session:(struct FKSession *)arg5 backingIndex:(CDUnion_a5814135)arg6 scale:(int)arg7;

@end

