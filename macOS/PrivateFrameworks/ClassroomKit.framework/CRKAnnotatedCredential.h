//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol CRKKeychainItem;

@interface CRKAnnotatedCredential : NSObject
{
    id <CRKKeychainItem> _credential;
    NSDictionary *_annotation;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *annotation; // @synthesize annotation=_annotation;
@property(readonly, nonatomic) id <CRKKeychainItem> credential; // @synthesize credential=_credential;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCredential:(id)arg1 annotation:(id)arg2;

@end

