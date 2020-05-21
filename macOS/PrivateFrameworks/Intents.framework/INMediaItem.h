//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, NSDictionary, NSString;

@interface INMediaItem : NSObject <INKeyImageProducing, INImageProxyInjecting, INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_title;
    long long _type;
    INImage *_artwork;
    NSString *_artist;
    NSDictionary *_topics;
    NSDictionary *_namedEntities;
    NSString *_assetInfo;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSString *assetInfo; // @synthesize assetInfo=_assetInfo;
@property(readonly, copy) NSDictionary *namedEntities; // @synthesize namedEntities=_namedEntities;
@property(readonly, copy) NSDictionary *topics; // @synthesize topics=_topics;
@property(readonly, copy) NSString *artist; // @synthesize artist=_artist;
@property(copy) INImage *artwork; // @synthesize artwork=_artwork;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5 topics:(id)arg6 namedEntities:(id)arg7 assetInfo:(id)arg8;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5 topics:(id)arg6 namedEntities:(id)arg7;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 artwork:(id)arg4 artist:(id)arg5;
- (id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
@property(readonly) INImage *_keyImage;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)spokenPhrase;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

