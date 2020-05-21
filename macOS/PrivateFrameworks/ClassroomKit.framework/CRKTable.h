//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CRKTableEntries;

@interface CRKTable : NSObject
{
    id <CRKTableEntries> mEntries;
}

+ (id)parsableTableWithKeyValuePairs:(id)arg1;
+ (id)tableWithHeaders:(id)arg1 keyPaths:(id)arg2 objects:(id)arg3;
- (void).cxx_destruct;
- (unsigned long long)lengthOfLongestObjectInColumn:(unsigned long long)arg1;
- (id)columnLengths;
@property(readonly, copy, nonatomic) NSString *stringValue;
- (id)initWithEntries:(id)arg1;

@end

