//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary;

@interface HMBLocalSQLContextRowQuery : HMFObject
{
    unsigned long long _recordRow;
    NSDictionary *_tuples;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *tuples; // @synthesize tuples=_tuples;
@property(readonly, nonatomic) unsigned long long recordRow; // @synthesize recordRow=_recordRow;
- (id)initWithRecordRow:(unsigned long long)arg1 tuples:(id)arg2;

@end

