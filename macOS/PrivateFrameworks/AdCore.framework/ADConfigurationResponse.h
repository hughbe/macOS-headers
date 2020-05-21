//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface ADConfigurationResponse : PBCodable <NSCopying>
{
    int _bannerProxyType;
    NSString *_configVersion;
    NSMutableArray *_theConfigurations;
    NSString *_resourceConnectProxyURL;
    NSString *_resourceProxyURL;
    struct {
        unsigned int bannerProxyType:1;
    } _has;
}

+ (Class)theConfigurationType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *configVersion; // @synthesize configVersion=_configVersion;
@property(retain, nonatomic) NSString *resourceConnectProxyURL; // @synthesize resourceConnectProxyURL=_resourceConnectProxyURL;
@property(retain, nonatomic) NSString *resourceProxyURL; // @synthesize resourceProxyURL=_resourceProxyURL;
@property(retain, nonatomic) NSMutableArray *theConfigurations; // @synthesize theConfigurations=_theConfigurations;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasConfigVersion;
- (int)StringAsBannerProxyType:(id)arg1;
- (id)bannerProxyTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasBannerProxyType;
@property(nonatomic) int bannerProxyType; // @synthesize bannerProxyType=_bannerProxyType;
@property(readonly, nonatomic) BOOL hasResourceConnectProxyURL;
@property(readonly, nonatomic) BOOL hasResourceProxyURL;
- (id)theConfigurationAtIndex:(unsigned long long)arg1;
- (unsigned long long)theConfigurationsCount;
- (void)addTheConfiguration:(id)arg1;
- (void)clearTheConfigurations;

@end

