//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHModel.h>

@class NSString;

@interface KHTrait : KHModel
{
    long long _categoryId;
    NSString *_name;
}

+ (id)traitForKey:(long long)arg1 fromDatabase:(id)arg2;
- (void)setName:(id)arg1;
- (void)cacheName:(id)arg1;
- (id)name;
- (void)setCategoryId:(long long)arg1;
- (void)cacheCategoryId:(long long)arg1;
- (long long)categoryId;
- (void)dealloc;

@end

