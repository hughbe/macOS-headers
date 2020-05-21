//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPSpotlightUsagePropensity-Protocol.h>

@class NSData, NSString;

@interface _CPSpotlightUsagePropensity : PBCodable <_CPSpotlightUsagePropensity, NSSecureCoding>
{
    float _appLaunch;
    float _onDeviceAddressBookData;
    float _onDeviceOtherPersonalData;
    float _punchout;
    float _thirdPartyInAppContent;
    float _parsec;
    float _querySuggestion;
    float _other;
    int _totalEngagements;
    float _siriSuggestions;
}

@property(nonatomic) float siriSuggestions; // @synthesize siriSuggestions=_siriSuggestions;
@property(nonatomic) int totalEngagements; // @synthesize totalEngagements=_totalEngagements;
@property(nonatomic) float other; // @synthesize other=_other;
@property(nonatomic) float querySuggestion; // @synthesize querySuggestion=_querySuggestion;
@property(nonatomic) float parsec; // @synthesize parsec=_parsec;
@property(nonatomic) float thirdPartyInAppContent; // @synthesize thirdPartyInAppContent=_thirdPartyInAppContent;
@property(nonatomic) float punchout; // @synthesize punchout=_punchout;
@property(nonatomic) float onDeviceOtherPersonalData; // @synthesize onDeviceOtherPersonalData=_onDeviceOtherPersonalData;
@property(nonatomic) float onDeviceAddressBookData; // @synthesize onDeviceAddressBookData=_onDeviceAddressBookData;
@property(nonatomic) float appLaunch; // @synthesize appLaunch=_appLaunch;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

