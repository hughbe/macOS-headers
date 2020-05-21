//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface BerkeleyDatabase : NSObject
{
    struct __db {
        int _field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
        CDUnknownFunctionPointerType _field6;
        CDUnknownFunctionPointerType _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
    } *_database;
    NSURL *_databaseURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
- (BOOL)_tryOpeningDatabaseOfType:(int)arg1 atPath:(const char *)arg2;
- (BOOL)_tryOpeningDatabaseAtPath:(const char *)arg1 error:(id *)arg2;
- (id)dataForKey:(id)arg1;
- (id)allData;
- (void)close;
- (BOOL)open:(id *)arg1;
@property(readonly, nonatomic, getter=isOpen) BOOL open;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1;

@end

