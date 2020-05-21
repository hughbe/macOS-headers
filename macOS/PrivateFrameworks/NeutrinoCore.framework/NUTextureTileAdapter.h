//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUTextureTile-Protocol.h>

@class NSString, NUGLTexture;

@interface NUTextureTileAdapter : NSObject <NUTextureTile>
{
    NUGLTexture *_texture;
    CDStruct_996ac03c _frameRect;
    CDStruct_996ac03c _contentRect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NUGLTexture *texture; // @synthesize texture=_texture;
@property(readonly, nonatomic) CDStruct_996ac03c contentRect; // @synthesize contentRect=_contentRect;
@property(readonly, nonatomic) CDStruct_996ac03c frameRect; // @synthesize frameRect=_frameRect;
- (id)init;
- (id)initWithFrameRect:(CDStruct_996ac03c)arg1 contentRect:(CDStruct_996ac03c)arg2 texture:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

