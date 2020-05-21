//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import <ClassKit/CLSRelationable-Protocol.h>

@class CLSActivity, NSArray, NSString, NSURL;

@interface CLSContext : CLSObject <CLSRelationable>
{
    BOOL _active;
    NSURL *_universalLinkURL;
    NSString *_title;
    NSString *_topic;
    NSArray *_path;
    NSString *_currentActivityID;
    NSString *_contentStoreIdentifier;
    long long _displayOrder;
    NSString *_identifier;
    long long _type;
    NSString *_customTypeName;
    NSString *_summary;
    NSString *_stableObjectID;
    NSString *_storeTeamID;
    NSString *_storeIdentifier;
    long long _authorizationStatus;
}

+ (id)reservedContextTypes;
+ (id)allowedTopics;
+ (id)arrayOfStringClasses;
+ (id)stableObjectIDForIdentifierPath:(id)arg1;
+ (id)objectIDForIdentifierPath:(id)arg1;
+ (id)stableObjectIDPathFromIdentifierPath:(id)arg1;
+ (id)objectIDPathFromIdentifierPath:(id)arg1;
+ (id)validatedContextIdentifierPathFromPath:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (BOOL)conformsToProtocol:(id)arg1;
+ (id)relations;
- (void).cxx_destruct;
@property(nonatomic) long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *storeTeamID; // @synthesize storeTeamID=_storeTeamID;
@property(copy, nonatomic) NSArray *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *stableObjectID; // @synthesize stableObjectID=_stableObjectID;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *customTypeName; // @synthesize customTypeName=_customTypeName;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (long long)effectiveAuthorizationStatus;
- (void)setIdentifierPathAndGenerateObjectID:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *identifierPath;
- (void)resignActive;
- (void)becomeActive;
@property(readonly, nonatomic, getter=isActive) BOOL active;
- (id)thumbnailBlob;
@property(nonatomic) struct CGImage *thumbnail;
@property(copy, nonatomic) NSString *contentStoreIdentifier;
@property(nonatomic) long long displayOrder;
@property(retain, nonatomic) NSURL *universalLinkURL;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *currentActivityID;
@property(copy, nonatomic) NSString *topic;
- (void)descendantMatchingIdentifierPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeFromParent;
- (id)childContextWithIdentifier:(id)arg1;
- (void)addChildContext:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)validateObject:(id *)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (id)initWithInternalType:(long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (void)_setType:(long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (id)_init;
- (id)createNewActivity;
@property(readonly, nonatomic) CLSActivity *currentActivity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

