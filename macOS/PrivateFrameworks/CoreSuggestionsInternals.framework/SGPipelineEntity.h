//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGEntity.h>

@class INInteraction, NSArray, NSData, NSIndexSet, NSMutableArray, NSMutableDictionary, NSSet, NSString, SGMessage;

@interface SGPipelineEntity : SGEntity
{
    NSMutableArray *_enrichments;
    NSMutableArray *_externalEnrichments;
    NSMutableArray *_taggedCharacterRanges;
    NSString *_plainTextContentCache;
    BOOL _plainTextContentCacheGenerated;
    struct _opaque_pthread_mutex_t _plainTextContentCacheLock;
    BOOL _fullDownloadRequested;
    CDStruct_b2968299 _inhumanFeatures;
    struct _opaque_pthread_mutex_t _dissectorLock;
    BOOL _contactInformationExtracted;
    BOOL _pendingGeocode;
    NSIndexSet *_plainTextQuotedRegions;
    NSIndexSet *_plainTextTabularRegions;
    NSIndexSet *_plainTextSigHtmlBlockRegions;
    struct __DDResult *_dataDetectorsSignature;
    NSArray *_instantMessageAddresses;
    NSArray *_plainTextLines;
    unsigned long long *_htmlOffsets;
    NSArray *_plainTextDetectedData;
    NSMutableDictionary *_emailToCanonicalEmailCache;
    SGMessage *_message;
    NSData *_contentHash;
    INInteraction *_interaction;
    NSArray *_invalidatedMessageIdentifiers;
    NSArray *_authorMatchingContacts;
    NSSet *_authorMatchingContactsKeys;
    struct _NSRange _plainTextSigRange;
}

+ (id)socialProfile:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange)arg6 extractionInfo:(id)arg7;
+ (id)instantMessageAddress:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange)arg6 extractionInfo:(id)arg7;
+ (id)birthday:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange)arg6 extractionInfo:(id)arg7;
+ (id)emailAddress:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange)arg6 extractionInfo:(id)arg7;
+ (id)phoneNumber:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange)arg6 extractionInfo:(id)arg7;
+ (id)address:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange)arg6 extractionInfo:(id)arg7;
+ (id)fromCloudKitRecord:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *authorMatchingContactsKeys; // @synthesize authorMatchingContactsKeys=_authorMatchingContactsKeys;
@property(retain, nonatomic) NSArray *authorMatchingContacts; // @synthesize authorMatchingContacts=_authorMatchingContacts;
@property(retain) NSArray *invalidatedMessageIdentifiers; // @synthesize invalidatedMessageIdentifiers=_invalidatedMessageIdentifiers;
@property(readonly, nonatomic) INInteraction *interaction; // @synthesize interaction=_interaction;
@property(nonatomic) BOOL pendingGeocode; // @synthesize pendingGeocode=_pendingGeocode;
@property(retain, nonatomic) NSData *contentHash; // @synthesize contentHash=_contentHash;
@property(readonly, nonatomic) SGMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSMutableDictionary *emailToCanonicalEmailCache; // @synthesize emailToCanonicalEmailCache=_emailToCanonicalEmailCache;
@property(retain, nonatomic) NSArray *taggedCharacterRanges; // @synthesize taggedCharacterRanges=_taggedCharacterRanges;
@property(retain, nonatomic) NSArray *plainTextDetectedData; // @synthesize plainTextDetectedData=_plainTextDetectedData;
@property(readonly, nonatomic) unsigned long long *htmlOffsets; // @synthesize htmlOffsets=_htmlOffsets;
@property(readonly, nonatomic) NSArray *plainTextLines; // @synthesize plainTextLines=_plainTextLines;
@property(readonly, nonatomic) NSArray *instantMessageAddresses; // @synthesize instantMessageAddresses=_instantMessageAddresses;
@property(nonatomic) BOOL contactInformationExtracted; // @synthesize contactInformationExtracted=_contactInformationExtracted;
@property(nonatomic) struct __DDResult *dataDetectorsSignature; // @synthesize dataDetectorsSignature=_dataDetectorsSignature;
@property(nonatomic) struct _NSRange plainTextSigRange; // @synthesize plainTextSigRange=_plainTextSigRange;
@property(retain, nonatomic) NSIndexSet *plainTextSigHtmlBlockRegions; // @synthesize plainTextSigHtmlBlockRegions=_plainTextSigHtmlBlockRegions;
@property(retain, nonatomic) NSIndexSet *plainTextTabularRegions; // @synthesize plainTextTabularRegions=_plainTextTabularRegions;
@property(retain, nonatomic) NSIndexSet *plainTextQuotedRegions; // @synthesize plainTextQuotedRegions=_plainTextQuotedRegions;
@property(retain, nonatomic) NSArray *externalEnrichments; // @synthesize externalEnrichments=_externalEnrichments;
@property(retain, nonatomic) NSArray *enrichments; // @synthesize enrichments=_enrichments;
- (void)runWithDissectorLock:(CDUnknownBlockType)arg1;
- (void)releaseDissectorLock;
- (void)acquireDissectorLock;
- (unsigned long long)eventEnrichmentsCount;
- (BOOL)hasEventEnrichment;
@property(readonly, getter=hasFullDownloadBeenRequested) BOOL fullDownloadRequested;
- (void)requestFullDownload;
- (void)chopOffContentAfterIndex:(unsigned long long)arg1;
- (void)chopOffContentBeforeIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) CDStruct_b2968299 *inhumanFeatures;
@property(readonly, nonatomic) NSString *plainTextContent;
- (void)enumeratePlainTextLines:(CDUnknownBlockType)arg1;
- (void)setPlainTextLines:(id)arg1 utf8Offsets:(id)arg2 isAscii:(BOOL)arg3;
- (void)setPlainTextLines:(id)arg1;
- (void)enumeratePeople:(CDUnknownBlockType)arg1;
- (BOOL)isPerson;
- (BOOL)isEvent;
@property(readonly, nonatomic) NSArray *emailAddresses;
@property(readonly, nonatomic) NSArray *addresses;
@property(readonly, nonatomic) NSArray *phoneNumbers;
- (id)contactDetailsWithType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *authorEmail;
- (void)setAuthor:(id)arg1;
- (void)addDetectedSocialProfile:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange)arg4 extractionInfo:(id)arg5;
- (void)addSocialProfileEnrichment:(id)arg1;
- (void)addDetectedInstantMessageAddress:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange)arg4 extractionInfo:(id)arg5;
- (void)addInstantMessageAddressEnrichment:(id)arg1;
- (void)addCuratedBirthday:(id)arg1;
- (void)addDetectedBirthday:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange)arg4 extractionInfo:(id)arg5;
- (void)addUnrecognizedLookupEmailAddress:(id)arg1;
- (void)addCuratedEmailAddress:(id)arg1;
- (void)addDetectedEmailAddress:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange)arg4 extractionInfo:(id)arg5;
- (void)addBirthdayEnrichment:(id)arg1;
- (void)addEmailAddressEnrichment:(id)arg1;
- (void)addUnrecognizedLookupPhoneNumber:(id)arg1;
- (void)addCuratedPhoneNumber:(id)arg1;
- (void)addDetectedPhoneNumber:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange)arg4 extractionInfo:(id)arg5;
- (void)addCuratedPostalAddress:(id)arg1;
- (void)addDetectedPostalAddress:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange)arg4 extractionInfo:(id)arg5;
- (void)addDetection:(id)arg1 forIdentity:(id)arg2 extractionInfo:(id)arg3;
- (void)setLastModifiedTimestamp:(struct SGUnixTimestamp_)arg1;
- (void)setCreationTimestamp:(struct SGUnixTimestamp_)arg1;
- (void)stripEventInformation;
- (void)stripContactInformation;
- (void)addTaggedCharacterRanges:(id)arg1;
- (void)addExternalEnrichment:(id)arg1;
- (void)addOrReplacePreferredEnrichment:(id)arg1;
- (void)addEnrichment:(id)arg1;
- (void)dealloc;
- (id)initWithContactDetailWithKey:(id)arg1 type:(unsigned long long)arg2 extractionInfo:(id)arg3 curated:(BOOL)arg4 parent:(id)arg5 value:(id)arg6 context:(id)arg7 contextRangeOfInterest:(struct _NSRange)arg8;
- (id)initWithInteractionIdentifier:(id)arg1 fromBundleIdentifier:(id)arg2;
- (id)initWithInteraction:(id)arg1 fromBundleIdentifier:(id)arg2;
- (id)initWithIntentPersonAtDate:(id)arg1 bundleId:(id)arg2 handle:(id)arg3 displayName:(id)arg4;
- (id)initWithMessage:(id)arg1 fromSource:(id)arg2;
- (id)initWithTextMessage:(id)arg1 fromSource:(id)arg2;
- (id)initWithEmailMessage:(id)arg1 fromSource:(id)arg2;
- (id)initWithUnrecognizedContactWithKey:(id)arg1;
- (id)initWithPseudoContactWithKey:(id)arg1 parent:(id)arg2 name:(id)arg3;
- (id)initWithDuplicateKey:(id)arg1 title:(id)arg2 parent:(id)arg3;
- (id)toCloudKitRecordWithId:(id)arg1 parentEntityType:(long long)arg2;

@end

