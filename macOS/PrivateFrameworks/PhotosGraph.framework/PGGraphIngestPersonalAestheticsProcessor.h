//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@class NSString;

@interface PGGraphIngestPersonalAestheticsProcessor : NSObject <PGGraphIngestProcessor>
{
}

- (void)_savePersonalHighAestheticsThreshold:(double)arg1 personalGoodAestheticsThreshold:(double)arg2 toGraph:(id)arg3;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (BOOL)shouldRunWithGraphUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

