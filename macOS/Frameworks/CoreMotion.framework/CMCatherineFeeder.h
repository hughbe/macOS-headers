//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMCatherineFeederInternal;

@interface CMCatherineFeeder : NSObject
{
    CMCatherineFeederInternal *_internal;
}

@property(readonly, nonatomic) CMCatherineFeederInternal *internal; // @synthesize internal=_internal;
- (void)feedCatherine:(double)arg1 confidence:(double)arg2;
- (void)dealloc;
- (id)init;

@end

