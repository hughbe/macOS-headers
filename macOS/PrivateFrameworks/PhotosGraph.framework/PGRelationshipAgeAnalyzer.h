//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGRelationshipAnalyzer-Protocol.h>

@class NSString, PGGraphRelationshipProcessor;

@interface PGRelationshipAgeAnalyzer : NSObject <PGRelationshipAnalyzer>
{
    PGGraphRelationshipProcessor *_processor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak PGGraphRelationshipProcessor *processor; // @synthesize processor=_processor;
- (void)runAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)initWithRelationshipProcessor:(id)arg1;
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

