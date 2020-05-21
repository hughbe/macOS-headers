//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OCXReadState.h>

@class NSMutableDictionary, NSMutableSet, OAXDrawingState, OCPPackagePart;

__attribute__((visibility("hidden")))
@interface OAVReadState : OCXReadState
{
    Class mClient;
    OCPPackagePart *mPackagePart;
    NSMutableDictionary *mShapeTypes;
    NSMutableDictionary *mShapeIdMap;
    NSMutableSet *mDualDrawables;
    OAXDrawingState *mOAXState;
}

- (void).cxx_destruct;
@property __weak OAXDrawingState *oaxState; // @synthesize oaxState=mOAXState;
- (id)blipRefForURL:(id)arg1;
- (unsigned int)officeArtShapeIdWithVmlShapeId:(id)arg1;
- (BOOL)isDualDrawable:(id)arg1;
- (void)addDualDrawable:(id)arg1;
- (void)setDrawable:(id)arg1 forVmlShapeId:(id)arg2;
- (id)drawableForVmlShapeId:(id)arg1;
- (void)setShapeType:(unsigned short)arg1 forId:(id)arg2;
- (unsigned short)shapeTypeForId:(id)arg1;
- (void)setPackagePart:(id)arg1;
- (id)packagePart;
- (Class)client;
- (void)resetForNewDrawing;
- (id)initWithClient:(Class)arg1 packagePart:(id)arg2;

@end

