//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioHardwareObject, NSArray;

@interface AVAudioHardwareObjectChangeEvent : NSObject
{
    AVAudioHardwareObject *changedObject;
    NSArray *namedProperties;
    NSArray *customProperties;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *customProperties; // @synthesize customProperties;
@property(retain, nonatomic) NSArray *namedProperties; // @synthesize namedProperties;
@property(retain, nonatomic) AVAudioHardwareObject *changedObject; // @synthesize changedObject;
- (id)description;
- (id)init;

@end

