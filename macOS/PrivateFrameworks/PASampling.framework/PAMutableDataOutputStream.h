//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PASampling/PAOutputStream.h>

@class NSMutableData;

@interface PAMutableDataOutputStream : PAOutputStream
{
    NSMutableData *_outputData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableData *outputData; // @synthesize outputData=_outputData;
- (int)printWithFormat:(const char *)arg1;
- (id)initWithMutableData:(id)arg1;

@end

