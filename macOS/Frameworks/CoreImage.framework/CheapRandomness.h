//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CheapRandomness : CIFilter
{
    NSNumber *inputDither;
    NSNumber *inputScale;
}

@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSNumber *inputDither; // @synthesize inputDither;
- (id)outputImage;

@end

