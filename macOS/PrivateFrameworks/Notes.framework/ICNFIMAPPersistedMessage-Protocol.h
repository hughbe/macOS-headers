//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/ICNFMCChanging-Protocol.h>

@class NSData, NSManagedObjectID, NSString;

@protocol ICNFIMAPPersistedMessage <ICNFMCChanging>
@property(copy) NSString *remoteID;
@property(readonly, nonatomic) BOOL persistentIDType;
- (void)appendData:(NSData *)arg1 part:(NSString *)arg2;
- (void)setData:(NSData *)arg1 isPartial:(BOOL)arg2;

@optional
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) long long libraryID;
@end

