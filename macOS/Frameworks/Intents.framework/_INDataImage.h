//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INImage.h>

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface _INDataImage : INImage
{
    NSUUID *_sha256HashUUID;
    NSData *_imageData;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_sha256HashUUID;
- (BOOL)_isEligibleForProxying;
- (void)_setImageData:(id)arg1;
- (id)_imageData;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_dictionaryRepresentation;
- (id)_identifier;
- (void)_retrieveImageDataWithReply:(CDUnknownBlockType)arg1;
- (BOOL)_requiresRetrieval;
- (BOOL)isEqual:(id)arg1;
- (id)initWithImageData:(id)arg1;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

