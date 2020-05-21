//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PackageKit/NSCopying-Protocol.h>
#import <PackageKit/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString, PKPackage, PKPackageRequirements;
@protocol PKPackageReferable;

@interface PKPackageSpecifier : NSObject <NSSecureCoding, NSCopying>
{
    id <PKPackageReferable> _packageReference;
    NSString *_prefixPath;
    NSNumber *_authLevel;
    long long _options;
    NSString *_displayName;
    NSString *_displayVersion;
    NSNumber *_installEnvironment;
    NSString *_externalRootPath;
    NSMutableDictionary *_userPathByComponentIdent;
    NSDictionary *_resolvedPathByComponentIdent;
    NSDictionary *_installPathByComponentIdent;
    NSData *_validatedDigest;
    NSString *_packageUniqueHash;
    PKPackage *_package;
    PKPackageRequirements *_requirements;
    NSString *_destinationPath;
}

+ (BOOL)supportsSecureCoding;
+ (id)_adjustedSubpath:(id)arg1 forPackageComponent:(id)arg2 relocatedToPath:(id)arg3;
@property(copy) NSString *externalRootPath; // @synthesize externalRootPath=_externalRootPath;
@property long long options; // @synthesize options=_options;
@property(copy) NSString *displayVersion; // @synthesize displayVersion=_displayVersion;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *prefixPath; // @synthesize prefixPath=_prefixPath;
- (id)_packageUniqueHash;
- (BOOL)_refersToSamePackage:(id)arg1;
@property(copy) NSNumber *installEnvironment; // @synthesize installEnvironment=_installEnvironment;
@property(copy) NSNumber *authLevel; // @synthesize authLevel=_authLevel;
@property(readonly) PKPackage *package;
@property(retain) id <PKPackageReferable> packageReference; // @synthesize packageReference=_packageReference;
- (void)setUserPath:(id)arg1 forComponentIdentifier:(id)arg2;
- (id)userPathForComponentIdentifier:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_initWithDictionaryRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithPackage:(id)arg1;
- (id)initWithPackageReference:(id)arg1;
- (id)_resolvedPrefixPathForPackageComponent:(id)arg1;
- (id)_resolvedPrefixPathForPackage;
- (id)_requirements;
- (id)_adjustedSubpath:(id)arg1 forPackageComponent:(id)arg2 previous:(BOOL)arg3;
- (id)_previousInstallPathForBundleComponent:(id)arg1;
- (id)_actualInstallPathForBundleComponent:(id)arg1;
- (id)_defaultInstallPathForBundleComponent:(id)arg1;
- (void)_resolveInstallPathsForDestination:(id)arg1 replacingPriorResults:(BOOL)arg2;
- (BOOL)_bundleHasOriginalName:(id)arg1;
- (id)_onDiskComponentForDestination:(id)arg1 packageComponent:(id)arg2 search:(BOOL)arg3;
- (id)__uniquePathForBundle:(id)arg1;
- (id)__checkForApplicationConflictForComponent:(id)arg1 provisionalPath:(id)arg2 destination:(id)arg3;
- (id)__adjustedInstallPathForComponent:(id)arg1 provisionalPath:(id)arg2 destination:(id)arg3;

@end

