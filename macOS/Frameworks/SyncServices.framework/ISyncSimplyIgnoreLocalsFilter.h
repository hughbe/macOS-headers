//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SyncServices/ISyncFiltering-Protocol.h>

@class NSArray;

@interface ISyncSimplyIgnoreLocalsFilter : NSObject <ISyncFiltering>
{
    NSArray *_entityNames;
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)shouldApplyRecord:(id)arg1 withRecordIdentifier:(id)arg2;
- (id)supportedEntityNames;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithEntityNames:(id)arg1;

@end

