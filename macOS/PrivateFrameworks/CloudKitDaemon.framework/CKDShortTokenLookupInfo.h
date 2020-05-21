//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDShortTokenLookupInfo : NSObject <NSCopying>
{
    BOOL _shouldFetchRootRecord;
    BOOL _forceDSRefetch;
    NSString *_routingKey;
    NSData *_shortSharingTokenHashData;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL forceDSRefetch; // @synthesize forceDSRefetch=_forceDSRefetch;
@property(nonatomic) BOOL shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;
@property(retain, nonatomic) NSData *shortSharingTokenHashData; // @synthesize shortSharingTokenHashData=_shortSharingTokenHashData;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

