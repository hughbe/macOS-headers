//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileWrapper.h>

#import <NotesShared/NSSecureCoding-Protocol.h>

@class NSData, NSURL;

@interface ICRemoteFileWrapper : NSFileWrapper <NSSecureCoding>
{
    NSURL *_remoteURL;
    NSData *_cachedData;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *cachedData; // @synthesize cachedData=_cachedData;
@property(retain, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
- (id)symbolicLinkDestinationURL;
- (id)keyForFileWrapper:(id)arg1;
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;
- (void)removeFileWrapper:(id)arg1;
- (id)addFileWrapper:(id)arg1;
- (BOOL)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)matchesContentsOfURL:(id)arg1;
- (id)serializedRepresentation;
- (id)dataWithError:(id *)arg1;
- (id)regularFileContents;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;
- (id)fileWrappers;
- (id)fileAttributes;
- (id)preferredFilename;
- (id)filename;
- (BOOL)isDirectory;
- (BOOL)isSymbolicLink;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteURL:(id)arg1;

@end

