//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, NSString;

@interface PXSmartAlbumPersonCondition : PXSmartAlbumCondition
{
    NSArray *_personNames;
}

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *personName;
@property(readonly, nonatomic) NSArray *personNames;

@end

