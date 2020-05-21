//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NSData;

@interface NEByteParser : NSObject <NSCopying>
{
    unsigned long long _offset;
    NSData *_data;
    const char *_bytes;
    const char *_cursor;
}

- (void).cxx_destruct;
@property const char *cursor; // @synthesize cursor=_cursor;
@property(readonly) const char *bytes; // @synthesize bytes=_bytes;
@property(readonly) NSData *data; // @synthesize data=_data;
@property unsigned long long offset; // @synthesize offset=_offset;
- (id)parseAddressWithFamily:(unsigned char)arg1;
- (const char *)parseBytes:(unsigned long long)arg1;
- (unsigned int)parse32Bits:(char *)arg1;
- (unsigned short)parse16Bits:(char *)arg1;
- (unsigned char)parse8Bits:(char *)arg1;
- (id)parseDomainName;
- (BOOL)copyBytes:(unsigned long long)arg1 to:(void *)arg2;
- (BOOL)advanceBy:(unsigned long long)arg1 andCopyTo:(void *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;

@end

