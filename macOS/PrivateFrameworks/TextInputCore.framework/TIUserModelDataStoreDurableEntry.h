//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface TIUserModelDataStoreDurableEntry : NSObject
{
    NSDate *_creationDate;
    NSDate *_lastUpdateDate;
    NSString *_key;
    NSNumber *_value;
}

- (void).cxx_destruct;
@property(readonly) NSNumber *value; // @synthesize value=_value;
@property(readonly) NSString *key; // @synthesize key=_key;
@property(readonly) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(readonly) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (id)initWithCreationDate:(id)arg1 withLastUpdateDate:(id)arg2 withKey:(id)arg3 withValue:(id)arg4;

@end

