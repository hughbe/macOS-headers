//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class IOControllerSemanticMO;

__attribute__((visibility("hidden")))
@interface IOControllerConfigurationMO : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(nonatomic) int bufferFrameSize; // @dynamic bufferFrameSize;
@property(nonatomic) double sampleRate; // @dynamic sampleRate;
@property(retain, nonatomic) IOControllerSemanticMO *semantic; // @dynamic semantic;

@end

