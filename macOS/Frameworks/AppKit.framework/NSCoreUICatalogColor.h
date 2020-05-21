//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSDynamicNamedColor.h>

@class NSBundle;

__attribute__((visibility("hidden")))
@interface NSCoreUICatalogColor : NSDynamicNamedColor
{
    double alphaComponent;
    NSBundle *_bundle;
}

+ (id)_bundleFromCatalogName:(id)arg1;
+ (id)_catalogNameFromBundle:(id)arg1;
@property(retain) NSBundle *bundle; // @synthesize bundle=_bundle;
- (BOOL)_getSemanticallyEquivalentVisualEffectMaterial:(long long *)arg1;
- (id)resolvedColor;
- (long long)_bestMatchingDisplayGamutFor:(id)arg1;
- (void)dealloc;
- (id)initWithCatalogName:(id)arg1 colorName:(id)arg2 bundle:(id)arg3;
- (Class)classForCoder;

@end

