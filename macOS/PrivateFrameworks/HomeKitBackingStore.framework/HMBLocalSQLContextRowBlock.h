//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HMBLocalSQLContextRowBlock : HMFObject
{
    unsigned long long _blockRow;
    unsigned long long _type;
    NSData *_optionsData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *optionsData; // @synthesize optionsData=_optionsData;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long blockRow; // @synthesize blockRow=_blockRow;
- (id)initWithBlockRow:(unsigned long long)arg1 type:(unsigned long long)arg2 options:(id)arg3;

@end

