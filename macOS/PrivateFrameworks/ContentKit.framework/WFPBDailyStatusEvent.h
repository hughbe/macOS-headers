//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBDailyStatusEvent : PBCodable <NSCopying>
{
    NSString *_key;
    BOOL _homeAutomationsEnabled;
    BOOL _installed;
    BOOL _personalAutomationsEnabled;
    BOOL _sharingEnabled;
    struct {
        unsigned int homeAutomationsEnabled:1;
        unsigned int installed:1;
        unsigned int personalAutomationsEnabled:1;
        unsigned int sharingEnabled:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL homeAutomationsEnabled; // @synthesize homeAutomationsEnabled=_homeAutomationsEnabled;
@property(nonatomic) BOOL personalAutomationsEnabled; // @synthesize personalAutomationsEnabled=_personalAutomationsEnabled;
@property(nonatomic) BOOL sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(nonatomic) BOOL installed; // @synthesize installed=_installed;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasHomeAutomationsEnabled;
@property(nonatomic) BOOL hasPersonalAutomationsEnabled;
@property(nonatomic) BOOL hasSharingEnabled;
@property(nonatomic) BOOL hasInstalled;
@property(readonly, nonatomic) BOOL hasKey;

@end

