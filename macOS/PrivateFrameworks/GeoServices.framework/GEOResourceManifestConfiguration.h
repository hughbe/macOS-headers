//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface GEOResourceManifestConfiguration : NSObject <NSSecureCoding>
{
    unsigned int _tileGroupIdentifier;
    NSString *_os;
    NSString *_osVersion;
    NSString *_osBuild;
    NSString *_countryCode;
    NSString *_hardwareIdentifier;
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    NSString *_environment;
    NSString *_dataDirectory;
    int _defaultScale;
    BOOL _requiresLegacyFormat;
    NSArray *_tileSetOverrides;
}

+ (id)defaultConfiguration;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL requiresLegacyFormat; // @synthesize requiresLegacyFormat=_requiresLegacyFormat;
@property(readonly, nonatomic) int defaultScale; // @synthesize defaultScale=_defaultScale;
@property(copy, nonatomic) NSString *dataDirectory; // @synthesize dataDirectory=_dataDirectory;
@property(copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(copy, nonatomic) NSString *hardwareIdentifier; // @synthesize hardwareIdentifier=_hardwareIdentifier;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *osBuild; // @synthesize osBuild=_osBuild;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(nonatomic) unsigned int tileGroupIdentifier; // @synthesize tileGroupIdentifier=_tileGroupIdentifier;
@property(copy, nonatomic) NSArray *tileSetOverrides;
@property(readonly, nonatomic) NSString *directorySuffix;
- (BOOL)isDefaultConfiguration;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)manifestDictionaryRepresentation;
- (id)_directorySuffixParameters;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

