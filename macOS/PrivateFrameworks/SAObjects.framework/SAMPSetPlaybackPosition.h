//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@interface SAMPSetPlaybackPosition : SADomainCommand
{
}

+ (id)setPlaybackPositionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setPlaybackPosition;
- (BOOL)requiresResponse;
@property(nonatomic) int position;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

