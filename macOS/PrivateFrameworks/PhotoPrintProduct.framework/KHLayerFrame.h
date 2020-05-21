//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHFrame.h>

@class KHThemeDatabase, NSBundle, NSString;

@interface KHLayerFrame : KHFrame
{
    KHFrame *_parentFrame;
    NSString *_layerFrameKey;
    NSBundle *_themeBundle;
    KHThemeDatabase *_themeDatabase;
}

- (void)writeValue:(id)arg1 toField:(id)arg2;
- (void)deleteModel;
- (void)persist;
- (BOOL)isPersisted;
- (id)themeBundle;
- (id)themeDB;
- (id)database;
- (id)treatment;
- (id)layerFrameForKey:(id)arg1;
- (id)parentKeyFromLayerFrameAttributeKey:(id)arg1;
- (id)layerFrameAttributeKeyFromParentKey:(id)arg1;
- (void)loadAttributes;
- (id)attributes;
- (id)addAttributeValue:(id)arg1 forKey:(id)arg2 type:(id)arg3;
- (id)setValue:(id)arg1 forKey:(id)arg2 type:(id)arg3 momentary:(BOOL)arg4;
- (id)prototypeAttributeForKey:(id)arg1;
- (void)setPrototypeValue:(id)arg1 forKey:(id)arg2 type:(id)arg3 momentary:(BOOL)arg4;
- (id)layerFrameKey;
- (BOOL)enableDefaultLeading;
- (id)parentLayout;
- (id)parentFrame;
- (void)setParentFrame:(id)arg1;
- (id)initWithParentFrame:(id)arg1 masterTreatmentLayer:(id)arg2 layerFrameKey:(id)arg3;
- (void)dealloc;

@end

