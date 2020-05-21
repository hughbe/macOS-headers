//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMaterial/MTTinting-Protocol.h>

@class NSDictionary, NSString;

@interface MTTintingMaterialSettings : NSObject <MTTinting>
{
    NSDictionary *_tintColorDescription;
    struct CGColor *_tintColor;
    double _tintAlpha;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double tintAlpha; // @synthesize tintAlpha=_tintAlpha;
@property(readonly, nonatomic) struct CGColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, copy, nonatomic) NSDictionary *tintColorDescription; // @synthesize tintColorDescription=_tintColorDescription;
- (void)_processTintingDescription:(id)arg1 defaultingToIdentity:(BOOL)arg2;
- (void)dealloc;
- (id)initWithTintingDescription:(id)arg1 andDescendantDescriptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

