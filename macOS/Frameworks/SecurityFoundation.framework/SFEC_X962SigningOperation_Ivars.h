//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _SFECKeySpecifier;
@protocol SFDigestOperationInternal;

__attribute__((visibility("hidden")))
@interface SFEC_X962SigningOperation_Ivars : NSObject
{
    _SFECKeySpecifier *keySpecifier;
    id <SFDigestOperationInternal> digestOperation;
}

- (void).cxx_destruct;

@end

