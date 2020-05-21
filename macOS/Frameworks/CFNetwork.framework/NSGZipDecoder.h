//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLDownloadDecoder-Protocol.h>

@class NSString;

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder>
{
    struct z_stream_s _stream;
    unsigned long long _modificationTime;
    NSString *_filename;
    BOOL _streamInitialized;
    BOOL _decodedHeader;
    BOOL _finishedInflating;
    BOOL _pad;
}

+ (id)MIMEType;
+ (BOOL)canDecodeDownloadHeaderData:(id)arg1;
+ (BOOL)decodeDownloadHeader:(id)arg1 headerLength:(int *)arg2 modificationTime:(unsigned long long *)arg3 filename:(id *)arg4;
- (id)filenameWithOriginalFilename:(id)arg1;
- (id)fileAttributes;
- (BOOL)finishDownloadDecoding;
- (BOOL)isFinishedDecoding;
- (BOOL)decodeDownloadData:(id)arg1 dataForkData:(id *)arg2 resourceForkData:(id *)arg3;
- (id)decodeData:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

