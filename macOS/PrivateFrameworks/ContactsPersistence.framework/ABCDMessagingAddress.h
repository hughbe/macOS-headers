//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsPersistence/ABCDOwnedObject.h>

@class ABCDService, NSArray, NSString;

@interface ABCDMessagingAddress : ABCDOwnedObject
{
}

+ (id)keyPathsForValuesAffectingBundleIdentifiers;
@property(copy, nonatomic) NSArray *bundleIdentifiers;
@property(retain, nonatomic) NSString *associatedServiceName;

// Remaining properties
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(copy) NSString *bundleIdentifiersString; // @dynamic bundleIdentifiersString;
@property(retain, nonatomic) ABCDService *service; // @dynamic service;
@property(copy, nonatomic) NSString *teamIdentifier; // @dynamic teamIdentifier;
@property(retain, nonatomic) NSString *userIdentifier; // @dynamic userIdentifier;

@end

