//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSString;

@interface CADistanceFieldLayer : CALayer
{
}

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;
+ (id)CA_attributes;
@property struct CGColor *foregroundColor;
@property double sharpness;
@property double offset;
@property double lineWidth;
@property BOOL invertsShape;
@property(copy) NSString *renderMode;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderImageCopyFlags;
- (void)_colorSpaceDidChange;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)didChangeValueForKey:(id)arg1;

@end

