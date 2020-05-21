//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBButton-Protocol.h>

@class NSData, NSString, _SFPBImage;

@interface _SFPBButton : PBCodable <_SFPBButton, NSSecureCoding>
{
    BOOL _isSelected;
    _SFPBImage *_image;
    _SFPBImage *_selectedImage;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) _SFPBImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) _SFPBImage *image; // @synthesize image=_image;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

