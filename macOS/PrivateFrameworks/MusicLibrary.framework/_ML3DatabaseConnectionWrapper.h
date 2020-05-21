//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnection, NSThread;

@interface _ML3DatabaseConnectionWrapper : NSObject
{
    ML3DatabaseConnection *_connection;
    NSThread *_owningThread;
    NSThread *_borrowingThread;
    unsigned long long _useCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long useCount; // @synthesize useCount=_useCount;
@property(retain, nonatomic) NSThread *borrowingThread; // @synthesize borrowingThread=_borrowingThread;
@property(retain, nonatomic) NSThread *owningThread; // @synthesize owningThread=_owningThread;
@property(retain, nonatomic) ML3DatabaseConnection *connection; // @synthesize connection=_connection;
- (id)description;
- (id)initWithConnection:(id)arg1;

@end

