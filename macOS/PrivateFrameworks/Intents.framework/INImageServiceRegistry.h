//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface INImageServiceRegistry : NSObject
{
    NSMutableDictionary *_imageServicesByServiceIdentifier;
    NSMutableArray *_prioritySortedImageServices;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)imageServiceForServiceIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *imageServices;
- (void)_reprioritizeImageServices;
- (void)unregisterImageService:(id)arg1;
- (void)registerImageService:(id)arg1;
- (id)init;
- (id)imageLoaderForServiceIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *imageLoaders;
- (id)imageStorageServiceForServiceIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *imageStorageServices;

@end

