//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDMMCSItemReaderWriterProtocol-Protocol.h>

@class CKDMMCSItem, CKDMMCSItemGroupContext, NSMutableIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface CKDMMCSItemCommandWriter : NSObject <CKDMMCSItemReaderWriterProtocol>
{
    CKDMMCSItemGroupContext *_MMCSRequest;
    CKDMMCSItem *_MMCSItem;
    NSMutableIndexSet *_byteRanges;
    unsigned long long _maximumLength;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long maximumLength; // @synthesize maximumLength=_maximumLength;
@property(retain, nonatomic) NSMutableIndexSet *byteRanges; // @synthesize byteRanges=_byteRanges;
@property(retain, nonatomic) CKDMMCSItem *MMCSItem; // @synthesize MMCSItem=_MMCSItem;
@property(retain, nonatomic) CKDMMCSItemGroupContext *MMCSRequest; // @synthesize MMCSRequest=_MMCSRequest;
- (BOOL)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)isContiguous;
- (BOOL)readBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long *)arg4 error:(id *)arg5;
- (id)getFileMetadataWithError:(id *)arg1;
- (BOOL)closeWithError:(id *)arg1;
- (BOOL)openWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

