//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMKCandidate;

@interface IMKUITriCandidateLayout : NSObject
{
    IMKCandidate *_left;
    IMKCandidate *_middle;
    IMKCandidate *_right;
}

- (void).cxx_destruct;
@property(readonly) IMKCandidate *rightCandidate; // @synthesize rightCandidate=_right;
@property(readonly) IMKCandidate *middleCandiate; // @synthesize middleCandiate=_middle;
@property(readonly) IMKCandidate *leftCandidate; // @synthesize leftCandidate=_left;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithleftCandidate:(id)arg1 middleCandidate:(id)arg2 rightCandidate:(id)arg3;
- (id)init;

@end

