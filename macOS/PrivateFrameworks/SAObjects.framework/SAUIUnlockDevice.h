//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUIUnlockDevice : SABaseClientBoundCommand
{
}

+ (id)unlockDeviceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)unlockDevice;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *successCommands;
@property(copy, nonatomic) NSArray *failureCommands;
@property(copy, nonatomic) NSArray *cancellationCommands;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

