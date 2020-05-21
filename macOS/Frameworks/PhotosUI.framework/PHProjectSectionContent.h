//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSSecureCoding-Protocol.h>

@class NSArray, NSColor;

@interface PHProjectSectionContent : NSObject <NSSecureCoding>
{
    NSArray *_elements;
    long long _numberOfColumns;
    double _aspectRatio;
    NSArray *_cloudAssetIdentifiers;
    NSColor *_backgroundColor;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) NSArray *cloudAssetIdentifiers; // @synthesize cloudAssetIdentifiers=_cloudAssetIdentifiers;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(readonly, nonatomic) NSArray *elements; // @synthesize elements=_elements;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)description:(BOOL)arg1;
- (id)initWithElements:(id)arg1 numberOfColumns:(long long)arg2 aspectRatio:(double)arg3 assetIdentifiers:(id)arg4;
- (id)initWithElements:(id)arg1 numberOfColumns:(long long)arg2 aspectRatio:(double)arg3 assetIdentifiers:(id)arg4 backgroundColor:(id)arg5;

@end

