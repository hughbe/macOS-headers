//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface OISFUDataRepresentation : NSObject
{
    BOOL mHasHash;
    unsigned int mHash;
    BOOL mHasSha1Hash;
    NSData *mSha1Hash;
}

- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)sha1Hash;
- (unsigned int)uint32Hash;
- (unsigned long long)hash;
- (unsigned long long)readIntoData:(id)arg1;
- (struct CGDataProvider *)cgDataProvider;
- (struct _xmlTextReader *)xmlReaderForGzippedDataWithInputStream:(id *)arg1;
- (struct _xmlTextReader *)xmlReaderForGzippedData;
- (struct _xmlTextReader *)xmlReaderWithReadCallback:(CDUnknownFunctionPointerType)arg1;
- (struct _xmlTextReader *)xmlReader;
- (struct _xmlDoc *)xmlDocument;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;
- (id)bufferedInputStream;
- (id)inputStream;
- (BOOL)isEncrypted;
- (long long)encodedLength;
- (long long)dataLength;
- (BOOL)isReadable;

@end

