//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSData;

@interface VRFPublicKey : GPBMessage
{
}

+ (id)descriptor;
@property BOOL needsRefresh;

// Remaining properties
@property(nonatomic) int type; // @dynamic type;
@property(copy, nonatomic) NSData *vrfKey; // @dynamic vrfKey;

@end

