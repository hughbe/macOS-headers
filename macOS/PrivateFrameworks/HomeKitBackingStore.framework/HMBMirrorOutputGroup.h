//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMBProcessingOptions;

@interface HMBMirrorOutputGroup : HMFObject
{
    HMBProcessingOptions *_options;
    unsigned long long _blockRow;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long blockRow; // @synthesize blockRow=_blockRow;
@property(readonly, nonatomic) HMBProcessingOptions *options; // @synthesize options=_options;
- (id)description;
- (id)initWithBlockRow:(unsigned long long)arg1 options:(id)arg2;

@end

