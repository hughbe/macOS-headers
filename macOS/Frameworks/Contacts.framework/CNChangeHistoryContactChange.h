//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class CNChangeHistoryAnchor, CNContact, NSArray, NSNumber, NSString;

@interface CNChangeHistoryContactChange : NSObject <NSSecureCoding>
{
    NSString *_contactIdentifier;
    long long _changeType;
    CNContact *_contact;
    NSArray *_linkedContactIdentifiers;
    CNChangeHistoryAnchor *_changeAnchor;
    NSNumber *_changeID;
    NSString *_externalID;
    NSNumber *_imagesChanged;
    NSString *_externalURI;
    NSString *_externalModificationTag;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *externalModificationTag; // @synthesize externalModificationTag=_externalModificationTag;
@property(retain, nonatomic) NSString *externalURI; // @synthesize externalURI=_externalURI;
@property(retain, nonatomic) NSNumber *imagesChanged; // @synthesize imagesChanged=_imagesChanged;
@property(retain, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(retain, nonatomic) NSNumber *changeID; // @synthesize changeID=_changeID;
@property(retain, nonatomic) CNChangeHistoryAnchor *changeAnchor; // @synthesize changeAnchor=_changeAnchor;
@property(copy, nonatomic) NSArray *linkedContactIdentifiers; // @synthesize linkedContactIdentifiers=_linkedContactIdentifiers;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 externalID:(id)arg5 imagesChanged:(id)arg6;
- (id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4;

@end

