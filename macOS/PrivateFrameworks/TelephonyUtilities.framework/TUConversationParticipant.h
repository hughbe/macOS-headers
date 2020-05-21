//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString, TUHandle;

@interface TUConversationParticipant : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _muted;
    BOOL _audioEnabled;
    BOOL _videoEnabled;
    BOOL _momentsAvailable;
    unsigned long long _identifier;
    TUHandle *_handle;
    long long _streamToken;
    long long _audioPriority;
    long long _videoPriority;
    NSString *_avcIdentifier;
    NSString *_activeIDSDestination;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *activeIDSDestination; // @synthesize activeIDSDestination=_activeIDSDestination;
@property(copy, nonatomic) NSString *avcIdentifier; // @synthesize avcIdentifier=_avcIdentifier;
@property(nonatomic) long long videoPriority; // @synthesize videoPriority=_videoPriority;
@property(nonatomic) long long audioPriority; // @synthesize audioPriority=_audioPriority;
@property(nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
@property(nonatomic, getter=isMomentsAvailable) BOOL momentsAvailable; // @synthesize momentsAvailable=_momentsAvailable;
@property(nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic, getter=isAudioEnabled) BOOL audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;
@property(readonly, copy, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToParticipant:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(unsigned long long)arg1 handle:(id)arg2;

@end

