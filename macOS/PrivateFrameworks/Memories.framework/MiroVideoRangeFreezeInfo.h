//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Memories/MiroFreezeInfo.h>

__attribute__((visibility("hidden")))
@interface MiroVideoRangeFreezeInfo : MiroFreezeInfo
{
    BOOL _added;
    BOOL _removed;
    BOOL _used;
    BOOL _trimmed;
    BOOL _userModified;
    float _normalGain;
    float _dimmedGain;
    unsigned long long _mute;
    double _start;
    double _duration;
}

@property(nonatomic) BOOL userModified; // @synthesize userModified=_userModified;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double start; // @synthesize start=_start;
@property(nonatomic) float dimmedGain; // @synthesize dimmedGain=_dimmedGain;
@property(nonatomic) float normalGain; // @synthesize normalGain=_normalGain;
@property(nonatomic) unsigned long long mute; // @synthesize mute=_mute;
@property(nonatomic) BOOL trimmed; // @synthesize trimmed=_trimmed;
@property(nonatomic) BOOL used; // @synthesize used=_used;
@property(nonatomic) BOOL removed; // @synthesize removed=_removed;
@property(nonatomic) BOOL added; // @synthesize added=_added;
- (id)description;
@property(readonly, nonatomic) float gain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataRepresentation;
- (id)initWithData:(id)arg1;
- (id)init;

@end

