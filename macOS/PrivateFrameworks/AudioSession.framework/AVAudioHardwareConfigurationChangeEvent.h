//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AVAudioHardwareConfigurationChangeEvent : NSObject
{
    NSArray *createdObjects;
    NSArray *destroyedObjects;
    NSArray *changedObjects;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *changedObjects; // @synthesize changedObjects;
@property(retain, nonatomic) NSArray *destroyedObjects; // @synthesize destroyedObjects;
@property(retain, nonatomic) NSArray *createdObjects; // @synthesize createdObjects;
- (id)description;
- (id)init;

@end

