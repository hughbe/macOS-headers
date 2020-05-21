//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFImage.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFURLImage-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface SFURLImage : SFImage <SFURLImage, NSSecureCoding, NSCopying>
{
    NSURL *_urlValue;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *urlValue; // @synthesize urlValue=_urlValue;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithURL:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *contentType;
@property(nonatomic) double cornerRadius;
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *identifier;
@property(copy) NSData *imageData;
@property(nonatomic) BOOL isTemplate;
@property(copy, nonatomic) NSString *keyColor;
@property(nonatomic) double scale;
@property(nonatomic) BOOL shouldCropToCircle;
@property(nonatomic) struct CGSize size;
@property(nonatomic) int source;
@property(readonly) Class superclass;

@end

