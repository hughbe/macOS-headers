//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface C3DIONSZipFileArchive : NSObject
{
    NSDictionary *_contents;
    NSData *_data;
    id _provider;
    long long _desc;
    NSString *_path;
    NSArray *_names;
    NSDictionary *_properties;
    NSMutableDictionary *_cachedContents;
    void *_reserved;
    struct __zFlags {
        unsigned int providerSuppliesContents:1;
        unsigned int providerSuppliesStreams:1;
        unsigned int providerSuppliesProperties:1;
        unsigned int noContentsCaching:1;
        unsigned int fileOpen:1;
        unsigned int reserved:27;
    } _zFlags;
    void *_reserved2[5];
}

- (BOOL)isValid;
- (void)invalidate;
- (BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)archiveStream;
- (id)archiveData;
- (id)propertiesForEntryName:(id)arg1;
- (BOOL)writeContentsForEntryName:(id)arg1 toFile:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)streamForEntryName:(id)arg1;
- (id)contentsForEntryName:(id)arg1;
- (id)entryNames;
- (void)dealloc;
- (id)initWithEntryNames:(id)arg1 dataProvider:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithEntryNames:(id)arg1 contents:(id)arg2 properties:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithPath:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end

