//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface MCSubdata : NSData
{
    NSData *_parentData;
    struct _NSRange _subrange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *parentData; // @synthesize parentData=_parentData;
@property(nonatomic) struct _NSRange subrange; // @synthesize subrange=_subrange;
- (const void *)bytes;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;
- (id)initWithParent:(id)arg1 range:(struct _NSRange)arg2;

@end

