//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _MLTLogger;

@interface _MLTModelUpdateGradientTesterConfiguration : NSObject
{
    BOOL _verbose;
    NSString *_updateableModelPath;
    NSString *_recipePath;
    long long _computeUnit;
    _MLTLogger *_logger;
}

- (void).cxx_destruct;
@property BOOL verbose; // @synthesize verbose=_verbose;
@property(retain) _MLTLogger *logger; // @synthesize logger=_logger;
@property long long computeUnit; // @synthesize computeUnit=_computeUnit;
@property(retain) NSString *recipePath; // @synthesize recipePath=_recipePath;
@property(retain) NSString *updateableModelPath; // @synthesize updateableModelPath=_updateableModelPath;
- (id)init;

@end

