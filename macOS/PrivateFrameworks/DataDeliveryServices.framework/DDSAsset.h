//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASAsset, MAAsset, NSDictionary, NSString, NSURL;

@interface DDSAsset : NSObject
{
    NSDictionary *_attributes;
    long long _compatibilityVersion;
    NSURL *_localURL;
    ASAsset *_asAsset;
    MAAsset *_maAsset;
}

+ (id)debuggingIDsForAssets:(id)arg1;
+ (id)uniqueIdentifierForASAsset:(id)arg1;
+ (id)uniqueIdentifierForMAAsset:(id)arg1;
+ (id)assetWithMAAsset:(id)arg1;
+ (id)assetWithASAsset:(id)arg1;
+ (id)asset;
- (void).cxx_destruct;
@property(retain, nonatomic) MAAsset *maAsset; // @synthesize maAsset=_maAsset;
@property(retain, nonatomic) ASAsset *asAsset; // @synthesize asAsset=_asAsset;
@property(retain, nonatomic) NSURL *localURL; // @synthesize localURL=_localURL;
@property(readonly, nonatomic) long long compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSString *debuggingID;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (void)_mergeAttributes:(id)arg1;
- (void)setasAsset:(id)arg1;
- (id)init;

@end

