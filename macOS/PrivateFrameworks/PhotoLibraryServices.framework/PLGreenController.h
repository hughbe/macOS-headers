//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PLGreenController : NSObject
{
    NSDictionary *_currentGreenValues;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *currentGreenValues; // @synthesize currentGreenValues=_currentGreenValues;
- (BOOL)greenValuesSimilarToGreenValues:(id)arg1;
- (BOOL)isGreenStateValid;
- (void)readValuesFromDisk;
- (id)init;

@end

