//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCVideoRuleCollections.h>

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsCamera : VCVideoRuleCollections
{
    BOOL _encodeHighDef;
    BOOL _decodeHighDef;
}

+ (id)sharedInstance;
- (struct _VCBitrateConfiguration *)bitrateConfiguration;
- (void)resetEncodingRulesForCameraIsHD:(BOOL)arg1 isWVGA:(BOOL)arg2;
- (BOOL)getBestPreviewFrameWidth:(int *)arg1 frameHeight:(int *)arg2 frameRate:(float *)arg3;
- (BOOL)useSoftFramerateSwitching;
- (BOOL)isHiDefCapable;
- (id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2;
- (id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2 payload:(int)arg3;
- (BOOL)setupH264CellularRules;
- (double)preferredAspectRatio;

@end

