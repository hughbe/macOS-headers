//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/NSCopying-Protocol.h>

@class NSArray;

@interface PKVectorMultiTimestamp : NSObject <NSCopying>
{
    NSArray *_timestamps;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *timestamps; // @synthesize timestamps=_timestamps;
- (id)description;
- (void)mergeWithTimestamp:(id)arg1;
- (unsigned long long)compareTo:(id)arg1;
- (id)sortedUUIDs;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)clockForUUID:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)clockElementForUUID:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimestamps:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)serialize;
- (void)saveToArchive:(struct VectorTimestamp *)arg1;
- (id)initWithArchive:(const struct VectorTimestamp *)arg1 andCapacity:(unsigned long long)arg2;
- (id)initWithData:(id)arg1 andCapacity:(unsigned long long)arg2;

@end

