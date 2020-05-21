//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUIdentifiable-Protocol.h>

@class NSString, NUIdentifier;

@interface NUSource : NSObject <NUIdentifiable>
{
    NSString *_assetIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
- (id)sourceDefinition:(out id *)arg1;
- (BOOL)isEqualToSource:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NUIdentifier *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

