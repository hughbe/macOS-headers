//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassKit/NSCopying-Protocol.h>
#import <ClassKit/NSSecureCoding-Protocol.h>

@class CLSPerson, NSDictionary, NSString;

@interface CLSCurrentUser : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _hasEDUAccount;
    int _devMode;
    CLSPerson *_person;
    NSString *_personaUniqueString;
    NSString *_organizationName;
    unsigned long long _roles;
    NSDictionary *_locationIDsByAXMRoleType;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)userRolesFromUserLocationIDsByAXMRoleType:(id)arg1;
+ (id)magicValue;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *locationIDsByAXMRoleType; // @synthesize locationIDsByAXMRoleType=_locationIDsByAXMRoleType;
@property(nonatomic) unsigned long long roles; // @synthesize roles=_roles;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(nonatomic) BOOL hasEDUAccount; // @synthesize hasEDUAccount=_hasEDUAccount;
@property(copy, nonatomic) NSString *personaUniqueString; // @synthesize personaUniqueString=_personaUniqueString;
@property(retain, nonatomic) CLSPerson *person; // @synthesize person=_person;
@property(nonatomic) int devMode; // @synthesize devMode=_devMode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) BOOL isStudent;
@property(readonly, nonatomic) BOOL isInstructor;
@property(readonly, nonatomic) BOOL isAdministrator;
- (BOOL)hasRole:(unsigned long long)arg1;
- (BOOL)_hasRole:(unsigned long long)arg1;
- (unsigned long long)_useRoles;
- (id)_init;

@end

