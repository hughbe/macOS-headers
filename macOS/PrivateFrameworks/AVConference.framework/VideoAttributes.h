//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/NSCoding-Protocol.h>
#import <AVConference/NSCopying-Protocol.h>

@interface VideoAttributes : NSObject <NSCopying, NSCoding>
{
    struct CGSize ratio;
    int orientation;
    int camera;
    BOOL cameraSwitching;
    struct CGRect contentsRect;
    BOOL videoSourceScreen;
    BOOL videoMirrored;
}

+ (id)cameraUIDForVideoAttributeCamera:(int)arg1;
+ (int)videoAttributeCameraForCameraUID:(id)arg1;
+ (id)videoAttributesWithVideoAttributes:(id)arg1;
@property(nonatomic) BOOL videoMirrored; // @synthesize videoMirrored;
@property(nonatomic) BOOL videoSourceScreen; // @synthesize videoSourceScreen;
@property(nonatomic) struct CGRect contentsRect; // @synthesize contentsRect;
@property(nonatomic) BOOL cameraSwitching; // @synthesize cameraSwitching;
@property(nonatomic) int camera; // @synthesize camera;
@property(nonatomic) int orientation; // @synthesize orientation;
@property(nonatomic) struct CGSize ratio; // @synthesize ratio;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeFromNSDictionary:(id)arg1;
- (id)copyEncodedDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqualToVideoAttributes:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(struct CGSize)arg2 contentsRect:(struct CGRect)arg3;
- (id)init;

@end

