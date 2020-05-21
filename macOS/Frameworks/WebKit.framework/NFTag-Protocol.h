//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class NSData, NSString;
@protocol NFTag, NFTagA, NFTagB, NFTagF;

@protocol NFTag <NSObject>
@property(readonly, nonatomic) id <NFTagF> tagF;
@property(readonly, nonatomic) id <NFTagB> tagB;
@property(readonly, nonatomic) id <NFTagA> tagA;
@property(readonly, copy, nonatomic) NSData *AppData;
@property(readonly, nonatomic) unsigned long long ndefContainerSize;
@property(readonly, nonatomic) unsigned long long ndefMessageSize;
@property(readonly, nonatomic) unsigned int ndefAvailability;
@property(readonly, copy, nonatomic) NSData *UID;
@property(readonly, copy, nonatomic) NSData *tagID;
@property(readonly, nonatomic) unsigned int technology;
@property(readonly, nonatomic) unsigned int type;
- (BOOL)isEqualToNFTag:(id <NFTag>)arg1;
- (NSString *)description;
- (id)initWithNFTag:(id <NFTag>)arg1;
@end

