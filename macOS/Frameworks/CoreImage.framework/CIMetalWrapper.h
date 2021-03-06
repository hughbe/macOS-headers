//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CIMetalWrapper : CIFilter
{
    NSMutableDictionary *_dict;
    NSString *inputFilterName;
}

@property(copy) NSString *inputFilterName; // @synthesize inputFilterName;
@property(retain) NSMutableDictionary *_dict; // @synthesize _dict;
- (id)outputImage;
- (id)dummyImagesForImages:(id)arg1;
- (id)attributes;
- (id)inputKeys;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end

