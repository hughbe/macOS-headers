//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString, SASource;

@interface SAABContactGroup : SADomainObject
{
}

+ (id)contactGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)contactGroup;
@property(retain, nonatomic) SASource *groupSource;
@property(copy, nonatomic) NSString *groupName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

