//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber, NSString;

@interface FAFetchFamilyPhotoRequest : FAFamilyCircleRequest
{
    BOOL _localFallback;
    BOOL _useMonogramAsLastResort;
    NSNumber *_memberDSID;
    NSString *_memberHashedDSID;
    unsigned long long _requestedSize;
    double _requiredWidth;
    double _requiredHeight;
    double _monogramDiameter;
    NSString *_fullname;
    NSString *_emailAddress;
    NSString *_phoneNumber;
}

- (void).cxx_destruct;
@property(copy) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy) NSString *fullname; // @synthesize fullname=_fullname;
@property BOOL useMonogramAsLastResort; // @synthesize useMonogramAsLastResort=_useMonogramAsLastResort;
@property double monogramDiameter; // @synthesize monogramDiameter=_monogramDiameter;
@property double requiredHeight; // @synthesize requiredHeight=_requiredHeight;
@property double requiredWidth; // @synthesize requiredWidth=_requiredWidth;
@property(readonly) unsigned long long requestedSize; // @synthesize requestedSize=_requestedSize;
@property(readonly) BOOL localFallback; // @synthesize localFallback=_localFallback;
@property(readonly, copy) NSString *memberHashedDSID; // @synthesize memberHashedDSID=_memberHashedDSID;
@property(readonly, copy) NSNumber *memberDSID; // @synthesize memberDSID=_memberDSID;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)requestOptions;
- (id)initWithConnectionProvider:(id)arg1;
- (id)init;
- (id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(BOOL)arg3 connectionProvider:(id)arg4;
- (id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(BOOL)arg3;
- (id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(BOOL)arg3 connectionProvider:(id)arg4;
- (id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned long long)arg2 localFallback:(BOOL)arg3;

@end

