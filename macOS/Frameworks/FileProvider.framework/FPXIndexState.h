//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface FPXIndexState : NSObject
{
    NSData *_lastPage;
    NSData *_lastChangeToken;
}

+ (BOOL)supportsSecureCoding;
+ (id)stateWithData:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *lastChangeToken; // @synthesize lastChangeToken=_lastChangeToken;
@property(readonly, nonatomic) NSData *lastPage; // @synthesize lastPage=_lastPage;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long phase;
@property(readonly, nonatomic) NSData *dataRepresentation;
- (id)initWithChangeToken:(id)arg1;
- (id)initWithPage:(id)arg1 changeToken:(id)arg2;
- (id)init;

@end

