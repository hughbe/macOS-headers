//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NLDataProvider, NLNumberGenerator, NSMutableData;

__attribute__((visibility("hidden")))
@interface NLDataEnumerator : NSObject
{
    NLDataProvider *_dataProvider;
    unsigned long long _idx;
    NLNumberGenerator *_generator;
    NSMutableData *_shuffleData;
}

- (void).cxx_destruct;
- (void)shuffle;
@property(readonly) unsigned long long index;
@property(readonly, retain) NLDataProvider *dataProvider;
- (void)rewindAndShuffle:(BOOL)arg1;
- (void)rewind;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (id)nextInstance;
- (id)initWithDataProvider:(id)arg1;
- (id)initWithDataProvider:(id)arg1 numberGenerator:(id)arg2;

@end

