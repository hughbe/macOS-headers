//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;
@protocol _SFServiceIdentifier;

__attribute__((visibility("hidden")))
@interface SFCredentialSearchFilter_Ivars : NSObject
{
    NSDate *minimumCreationDate;
    NSDate *maximumCreationDate;
    NSDate *minimumModificationDate;
    NSDate *maximumModificationDate;
    NSArray<_SFServiceIdentifier> *serviceIdentifiers;
    NSArray *usernames;
}

- (void).cxx_destruct;

@end

