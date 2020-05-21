//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SANPSeekToPlaybackPosition : SADomainCommand
{
}

+ (id)seekToPlaybackPositionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)seekToPlaybackPosition;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSNumber *positionInMilliseconds;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

