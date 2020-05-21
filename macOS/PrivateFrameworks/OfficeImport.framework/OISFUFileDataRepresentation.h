//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OISFUDataRepresentation.h>

@class NSString, OISFUCryptoKey;
@protocol SFUInputStream;

__attribute__((visibility("hidden")))
@interface OISFUFileDataRepresentation : OISFUDataRepresentation
{
    NSString *mPath;
    int mSharedFd;
    long long mFileLength;
    unsigned int mFileType;
    BOOL mHasFileAttributes;
    long long mPlaintextDataLength;
    OISFUCryptoKey *mCryptoKey;
    id <SFUInputStream> mInputStream;
    BOOL mDeleteFileWhenDone;
}

- (void)deleteFileWhenDone;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)inputStream;
- (BOOL)isCryptoKeyIdenticalToKey:(id)arg1;
- (BOOL)isEncrypted;
- (long long)encodedLength;
- (long long)dataLength;
- (BOOL)isReadable;
- (void)setFileType:(unsigned int)arg1;
- (unsigned int)fileType;
- (id)path;
- (id)description;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2;
- (id)initWithPath:(id)arg1;
- (void)readFileAttributes;

@end

