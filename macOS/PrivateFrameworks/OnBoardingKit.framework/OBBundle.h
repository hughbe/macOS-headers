//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

@interface OBBundle : NSObject
{
    NSString *_identifier;
    NSBundle *_bundle;
    NSString *_bundleVersion;
}

+ (id)bundleAtPath:(id)arg1;
+ (id)bundleWithIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)privacyFlow;
- (id)initWithBundle:(id)arg1;

@end

