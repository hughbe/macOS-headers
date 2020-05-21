//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface SignpostStackFrame : NSObject
{
    NSUUID *_symbolOwnerUUID;
    unsigned long long _offset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSUUID *symbolOwnerUUID; // @synthesize symbolOwnerUUID=_symbolOwnerUUID;
- (id)debugDescription;
- (BOOL)isEqual:(id)arg1;
- (id)initWithUUID:(id)arg1 offset:(unsigned long long)arg2;
- (id)initWithArrayRepresentation:(id)arg1;
- (id)_serializableArrayRepresentation;

@end

