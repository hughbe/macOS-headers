//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppContainer/ASBContainer.h>

@class CodeIdentity, NSDictionary, NSRegularExpression, NSString, NSURL;

@interface ASBMutableContainer : ASBContainer
{
    CodeIdentity *_owner;
    BOOL _created;
    NSDictionary *varMap;
    NSRegularExpression *matchVars;
    BOOL _pathSpecOnce;
    NSString *_backupPath;
}

+ (id)containerForApplicationAtURL:(id)arg1 withHomeDirectory:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (id)containerForCodeIdentity:(id)arg1 withHomeDirectory:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (id)containerForApplicationAtURL:(id)arg1 withHomeDirectory:(id)arg2 error:(id *)arg3;
+ (id)containerForApplicationAtURL:(id)arg1 error:(id *)arg2;
+ (id)containerForCodeIdentity:(id)arg1 withHomeDirectory:(id)arg2 error:(id *)arg3;
+ (void)synchronizedContainerForSigningId:(id)arg1 andHomeDirectory:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)synchronizedContainerForCodeIdentity:(id)arg1 andHomeDirectory:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(readonly) BOOL isNewlyCreatedContainer; // @synthesize isNewlyCreatedContainer=_created;
@property(readonly) CodeIdentity *ownerCode; // @synthesize ownerCode=_owner;
- (id)evaluatePathSpecification:(id)arg1 usingFileManager:(id)arg2 error:(id *)arg3;
- (void)setSandboxProfileDataValidationInfo:(id)arg1;
- (void)setSandboxProfileData:(id)arg1;
- (BOOL)upgradeAndReturnError:(id *)arg1;
- (BOOL)saveAndReturnError:(id *)arg1;
- (BOOL)migrateAndIgnoreActionFailures:(BOOL)arg1 error:(id *)arg2;
- (BOOL)preferenceDomain:(id)arg1 requiresMigration:(char *)arg2 error:(id *)arg3;
- (BOOL)restoreFile:(id)arg1 usingFileManager:(id)arg2 error:(id *)arg3;
@property(readonly) NSURL *backupURL;
- (BOOL)backupFile:(id)arg1 usingFileManager:(id)arg2 error:(id *)arg3;
- (void)setRequirementACL:(id)arg1;
@property(readonly) NSString *containerIdentifier;
- (id)initWithApplicationAtURL:(id)arg1 andHomeDirectory:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithCodeIdentity:(id)arg1 andHomeDirectory:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithFakeContainerForCodeIdentity:(id)arg1 andHomeDirectory:(id)arg2 error:(id *)arg3;
- (id)initWithExistingContainerForSigningId:(id)arg1 andHomeDirectory:(id)arg2 error:(id *)arg3;
- (id)initWithNewContainerForCodeIdentity:(id)arg1 andHomeDirectory:(id)arg2 ignoringMigrationFailures:(BOOL)arg3 error:(id *)arg4;
- (id)initWithCodeIdentity:(id)arg1 andHomeDirectory:(id)arg2 error:(id *)arg3;
- (id)initWithHomeDirectory:(id)arg1 andContainerPath:(id)arg2 codeIdentity:(id)arg3 error:(id *)arg4;
- (id)initWithHomeDirectory:(id)arg1 andContainerPath:(id)arg2 error:(id *)arg3;

@end

