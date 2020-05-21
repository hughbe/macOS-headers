//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, NSString, TIInputMode;

@protocol TIAssetManaging <NSObject>
@property(copy, nonatomic) CDUnknownBlockType enabledInputModeIdentifiersProviderBlock;
- (NSArray *)topActiveRegions;
- (NSArray *)enabledInputModes;
- (void)requestAssetDownloadForLanguage:(NSString *)arg1 completion:(void (^)(long long))arg2;
- (NSArray *)ddsAssetContentItemsWithContentType:(NSString *)arg1 inputMode:(TIInputMode *)arg2 filteredWithRegion:(BOOL)arg3;
- (NSArray *)assetContentItemsWithContentType:(NSString *)arg1 inputMode:(TIInputMode *)arg2;
@end

