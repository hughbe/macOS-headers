//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSBDatabaseUpdaterStatus : NSObject
{
    struct DatabaseUpdaterStatus _databaseUpdaterStatus;
}

@property(readonly, nonatomic) unsigned long long databaseUpdaterState;
@property(readonly, nonatomic) NSString *provider;
- (id)_initWithDatabaseUpdaterStatus:(struct DatabaseUpdaterStatus)arg1;

@end

