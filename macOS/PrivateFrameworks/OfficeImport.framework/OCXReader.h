//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OCDEncryptedReader.h>

@class OCPZipPackage;

__attribute__((visibility("hidden")))
@interface OCXReader : OCDEncryptedReader
{
    OCPZipPackage *mZipPackage;
    const void *mDataBytes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OCPZipPackage *zipPackage; // @synthesize zipPackage=mZipPackage;
- (id)read;
- (BOOL)start;
- (void)restartReaderToUseDecryptedDocument;
- (BOOL)retainDecryptorWithErrorCode:(int *)arg1;
- (_Bool)isBinaryReader;
- (BOOL)verifyFileFormat;

@end

