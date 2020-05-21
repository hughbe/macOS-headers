//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface APDProfile : NSObject
{
    NSString *_boardID;
    double _scalingFactor;
    NSString *_previousSystem;
    NSArray *_preferredLocalizations;
    NSString *_platform;
    NSString *_currentSystem;
    NSArray *_testCamps;
}

- (void).cxx_destruct;
@property(retain) NSArray *testCamps; // @synthesize testCamps=_testCamps;
@property(retain) NSString *currentSystem; // @synthesize currentSystem=_currentSystem;
@property(retain) NSString *platform; // @synthesize platform=_platform;
@property(retain) NSArray *preferredLocalizations; // @synthesize preferredLocalizations=_preferredLocalizations;
@property(retain) NSString *previousSystem; // @synthesize previousSystem=_previousSystem;
@property double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property(retain) NSString *boardID; // @synthesize boardID=_boardID;
- (void)mtLogQuickTourPopulation:(id)arg1;
- (id)_detectPreviousSystem;
- (id)_detectCurrentSystem;
- (double)_detectScalingFactor;
- (id)_detectBoardID;
- (id)json;
- (id)description;
- (id)decideTestCamps:(id)arg1 useCachedValue:(BOOL)arg2;
- (id)initWithBoardID:(id)arg1 platform:(id)arg2 scalingFactor:(id)arg3 previousSystem:(id)arg4 currentSystem:(id)arg5 preferredLocalizations:(id)arg6;
- (id)init;

@end

