//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPFavoritesReplicaRecord-Protocol.h>
#import <MapsSupport/NSSecureCoding-Protocol.h>

@class MSPPosition, MSPVectorTimestamp, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _MSPFavoritesReplicaPlaceholderRecord : NSObject <MSPFavoritesReplicaRecord, NSSecureCoding>
{
    NSData *_contents;
    MSPVectorTimestamp *_contentsTimestamp;
    MSPPosition *_position;
    MSPVectorTimestamp *_positionTimestamp;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) MSPVectorTimestamp *positionTimestamp; // @synthesize positionTimestamp=_positionTimestamp;
@property(readonly, nonatomic) MSPPosition *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp; // @synthesize contentsTimestamp=_contentsTimestamp;
@property(readonly, copy, nonatomic) NSData *contents; // @synthesize contents=_contents;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

