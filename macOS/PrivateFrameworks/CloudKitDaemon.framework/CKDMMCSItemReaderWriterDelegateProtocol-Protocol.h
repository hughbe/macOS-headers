//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CKFileMetadata, NSError;
@protocol CKDMMCSItemReaderWriterProtocol;

@protocol CKDMMCSItemReaderWriterDelegateProtocol
- (BOOL)didReadFromItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 offset:(unsigned long long)arg2 bytes:(char *)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long *)arg5 error:(id *)arg6;
- (BOOL)willReadFromItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 offset:(unsigned long long)arg2 bytes:(char *)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long *)arg5 error:(id *)arg6;
- (CKFileMetadata *)didGetFileMetadataItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 fileMetadata:(CKFileMetadata *)arg2 error:(NSError *)arg3;
- (BOOL)willGetFileMetadataItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 error:(id *)arg2;
- (void)didCloseItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 result:(BOOL)arg2 error:(NSError *)arg3;
- (BOOL)willCloseItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 error:(id *)arg2;
- (void)didOpenItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 result:(BOOL)arg2 error:(NSError *)arg3;
- (BOOL)willOpenItemReaderWriter:(id <CKDMMCSItemReaderWriterProtocol>)arg1 error:(id *)arg2;
@end

