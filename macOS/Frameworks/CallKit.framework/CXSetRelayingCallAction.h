//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXCallAction.h>

@interface CXSetRelayingCallAction : CXCallAction
{
    BOOL _relaying;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isRelaying) BOOL relaying; // @synthesize relaying=_relaying;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)customDescription;
- (id)initWithCallUUID:(id)arg1 relaying:(BOOL)arg2;

@end

