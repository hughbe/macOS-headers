//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalDrawImageCache : NSObject
{
}

+ (id)swatchCategoryForLargeSize:(BOOL)arg1;
+ (id)normalCheckboxCategory;
+ (id)dotOccurrenceBorderCategoryForSize:(double)arg1;
+ (id)dotCategoryForSize:(double)arg1;
+ (id)eventIconCategory;
+ (id)eventTileCategory;
+ (void)purgeCategory:(id)arg1;
+ (void)purgeColor:(id)arg1;
+ (void)cacheImage:(id)arg1 withColor:(id)arg2 forKey:(id)arg3 inCategory:(id)arg4;
+ (id)imageWithColor:(id)arg1 forKey:(id)arg2 inCategory:(id)arg3;
+ (void)_setup;

@end

