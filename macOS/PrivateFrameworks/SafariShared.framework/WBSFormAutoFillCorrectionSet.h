//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WBSFormAutoFillCorrectionSet : NSObject
{
    NSString *_domain;
    NSDictionary *_fingerprintsToClassifications;
    NSDictionary *_fingerprintsToCorrections;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *fingerprintsToCorrections; // @synthesize fingerprintsToCorrections=_fingerprintsToCorrections;
@property(readonly, nonatomic) NSDictionary *fingerprintsToClassifications; // @synthesize fingerprintsToClassifications=_fingerprintsToClassifications;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDomain:(id)arg1 fingerprintsToCorrections:(id)arg2;
- (id)initWithDomain:(id)arg1 fingerprintsToClassifications:(id)arg2;

@end

