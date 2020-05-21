//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ToneLibrary/NSCopying-Protocol.h>
#import <ToneLibrary/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface TLAlertConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isFrozen;
    BOOL _hasCustomRepeatingFlag;
    BOOL _hasCustomAudioVolume;
    BOOL _forPreview;
    BOOL _shouldRepeat;
    BOOL _shouldIgnoreRingerSwitch;
    BOOL _shouldForcePlayingAtUserSelectedAudioVolume;
    float _audioVolume;
    double _audioPlaybackInitiationDelay;
    double _audioVolumeRampingDuration;
    long long _type;
    NSString *_topic;
    NSString *_toneIdentifier;
    NSURL *_externalToneFileURL;
    unsigned long long _externalToneMediaLibraryItemIdentifier;
    NSDictionary *_externalVibrationPattern;
    NSURL *_externalVibrationPatternFileURL;
    NSString *_audioCategory;
    double _maximumDuration;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL shouldForcePlayingAtUserSelectedAudioVolume; // @synthesize shouldForcePlayingAtUserSelectedAudioVolume=_shouldForcePlayingAtUserSelectedAudioVolume;
@property(nonatomic) BOOL shouldIgnoreRingerSwitch; // @synthesize shouldIgnoreRingerSwitch=_shouldIgnoreRingerSwitch;
@property(nonatomic) BOOL shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(nonatomic) double maximumDuration; // @synthesize maximumDuration=_maximumDuration;
@property(nonatomic, getter=isForPreview) BOOL forPreview; // @synthesize forPreview=_forPreview;
@property(nonatomic) float audioVolume; // @synthesize audioVolume=_audioVolume;
@property(copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property(copy, nonatomic) NSURL *externalVibrationPatternFileURL; // @synthesize externalVibrationPatternFileURL=_externalVibrationPatternFileURL;
@property(copy, nonatomic) NSDictionary *externalVibrationPattern; // @synthesize externalVibrationPattern=_externalVibrationPattern;
@property(nonatomic) unsigned long long externalToneMediaLibraryItemIdentifier; // @synthesize externalToneMediaLibraryItemIdentifier=_externalToneMediaLibraryItemIdentifier;
@property(copy, nonatomic) NSURL *externalToneFileURL; // @synthesize externalToneFileURL=_externalToneFileURL;
@property(copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic, setter=_setAudioVolumeRampingDuration:) double _audioVolumeRampingDuration; // @synthesize _audioVolumeRampingDuration;
@property(nonatomic, setter=_setAudioPlaybackInitiationDelay:) double _audioPlaybackInitiationDelay; // @synthesize _audioPlaybackInitiationDelay;
@property(readonly, nonatomic) BOOL _hasCustomAudioVolume; // @synthesize _hasCustomAudioVolume;
- (void)_throwForFrozenInstance;
- (void)_freeze;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1;

@end

