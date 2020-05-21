//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PackageKit/PKMutableArchive.h>

@class NSData, NSString;

@interface PKXARArchive : PKMutableArchive
{
    NSString *_archivePath;
    struct __xar_t *_xarPtr;
    BOOL _skipsVerify;
    NSData *_archiveHash;
}

+ (id)_fileAttributeForXARProperty:(char *)arg1 fileAttributeKey:(id)arg2;
+ (id)_fileAttributeKeyForXARFileType:(id)arg1;
+ (id)_fileAttributeKeyForXARPropertyName:(id)arg1;
- (id)__openOrVerifyErrorForArchiveEntry:(id)arg1;
- (unsigned long long)_fileOffsetForPath:(id)arg1 error:(id *)arg2;
- (BOOL)fileExistsAtPath:(id)arg1;
- (BOOL)verifyReturningError:(id *)arg1;
- (id)fileAttributesAtPath:(id)arg1;
- (BOOL)_extractFile:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)dataForPath:(id)arg1;
- (id)enumeratorAtPath:(id)arg1;
- (struct __xar_file_t *)_fileStructForSubpath:(id)arg1 error:(id *)arg2;
- (BOOL)_xarFileIsValid:(struct __xar_file_t *)arg1;
- (struct __xar_t *)_xar;
- (BOOL)closeArchive;
- (id)computedArchiveDigestWithAlgorithm:(id)arg1;
- (id)digestAlgorithm;
- (id)archiveDigest;
- (id)archiveDigestData;
- (long long)_archiveFileSize;
- (id)archivePath;
- (void)_setSkipsVerifyIfUnsigned:(BOOL)arg1;
- (void)dealloc;
- (id)initForReadingFromPath:(id)arg1 options:(id)arg2;
- (id)initForReadingFromPath:(id)arg1;
- (id)archiveSignatureDate;
- (id)archiveSignatures;

@end

