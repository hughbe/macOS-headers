//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, NSData;

@interface HMDIdentifierSaltStore : NSObject
{
    HMFUnfairLock *_lock;
    NSData *_identifierSalt;
    NSData *_assistantIdentifierSalt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *assistantIdentifierSalt; // @synthesize assistantIdentifierSalt=_assistantIdentifierSalt;
@property(retain, nonatomic) NSData *identifierSalt; // @synthesize identifierSalt=_identifierSalt;
- (id)init;

@end

