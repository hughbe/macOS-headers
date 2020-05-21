//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalAddressWrapper.h>

@class NSNumber, NSString;

@interface CalAddressPreviousWrapper : CalAddressWrapper
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_displayedName;
    NSString *_type;
    NSString *_loginName;
    NSNumber *_recentContactIDNumber;
}

- (void).cxx_destruct;
- (id)completionForSubstring:(id)arg1;
- (id)loginName;
- (BOOL)isResource;
- (BOOL)isLocation;
- (BOOL)isPerson;
- (BOOL)fromPrevious;
- (id)type;
- (id)lastName;
- (id)firstName;
- (id)displayedName;
- (id)recentContactIDNumber;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 displayedName:(id)arg3 address:(id)arg4 loginName:(id)arg5 type:(id)arg6 recentContactIDNumber:(id)arg7;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 displayedName:(id)arg3 address:(id)arg4 loginName:(id)arg5 type:(id)arg6;

@end

