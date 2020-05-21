//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EWSActiveDirectoryLookup : NSObject
{
    NSString *_emailAddress;
    NSArray *_discoveredRecords;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *discoveredRecords; // @synthesize discoveredRecords=_discoveredRecords;
@property(readonly, copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (BOOL)lookup;
- (id)init;
- (id)initWithEmailAddress:(id)arg1;

@end

