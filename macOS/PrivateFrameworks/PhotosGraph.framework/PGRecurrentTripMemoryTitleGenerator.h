//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGRecurrentTripMemoryTitleGenerator : PGTitleGenerator
{
    NSSet *_locationNodes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *locationNodes; // @synthesize locationNodes=_locationNodes;
- (id)_timeTitle;
- (id)_locationTitle;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithLocationNodes:(id)arg1;

@end

