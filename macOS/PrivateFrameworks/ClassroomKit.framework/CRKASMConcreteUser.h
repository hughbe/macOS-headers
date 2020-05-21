//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKASMUser-Protocol.h>

@class NSString;
@protocol CRKASMNameComponents, CRKASMOrganization, CRKClassKitPerson;

@interface CRKASMConcreteUser : NSObject <CRKASMUser>
{
    NSString *_identifier;
    NSObject<CRKASMNameComponents> *_nameComponents;
    NSObject<CRKASMOrganization> *_organization;
    id <CRKClassKitPerson> _backingPerson;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CRKClassKitPerson> backingPerson; // @synthesize backingPerson=_backingPerson;
@property(readonly, nonatomic) NSObject<CRKASMOrganization> *organization; // @synthesize organization=_organization;
@property(readonly, nonatomic) NSObject<CRKASMNameComponents> *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)updateWithPerson:(id)arg1;
- (id)initWithPerson:(id)arg1;

@end

