//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGNamingAnalyzer-Protocol.h>

@class NSString, PGGraphNamingProcessor;

@interface PGNamingSharedAssetsAnalyzer : NSObject <PGNamingAnalyzer>
{
    PGGraphNamingProcessor *_processor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak PGGraphNamingProcessor *processor; // @synthesize processor=_processor;
- (id)name;
- (void)findSharedAssetMatchesFromSharingRecords:(id)arg1 personLocalIdentifiersByAssetUUID:(id)arg2 graph:(id)arg3 withProgressBlock:(CDUnknownBlockType)arg4;
- (void)runAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)initWithNamingProcessor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

