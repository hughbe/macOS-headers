//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GLKEffect;

@interface GLKEffectProperty : NSObject
{
    int _location;
    char *_nameString;
    struct GLKEffectPropertyPrv *_prv;
    unsigned char _masksInitialized;
    char *_vshSource;
    char *_fshSource;
    unsigned long long _dirtyUniforms;
    GLKEffect *_effect;
}

+ (void)logSetMasksWithLabel:(id)arg1 obj:(id)arg2 typeStr:(id)arg3;
+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;
@property(nonatomic) GLKEffect *effect; // @synthesize effect=_effect;
@property(nonatomic) unsigned char masksInitialized; // @synthesize masksInitialized=_masksInitialized;
@property(nonatomic) unsigned long long dirtyUniforms; // @synthesize dirtyUniforms=_dirtyUniforms;
@property(nonatomic) char *fshSource; // @synthesize fshSource=_fshSource;
@property(nonatomic) char *vshSource; // @synthesize vshSource=_vshSource;
@property(nonatomic) char *nameString; // @synthesize nameString=_nameString;
@property(nonatomic) int location; // @synthesize location=_location;
- (void)dealloc;
- (struct GLKBigInt_s *)fshMask;
- (struct GLKBigInt_s *)vshMask;
- (void)dirtyAllUniforms;
- (void)bind;
- (void)initializeMasks;
- (void)setMasks;
- (_Bool)includeFshShaderTextForRootNode:(id)arg1;
- (_Bool)includeVshShaderTextForRootNode:(id)arg1;
- (void)setShaderBindings;
- (void)setFSHSource:(char *)arg1;
- (void)setVSHSource:(char *)arg1;
- (id)init;

@end

