//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>

@class NSString;

@interface NSCustomResource : NSObject <NSCoding>
{
    NSString *className;
    NSString *resourceName;
}

+ (id)bundleForImageSearch;
+ (id)bundleForCurrentNib;
+ (void)popBundleForImageSearch;
+ (void)pushBundleForImageSearch:(id)arg1;
+ (void)initialize;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)loadSoundWithName:(id)arg1;
- (id)loadCIImageWithName:(id)arg1;
- (id)loadImageWithName:(id)arg1;
- (id)_loadImageWithName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setResourceName:(id)arg1;
- (id)resourceName;
- (void)setClassName:(id)arg1;
- (id)className;
- (void)dealloc;
- (id)init;

@end

