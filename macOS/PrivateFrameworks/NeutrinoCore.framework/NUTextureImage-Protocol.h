//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImage-Protocol.h>

@class NURegion;

@protocol NUTextureImage <NUImage>
- (void)readTextureRegion:(NURegion *)arg1 withBlock:(void (^)(id <NUTextureTile>, char *))arg2;
@end

