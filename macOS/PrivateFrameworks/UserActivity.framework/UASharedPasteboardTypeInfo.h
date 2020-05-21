//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserActivity/NSCopying-Protocol.h>
#import <UserActivity/NSSecureCoding-Protocol.h>

@class NSFileHandle, NSNumber, NSString, NSUUID;

@interface UASharedPasteboardTypeInfo : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _preferFileRep;
    NSString *_type;
    NSUUID *_uuid;
    NSNumber *_offset;
    long long _size;
    NSFileHandle *_dataFile;
    NSString *_typeHint;
    NSNumber *_index;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSNumber *index; // @synthesize index=_index;
@property(copy) NSString *typeHint; // @synthesize typeHint=_typeHint;
@property BOOL preferFileRep; // @synthesize preferFileRep=_preferFileRep;
@property(retain) NSFileHandle *dataFile; // @synthesize dataFile=_dataFile;
@property long long size; // @synthesize size=_size;
@property(copy) NSNumber *offset; // @synthesize offset=_offset;
@property(copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy) NSString *type; // @synthesize type=_type;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

