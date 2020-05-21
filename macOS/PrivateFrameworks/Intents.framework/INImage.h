//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableObject-Protocol.h>
#import <Intents/INImageExport-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL;

@interface INImage : NSObject <INJSONSerializable, INKeyImageProducing, INCacheableObject, INImageProxyInjecting, INImageExport, NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    CDStruct_8caa76fc _imageSize;
}

+ (BOOL)supportsSecureCoding;
+ (id)_classesInCluster;
+ (id)_bundleImageWithURL:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)imageWithImageData:(id)arg1;
+ (id)imageWithURL:(id)arg1 width:(double)arg2 height:(double)arg3;
+ (id)imageWithURL:(id)arg1;
+ (void)registerImageLoadersOnce;
+ (void)initialize;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic, setter=_setImageSize:) CDStruct_8caa76fc _imageSize; // @synthesize _imageSize;
@property(copy, nonatomic, setter=_setIdentifier:) NSString *_identifier; // @synthesize _identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_copyWithSubclass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_dictionaryRepresentation;
- (id)_descriptionAtIndent:(unsigned long long)arg1;
- (id)_description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL _isSupportedForDonation;
@property(readonly, nonatomic) BOOL _isEligibleForProxying;
- (id)_initWithURLRepresentation:(id)arg1;
- (id)_URLRepresentation;
- (id)_preferredImageLoader;
@property(copy, nonatomic, setter=_setBundleIdentifier:) NSString *_bundleIdentifier;
@property(copy, nonatomic, setter=_setBundlePath:) NSString *_bundlePath;
@property(copy, nonatomic, setter=_setName:) NSString *_name;
@property(copy, nonatomic, setter=_setUri:) NSURL *_uri;
@property(copy, nonatomic, setter=_setImageData:) NSData *_imageData;
- (void)_requestProxy:(CDUnknownBlockType)arg1;
- (void)_retrieveImageDataWithReply:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL _requiresRetrieval;
- (id)_initWithData:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (id)init;
- (id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
@property(readonly) INImage *_keyImage;
@property(readonly, copy, nonatomic) NSString *cacheIdentifier;
- (void)generateCachePayloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_in_writeableFilePersistenceConfigurationForStoreType:(unsigned long long)arg1;
- (id)_in_downscaledImageForFilePersistence;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

