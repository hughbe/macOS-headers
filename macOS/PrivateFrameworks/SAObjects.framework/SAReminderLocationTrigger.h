//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAReminderTrigger.h>

@class NSString, NSURL, SALocation;

@interface SAReminderLocationTrigger : SAReminderTrigger
{
}

+ (id)locationTriggerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationTrigger;
@property(copy, nonatomic) NSString *timing;
@property(copy, nonatomic) NSString *mobileSpace;
@property(retain, nonatomic) SALocation *location;
@property(copy, nonatomic) NSString *internalGUID;
@property(copy, nonatomic) NSURL *contactIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

