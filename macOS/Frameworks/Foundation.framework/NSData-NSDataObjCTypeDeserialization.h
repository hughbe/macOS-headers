//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (NSDataObjCTypeDeserialization)
+ (BOOL)_base64DecodingAlwaysSucceedsForOptions:(unsigned long long)arg1;
+ (id)_newZeroingDataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;
+ (id)_newZeroingDataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)dataWithData:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
+ (id)dataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)data;
+ (id)_alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)_scriptingRectangleWithDescriptor:(id)arg1;
+ (id)_scriptingPointWithDescriptor:(id)arg1;
- (void)deserializeDataAt:(void *)arg1 ofObjCType:(const char *)arg2 atCursor:(unsigned int *)arg3 context:(id)arg4;
- (BOOL)_providesConcreteBacking;
- (id)base64Encoding;
- (id)initWithBase64Encoding:(id)arg1;
- (id)base64EncodedDataWithOptions:(unsigned long long)arg1;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2;
- (id)base64EncodedStringWithOptions:(unsigned long long)arg1;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2;
- (id)_base64EncodingAsString:(BOOL)arg1 withOptions:(unsigned long long)arg2;
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)_decodeBase64EncodedCharacterBuffer:(const char *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 buffer:(char *)arg4 bufferLength:(unsigned long long)arg5 state:(CDStruct_37137064 *)arg6;
- (id)_createDispatchData;
- (struct _NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id *)arg3;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (BOOL)isEqualToData:(id)arg1;
- (BOOL)_isCompact;
- (BOOL)_isDispatchData;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1;
- (BOOL)_allowsDirectEncoding;
- (id)replacementObjectForCoder:(id)arg1;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)_copyWillRetain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_asciiDescription;
- (id)debugDescription;
- (id)description;
- (unsigned long long)_cfTypeID;
- (const void *)bytes;
- (unsigned long long)length;
- (id)compressedDataUsingAlgorithm:(long long)arg1 error:(id *)arg2;
- (id)decompressedDataUsingAlgorithm:(long long)arg1 error:(id *)arg2;
- (id)_dataWithCompressionOperation:(int)arg1 algorithm:(long long)arg2;
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;
- (id)_web_parseRFC822HeaderFields;
- (id)_web_guessedMIMETypeForExtension:(id)arg1;
- (id)_web_guessedMIMEType;
- (id)_web_guessedMIMETypeForXML;
- (BOOL)isNSData__;
- (id)_scriptingRectangleDescriptor;
- (id)_scriptingPointDescriptor;
- (id)_scriptingDebugDescription;
- (void)deserializeBytes:(void *)arg1 length:(unsigned int)arg2 atCursor:(unsigned int *)arg3;
- (unsigned int)deserializeAlignedBytesLengthAtCursor:(unsigned int *)arg1;
- (void)deserializeInts:(int *)arg1 count:(unsigned int)arg2 atCursor:(unsigned int *)arg3;
- (int)deserializeIntAtCursor:(unsigned int *)arg1;
- (void)deserializeInts:(int *)arg1 count:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (int)deserializeIntAtIndex:(unsigned int)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
@end

