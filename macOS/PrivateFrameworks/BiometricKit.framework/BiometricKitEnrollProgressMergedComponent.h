//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BiometricKitEnrollProgressCoordinates;

@interface BiometricKitEnrollProgressMergedComponent : NSObject
{
    long long _componentID;
    BiometricKitEnrollProgressCoordinates *_transformationCoordinates;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BiometricKitEnrollProgressCoordinates *transformationCoordinates; // @synthesize transformationCoordinates=_transformationCoordinates;
@property(nonatomic) long long componentID; // @synthesize componentID=_componentID;
- (void)dealloc;
- (id)init;

@end

