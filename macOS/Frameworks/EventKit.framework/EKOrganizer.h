//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKParticipant.h>

@interface EKOrganizer : EKParticipant
{
    BOOL _isCurrentUserForSharing;
}

+ (BOOL)_object:(id)arg1 equalsObject:(id)arg2 forKeys:(id)arg3 compareImmutableKeys:(BOOL)arg4 ignoringProperties:(id)arg5;
+ (Class)frozenClass;
+ (id)organizerWithName:(id)arg1 url:(id)arg2 email:(id)arg3 phoneNumber:(id)arg4 encodedLikenessData:(id)arg5 isCurrentUserForScheduling:(BOOL)arg6 isCurrentUserForSharing:(BOOL)arg7;
+ (id)organizerWithName:(id)arg1 url:(id)arg2;
- (BOOL)isCurrentUserForSharing;
- (id)initWithName:(id)arg1 url:(id)arg2 email:(id)arg3 phoneNumber:(id)arg4 encodedLikenessData:(id)arg5 isCurrentUserForScheduling:(BOOL)arg6 isCurrentUserForSharing:(BOOL)arg7;
- (id)lastName;
- (id)firstName;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 address:(id)arg4 isCurrentUser:(BOOL)arg5;

@end

