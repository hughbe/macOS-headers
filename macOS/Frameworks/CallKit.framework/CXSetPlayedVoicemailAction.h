//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXVoicemailAction.h>

@interface CXSetPlayedVoicemailAction : CXVoicemailAction
{
    BOOL _played;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isPlayed) BOOL played; // @synthesize played=_played;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)customDescription;
- (id)initWithVoicemailUUID:(id)arg1 played:(BOOL)arg2;

@end

