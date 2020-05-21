//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DMFilesystem : NSObject
{
    id _instPriv;
}

+ (BOOL)isCanonicalPersonalityNameEqual:(id)arg1 withInformalName:(id)arg2;
+ (id)filesystemForPersonality:(id)arg1;
+ (id)filesystemForIOContent:(id)arg1;
+ (id)filesystemForType:(id)arg1 considerDisk:(struct __DADisk *)arg2;
+ (id)filesystemForLocalizedName:(id)arg1;
+ (id)bootableFilesystems;
+ (id)filesystems;
+ (void)ensureDatabaseAndForceRebuild:(BOOL)arg1;
- (id)localizedVerifyRepairString:(id)arg1 found:(char *)arg2;
- (void)setVerifyRepairStringLocale:(id)arg1;
- (id)encryptedUserVisibleName;
- (id)unlocalizedEncryptedUserVisibleName;
- (BOOL)supportedByAPFS;
- (BOOL)supportedByCoreStorage;
- (BOOL)supportedAsFullyFeaturedMacOSHFS;
- (BOOL)supportedAsFullyFeaturedMacOS;
- (BOOL)supportedByWindows;
- (BOOL)supportsResize;
- (BOOL)supportsLiveVerify;
- (BOOL)supportsJournaling;
- (BOOL)canHavePermissionsOff;
- (BOOL)bootable;
- (BOOL)requiresWholeDiskFormat;
- (BOOL)requiresBooterToBoot;
- (BOOL)canFormatWholeDisk;
- (id)maximumSize;
- (id)minimumSize;
- (BOOL)canBeFormatted;
- (id)formatArguments;
- (id)formatExecutable;
- (BOOL)canBeRepaired;
- (id)repairArguments;
- (id)repairExecutable;
- (BOOL)canBeVerified;
- (BOOL)supportsXMLVerifies;
- (BOOL)supportsPercentageVerifies;
- (id)verifyRepairOutputXMLArguments;
- (id)percentageVerifyArguments;
- (id)liveVerifyArguments;
- (id)verifyArguments;
- (id)verifyExecutable;
- (id)contentMask;
- (id)bundlePath;
- (BOOL)fileObjectsAreCaseSensitive;
- (BOOL)fileObjectsAreCasePreserving;
- (BOOL)volumeNameIsCaseSensitive;
- (BOOL)volumeNameIsCasePreserving;
- (void)hardcodedAttribute:(const char *)arg1 available:(char *)arg2 datum:(unsigned long long *)arg3;
- (id)correctedVolumeNameForName:(id)arg1;
- (BOOL)isValidName:(id)arg1 correctedName:(id *)arg2;
- (BOOL)isValidName:(id)arg1;
- (void)awareNameSanitizer:(id)arg1 allowToUpper:(BOOL)arg2 allowReplace:(BOOL)arg3 isValid:(char *)arg4 correctedName:(id *)arg5;
- (BOOL)nameSanitizer:(id)arg1 correctedName:(id *)arg2 doToUpper:(BOOL)arg3 illegalChars:(id)arg4 replacementChar:(id)arg5 leadingDotOK:(BOOL)arg6 controlCharsOK:(BOOL)arg7 minChars:(unsigned int)arg8 maxChars:(unsigned int)arg9 maxBytes:(unsigned int)arg10 limitEncoding:(unsigned long long)arg11;
- (BOOL)serverOnly;
- (BOOL)shouldBeUserFormattable;
- (id)filesystemDictionary;
- (id)userVisibleNameForLanguage:(id)arg1;
- (id)userVisibleName;
- (id)unlocalizedUserVisibleName;
- (id)filesystemType;
- (id)filesystemPersonality;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithPersonality:(id)arg1 majorType:(id)arg2 locUsrVisName:(id)arg3 locUsrVisCrpName:(id)arg4 personalityDict:(id)arg5 bundlePath:(id)arg6;

@end

