//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface CNContactChangesFetcher : NSObject
{
    BOOL _unify;
    NSSet *_identifiers;
    NSSet *_keysToFetch;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL unify; // @synthesize unify=_unify;
@property(retain, nonatomic) NSSet *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(retain, nonatomic) NSSet *identifiers; // @synthesize identifiers=_identifiers;

@end

