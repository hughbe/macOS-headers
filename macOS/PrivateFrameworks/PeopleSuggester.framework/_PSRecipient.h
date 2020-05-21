//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class CNContact, NSString;

@interface _PSRecipient : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_handle;
    NSString *_displayName;
    CNContact *_contact;
    NSString *_senderHandle;
}

+ (BOOL)supportsSecureCoding;
+ (id)recipientForINPerson:(id)arg1 contactResolver:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *senderHandle; // @synthesize senderHandle=_senderHandle;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 senderHandle:(id)arg2 handle:(id)arg3 displayName:(id)arg4 contact:(id)arg5;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 displayName:(id)arg3 contact:(id)arg4;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 contact:(id)arg3;

@end

