//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISCompositorRecipe-Protocol.h>

__attribute__((visibility("hidden")))
@interface ISiosDocumentRecipe : NSObject <ISCompositorRecipe>
{
    unsigned long long _options;
}

@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)layerTreeForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGSize)badgeSizeForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)init;

@end

