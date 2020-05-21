//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXCMMPersonSuggestion-Protocol.h>

@class CNContact, NSString, PHFetchResult, PHPerson, PXRecipientTransport;

@interface PXCMMPhotoKitPersonSuggestion : NSObject <PXCMMPersonSuggestion>
{
    CNContact *_fetchQueue_linkedContact;
    NSString *_localizedName;
    PHPerson *_person;
    PHFetchResult *_keyFaceFetchResult;
    PHFetchResult *_keyAssetFetchResult;
    PXRecipientTransport *_bestTransport;
}

+ (id)personSuggestionWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2 keyAssetFetchResult:(id)arg3;
+ (id)personSuggestionWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2;
+ (id)personSuggestionWithPerson:(id)arg1;
+ (id)_contactFetchQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) PXRecipientTransport *bestTransport; // @synthesize bestTransport=_bestTransport;
@property(readonly, nonatomic) PHFetchResult *keyAssetFetchResult; // @synthesize keyAssetFetchResult=_keyAssetFetchResult;
@property(readonly, nonatomic) PHFetchResult *keyFaceFetchResult; // @synthesize keyFaceFetchResult=_keyFaceFetchResult;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)_prefetchLinkedContactInBackgroundForPerson:(id)arg1;
- (id)_linkedContactForPerson:(id)arg1;
@property(readonly, nonatomic) CNContact *linkedContact;
- (BOOL)matchesRecipientInRecipients:(id)arg1;
- (id)personSuggestionUpdatedPerson:(id)arg1;
- (id)personSuggestionUpdatedKeyAssetFetchResult:(id)arg1;
- (id)personSuggestionUpdatedKeyFaceFetchResult:(id)arg1;
- (id)initWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2 keyAssetFetchResult:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

