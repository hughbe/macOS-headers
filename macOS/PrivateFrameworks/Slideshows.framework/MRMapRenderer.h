//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRMapRenderer : NSObject
{
}

+ (id)sharedRenderer;
- (id)splitToTileRect:(struct CGRect)arg1 withTileSize:(float)arg2;
- (struct CGImage *)_imageFromData:(id)arg1;
- (struct CGImage *)newTileForRect:(struct CGRect)arg1 withScale:(int)arg2 wrap:(BOOL)arg3;
- (id)requestStringForX:(int)arg1 y:(int)arg2 scale:(int)arg3;
- (id)init;

@end

