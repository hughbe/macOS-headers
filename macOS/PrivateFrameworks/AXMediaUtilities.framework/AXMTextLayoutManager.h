//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXMTextLayoutManager : NSObject
{
}

- (id)textDocumentWithVisionObservations:(id)arg1 canvasSize:(struct CGSize)arg2 context:(id)arg3 error:(id *)arg4;
- (id)_textDocumentWithFeatures:(id)arg1 canvasSize:(struct CGSize)arg2 context:(id)arg3 error:(id *)arg4;
- (id)_assembleLayoutRegions:(id)arg1;
- (id)_assembleLayoutLines:(id)arg1;
- (id)_assembleLayoutSequences:(id)arg1 canvasSize:(struct CGSize)arg2 context:(id)arg3;
- (id)_axmVisionFeatureForFeature:(id)arg1 canvasSize:(struct CGSize)arg2 context:(id)arg3;

@end

