//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLPhotoAnalysisServiceTaxonomyResolver.h"

@class PHAVisionServiceSceneClassificationWorker;

@interface PHAVisionServiceSceneClassificationWorkerTaxonomyResolver : NSObject <PLPhotoAnalysisServiceTaxonomyResolver>
{
    PHAVisionServiceSceneClassificationWorker *_sceneClassificationWorker;
}

@property(readonly) PHAVisionServiceSceneClassificationWorker *sceneClassificationWorker; // @synthesize sceneClassificationWorker=_sceneClassificationWorker;
- (void).cxx_destruct;
- (id)sceneTaxonomyHash;
- (id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;
- (id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id *)arg2;
- (id)initWithSceneClassificationWorker:(id)arg1;

@end

