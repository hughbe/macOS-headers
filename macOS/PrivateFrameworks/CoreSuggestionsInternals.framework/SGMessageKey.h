//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString;

@interface SGMessageKey : NSObject <SGEntityKey>
{
    NSString *_uniqueIdentifier;
    NSString *_source;
}

+ (BOOL)isSupportedEntityType:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToMessageKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)serialize;
- (id)initWithSerialized:(id)arg1;
- (id)init;
- (id)initWithSource:(id)arg1 uniqueIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

