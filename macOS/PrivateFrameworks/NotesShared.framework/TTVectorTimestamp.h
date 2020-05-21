//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface TTVectorTimestamp : NSObject <NSCopying>
{
    NSMutableDictionary *_clock;
}

- (void).cxx_destruct;
- (id)description;
- (void)mergeWithTimestamp:(id)arg1;
- (unsigned long long)compareTo:(id)arg1;
- (id)sortedUUIDs;
- (id)allUUIDs;
- (void)incrementClockForUUID:(id)arg1;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (unsigned long long)subclockForUUID:(id)arg1;
- (unsigned long long)clockForUUID:(id)arg1;
- (id)clockElementForUUID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)serialize;
- (void)saveToArchive:(VectorTimestamp_cd1d3bcf *)arg1;
- (id)initWithArchive:(const VectorTimestamp_cd1d3bcf *)arg1;
- (id)initWithData:(id)arg1;

@end

