//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMAPFetchDataItem : NSObject
{
    NSString *_commandString;
}

+ (id)gmailLabelsDataItem;
+ (id)modificationSequenceDataItem;
+ (id)sizeDataItem;
+ (id)internalDateDataItem;
+ (id)bodyStructureDataItem;
+ (id)UIDDataItem;
+ (id)flagsDataItem;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *commandString; // @synthesize commandString=_commandString;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

