//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _LSMDocMetaDBConnection : NSObject
{
    struct sqlite3 *_database;
}

+ (id)connectionWithURL:(id)arg1;
- (void)dealloc;
- (struct sqlite3 *)database;

@end

