//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NearField/NFTag-Protocol.h>
#import <NearField/NFTagA-Protocol.h>
#import <NearField/NFTagB-Protocol.h>
#import <NearField/NFTagF-Protocol.h>
#import <NearField/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;
@protocol NFTagA, NFTagB, NFTagF;

@interface NFTag : NSObject <NSSecureCoding, NFTag, NFTagA, NFTagB, NFTagF>
{
    unsigned int _type;
    unsigned int _technology;
    NSData *_tagID;
    NSData *_pmm;
    NSArray *_allSystemCodes;
    NSData *_appData;
    NSData *_uid;
    NSString *_description;
    unsigned int _ndefAvailability;
    unsigned long long _ndefMessageSize;
    unsigned long long _ndefContainerSize;
    NSData *_atqa;
    NSData *_sak;
    NSData *_historicalBytes;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)isEqualToNFTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNFTag:(id)arg1;
@property(readonly, nonatomic) id <NFTagF> tagF;
@property(readonly, nonatomic) id <NFTagB> tagB;
@property(readonly, nonatomic) id <NFTagA> tagA;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long ndefContainerSize;
@property(readonly, nonatomic) unsigned long long ndefMessageSize;
@property(readonly, nonatomic) unsigned int ndefAvailability;
@property(readonly, copy, nonatomic) NSData *AppData;
@property(readonly, copy, nonatomic) NSData *tagID;
@property(readonly, copy, nonatomic) NSData *UID;
@property(readonly, nonatomic) unsigned int technology;
@property(readonly, nonatomic) unsigned int type;
@property(readonly, copy, nonatomic) NSArray *allSystemCodes;
@property(readonly, copy, nonatomic) NSData *SystemCode;
@property(readonly, copy, nonatomic) NSData *PMm;
@property(readonly, copy, nonatomic) NSData *IDm;
@property(readonly, nonatomic) BOOL applicationDataCoding;
@property(readonly, copy, nonatomic) NSData *applicationData;
@property(readonly, copy, nonatomic) NSData *pupi;
@property(readonly, copy, nonatomic) NSData *selectedAID;
@property(readonly, copy, nonatomic) NSData *historicalBytes;
@property(readonly, copy, nonatomic) NSData *sak;
@property(readonly, copy, nonatomic) NSData *atqa;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

