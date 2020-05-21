//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProVideo/NSCopying-Protocol.h>
#import <ProVideo/NSSecureCoding-Protocol.h>

@class NSDictionary, NSLock, NSMutableDictionary, NSString;

@interface PVEffect : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_effectID;
    NSString *_effectType;
    NSString *_displayName;
    CDStruct_e83c9415 _effectRange;
    NSMutableDictionary *_inspectableProperties;
    NSLock *_inspectablePropertiesLock;
    NSMutableDictionary *_effectParameters;
    struct atomic<unsigned int> *_loadCount;
    BOOL _conformToInputAspect;
    BOOL _isPreview;
    BOOL _isRecording;
    BOOL _useLocalLoopTime;
    BOOL _isInInteractiveMode;
    BOOL _shouldDisableFadeOut;
}

+ (void)handleCleanupEffectsCache;
+ (void)handleApplicationDidReceiveMemoryWarning;
+ (void)handleApplicationWillTerminate;
+ (id)newEffectWithData:(id)arg1;
+ (id)newEffectWithURL:(id)arg1;
+ (void)registerEffects;
+ (BOOL)supportsSecureCoding;
+ (id)defaultVideoTransitionEffectID;
+ (BOOL)isVideoForEffectID:(id)arg1;
+ (id)descriptionForEffectID:(id)arg1;
+ (id)themeForEffectID:(id)arg1;
+ (id)categoryForEffectID:(id)arg1;
+ (id)displayNameForEffectID:(id)arg1;
+ (id)displayNameForEffectType:(id)arg1;
+ (id)registeredEffectIDsForClass:(Class)arg1;
+ (Class)classForEffectID:(id)arg1;
+ (id)firstRegisteredEffectIDContainingSubstring:(id)arg1;
+ (id)registeredEffectIDsForEffectTypes:(id)arg1;
+ (id)registeredEffectIDsForEffectType:(id)arg1;
+ (id)effectTypeForEffectID:(id)arg1;
+ (id)userVisibleEffectIDs;
+ (id)allRegisteredEffectIDs;
+ (id)propertiesForEffect:(id)arg1;
+ (id)_registryEntryForEffectID:(id)arg1;
+ (BOOL)effectIDIsNone:(id)arg1;
+ (BOOL)effectIDIsRegistered:(id)arg1;
+ (id)newEffectWithData:(id)arg1;
+ (id)newEffectWithURL:(id)arg1;
+ (id)newEffectWithID:(id)arg1;
+ (void)registerEffectClass:(Class)arg1 forEffectID:(id)arg2 withProperties:(id)arg3;
+ (void)runDeferredRegistration;
+ (void)deferEffectRegistrationForClass:(Class)arg1;
+ (id)_effectRegistryForLookup;
+ (void)appFinishedLaunching:(id)arg1;
+ (void)ensureEffectsRegistered;
+ (id)_effectRegistry;
+ (void)noteApplicationDidReceiveMemoryWarning;
+ (BOOL)isInteractiveMode;
+ (void)setInteractiveMode:(BOOL)arg1;
+ (void)cleanupEffectsCache;
+ (void)cleanupEffectsSingletons;
+ (void)noteApplicationWillTerminate;
+ (void)clearPreviewStats;
+ (void)willTerminate:(id)arg1;
+ (void)initEffectRegistryWithHostDelegate:(id)arg1;
+ (void)initEffectRegistry;
+ (void)_registerBuiltInEffects;
+ (void)_registerEffectsInBundle:(id)arg1 atPath:(id)arg2;
+ (id)_registeredEffectClasses;
- (void).cxx_destruct;
@property(nonatomic) BOOL shouldDisableFadeOut; // @synthesize shouldDisableFadeOut=_shouldDisableFadeOut;
@property(nonatomic) BOOL isInInteractiveMode; // @synthesize isInInteractiveMode=_isInInteractiveMode;
@property(nonatomic) BOOL useLocalLoopTime; // @synthesize useLocalLoopTime=_useLocalLoopTime;
@property(nonatomic) BOOL isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) BOOL isPreview; // @synthesize isPreview=_isPreview;
@property(nonatomic) BOOL conformToInputAspect; // @synthesize conformToInputAspect=_conformToInputAspect;
@property(nonatomic) CDStruct_e83c9415 effectRange; // @synthesize effectRange=_effectRange;
- (id)description;
- (id)effectDescription;
- (void)applyInspectableProperties;
- (HGRef_265f9e4c)hgNodeForTime:(CDStruct_1b6d18a9)arg1 inputs:(const PVInputHGNodeMap_d4d649d7 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;
- (HGRef_265f9e4c)previewHGNodeForTime:(CDStruct_1b6d18a9)arg1 inputHGNode:(HGRef_265f9e4c)arg2 outputSize:(struct CGSize)arg3 renderer:(struct HGRenderer *)arg4;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)writeDefaultChannels;
- (BOOL)usesDefaultChannelDataEncoding;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)_decodeFromCoder:(id)arg1 into:(id)arg2;
- (void)_copyWithZone:(struct _NSZone *)arg1 into:(id)arg2;
- (void)_postInit:(id)arg1;
- (BOOL)hasBuiltInEnvironment;
- (BOOL)transcriptionHitTest:(struct CGPoint)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)setTranscriptionText:(id)arg1;
- (void)resetToDefaultTranscriptionForLocaleID:(id)arg1;
- (void)clearTranscription;
- (BOOL)shouldRenderPreviewAtPosterTime;
- (BOOL)isTranscription;
- (BOOL)isTextFlipped;
- (int)orientation;
- (BOOL)supportsOrientation;
- (BOOL)supportsFlippingText;
- (double)topLevelOpacity;
- (id)defaultAttributedString:(unsigned long long)arg1;
- (void)disableRenderingTextObjectAtIndex:(unsigned int)arg1;
- (void)enableRenderingTextObjectAtIndex:(unsigned int)arg1;
- (_Bool)topLevelGroupBoundsAtPosterFrame:(struct CGRect *)arg1 includeDropShadow:(_Bool)arg2 includeMasks:(_Bool)arg3;
- (_Bool)topLevelGroupBounds:(struct CGRect *)arg1 atTime:(CDStruct_1b6d18a9)arg2 includeDropShadow:(_Bool)arg3 includeMasks:(_Bool)arg4;
- (void)setTopLevelGroupTransform:(id)arg1;
- (id)topLevelGroupTransformAtPosterFrame:(CDStruct_1b6d18a9)arg1;
- (id)topLevelGroupTransformAtTime:(CDStruct_1b6d18a9)arg1;
- (id)topLevelGroupTransform;
- (_Bool)imagePointsAtPosterFrameTime:(struct CGPoint *)arg1 componentTime:(CDStruct_1b6d18a9)arg2 includeDropShadow:(_Bool)arg3;
- (_Bool)imagePointsAtPosterFrameTime:(struct CGPoint *)arg1 componentTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)imagePoints:(struct CGPoint *)arg1 time:(CDStruct_1b6d18a9)arg2 includeDropShadow:(_Bool)arg3;
- (_Bool)imagePoints:(struct CGPoint *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (_Bool)textImagePoints:(struct CGPoint *)arg1 textAtIndex:(unsigned long long)arg2 time:(CDStruct_1b6d18a9)arg3 includeDropShadow:(_Bool)arg4;
- (_Bool)textImagePoints:(struct CGPoint *)arg1 textAtIndex:(unsigned long long)arg2 time:(CDStruct_1b6d18a9)arg3;
- (id)textTransforms:(CDStruct_1b6d18a9)arg1;
- (id)textEditingBounds:(CDStruct_1b6d18a9)arg1;
- (float)proxyRenderScale;
@property(retain, nonatomic) NSMutableDictionary *effectParameters; // @synthesize effectParameters=_effectParameters;
- (BOOL)supportsExtendedRangeInputs;
- (id)descriptionOfInspectableProperties;
- (void)addEntriesToInspectableProperties:(id)arg1;
@property(copy, nonatomic) NSDictionary *inspectableProperties;
- (void)setInspectableProperty:(id)arg1 forKey:(id)arg2;
- (id)inspectablePropertyForKey:(id)arg1;
- (void)releaseResources;
- (void)updateInspectableProperties:(id)arg1;
- (void)updateInspectableProperties;
- (void)releaseEffect;
- (BOOL)loadResources;
- (BOOL)loadEffect;
- (BOOL)resourcesAreReady;
- (BOOL)isReady;
- (int)origin;
- (struct CGSize)outputSize;
- (id)categoryName;
- (id)displayName;
- (id)effectType;
- (id)effectID;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end

